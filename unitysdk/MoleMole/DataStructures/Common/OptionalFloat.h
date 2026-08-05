#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BDC80)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalFloat_TypeDefinitionIndex = 28806;

	class OptionalFloat : public ::MoleMole::DataStructures::Common::Optional_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALFLOAT__CTOR_OFFSET))(this, a1);
		}
	};
}
