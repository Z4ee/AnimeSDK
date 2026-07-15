#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GENERALAUDIOITEM_GET_PLAYINGEVENTID_OFFSET UNITYSDK_OFFSET(0x192E7240)
#define RPG_CLIENT_GENERALAUDIOITEM_SET_PLAYINGEVENTID_OFFSET UNITYSDK_OFFSET(0x192E7250)
#define RPG_CLIENT_GENERALAUDIOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x192E7260)

namespace RPG::Client
{
	inline static constexpr unsigned int GeneralAudioItem_TypeDefinitionIndex = 65384;

	class GeneralAudioItem : public ::System::Object
	{
	public:
		::System::String* EventName; // 0x10
		::System::Single DelayTime; // 0x18
		::System::Boolean UseDefaultPlayer; // 0x1C
		::System::Single TriggerCD; // 0x20
		::System::UInt32 _PlayingEventID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GENERALAUDIOITEM__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PlayingEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GENERALAUDIOITEM_GET_PLAYINGEVENTID_OFFSET))(this);
		}

		::System::Void set_PlayingEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GENERALAUDIOITEM_SET_PLAYINGEVENTID_OFFSET))(this, a1);
		}
	};
}
