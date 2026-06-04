#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MODIFEREFFECTMAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC054520)

namespace RPG::Client
{
	inline static constexpr unsigned int ModiferEffectMapItem_TypeDefinitionIndex = 65572;

	class ModiferEffectMapItem : public ::System::Object
	{
	public:
		::System::String* ModiferName; // 0x10
		::System::String* EffectPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODIFEREFFECTMAPITEM__CTOR_OFFSET))(this);
		}
	};
}
