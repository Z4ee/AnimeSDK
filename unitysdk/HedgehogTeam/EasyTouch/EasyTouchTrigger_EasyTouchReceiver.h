#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouchTrigger_ETTParameter.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouchTrigger_ETTType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_EASYTOUCHRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x146F6F30)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger_EasyTouchReceiver_TypeDefinitionIndex = 37283;

	class EasyTouchTrigger_EasyTouchReceiver : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::HedgehogTeam::EasyTouch::EasyTouchTrigger_ETTType triggerType; // 0x14
		::System::String* name; // 0x18
		::System::Boolean restricted; // 0x20
		::UnityEngine::GameObject* gameObject; // 0x28
		::System::Boolean otherReceiver; // 0x30
		::UnityEngine::GameObject* gameObjectReceiver; // 0x38
		::HedgehogTeam::EasyTouch::EasyTouch_EvtType eventName; // 0x40
		::System::String* methodName; // 0x48
		::HedgehogTeam::EasyTouch::EasyTouchTrigger_ETTParameter parameter; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_EASYTOUCHRECEIVER__CTOR_OFFSET))(this);
		}
	};
}
