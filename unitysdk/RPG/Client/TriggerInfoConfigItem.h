#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define RPG_CLIENT_TRIGGERINFOCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA63B7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TriggerInfoConfigItem_TypeDefinitionIndex = 56302;

	class TriggerInfoConfigItem : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::RPG::GameCore::LevelTriggerInfo* Info; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGERINFOCONFIGITEM__CTOR_OFFSET))(this);
		}
	};
}
