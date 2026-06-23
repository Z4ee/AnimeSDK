#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B23B0)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalInt_TypeDefinitionIndex = 28299;

	class OptionalInt : public ::MoleMole::DataStructures::Common::Optional_1<::System::Int32>
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALINT__CTOR_OFFSET))(this, a1);
		}
	};
}
