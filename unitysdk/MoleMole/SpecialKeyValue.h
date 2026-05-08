#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SPECIALKEYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE9FD0)

namespace MoleMole
{
	inline static constexpr unsigned int SpecialKeyValue_TypeDefinitionIndex = 43881;

	class SpecialKeyValue : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE__CTOR_OFFSET))(this);
		}
	};
}
