#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class ParkourGameTalkEventInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_CHANGETOPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1A2ED790)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_METHOD_5_04D26C7621B9A351_OFFSET UNITYSDK_OFFSET(0x1A2ECDB0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1A2ED0E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2ED440)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2ECFC0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_SETBALLID_OFFSET UNITYSDK_OFFSET(0x1A2ECBD0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_SHOWTALKEVENT_OFFSET UNITYSDK_OFFSET(0x1A2ECD30)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A2ED670)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ED910)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourTalkEvent_TypeDefinitionIndex = 70770;

	class MonoParkourTalkEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* TalkPanel; // 0x18
		::Class_1_6CC143B9599F1FCA* Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x2C
		::System::UInt32 Field_5_4; // 0x30
		::System::Boolean Field_5_5; // 0x34
		::UnityEngine::Transform* Field_5_6; // 0x38
		::UnityEngine::Transform* Field_5_7; // 0x40
		::UnityEngine::UI::Image* Field_5_8; // 0x48
		::UnityEngine::UI::Text* Field_5_9; // 0x50
		::System::Boolean Field_5_10; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT__CTOR_OFFSET))(this);
		}

		::System::Void SetBallID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_SETBALLID_OFFSET))(this, a1);
		}

		::System::Void ShowTalkEvent(::RPG::Client::ParkourGameTalkEventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameTalkEventInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_SHOWTALKEVENT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_UPDATE_OFFSET))(this);
		}

		::System::Void ChangeToPlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_CHANGETOPLAYSTATE_OFFSET))(this);
		}

		::System::Void Method_5_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_METHOD_5_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_5_04D26C7621B9A351(::RPG::Client::ParkourGameTalkEventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGameTalkEventInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_METHOD_5_04D26C7621B9A351_OFFSET))(this, a1);
		}
	};
}
