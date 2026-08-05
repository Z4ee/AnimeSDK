#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BDC30)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalBool_TypeDefinitionIndex = 28727;

	class OptionalBool : public ::MoleMole::DataStructures::Common::Optional_1<::System::Boolean>
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALBOOL__CTOR_OFFSET))(this, a1);
		}
	};
}
