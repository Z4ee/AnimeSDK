#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19427D00)
#define RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19427D50)
#define RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_GET_TRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x19427DA0)
#define RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_SET_TRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x19427DB0)
#define RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT__CTOR_OFFSET UNITYSDK_OFFSET(0x19427CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerOnTriggerEvt_TypeDefinitionIndex = 56782;

	class AdventureTriggerOnTriggerEvt : public ::System::Object
	{
	public:
		::System::String* _TriggerKey_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::String* get_TriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_GET_TRIGGERKEY_OFFSET))(this);
		}

		::System::Void set_TriggerKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERONTRIGGEREVT_SET_TRIGGERKEY_OFFSET))(this, a1);
		}
	};
}
