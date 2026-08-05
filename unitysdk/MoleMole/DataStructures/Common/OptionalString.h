#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"

namespace System { class String; }

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BDCC0)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalString_TypeDefinitionIndex = 28799;

	class OptionalString : public ::MoleMole::DataStructures::Common::Optional_1<::System::String*>
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALSTRING__CTOR_OFFSET))(this, a1);
		}
	};
}
