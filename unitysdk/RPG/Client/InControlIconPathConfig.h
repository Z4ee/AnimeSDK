#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_INCONTROLICONPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FC250)

namespace RPG::Client
{
	inline static constexpr unsigned int InControlIconPathConfig_TypeDefinitionIndex = 61440;

	class InControlIconPathConfig : public ::System::Object
	{
	public:
		::System::String* InputControlType; // 0x10
		::System::String* XBoxIconPath; // 0x18
		::System::String* PSIconPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLICONPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
