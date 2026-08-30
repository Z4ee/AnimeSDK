#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class ParkourGameTalkEventInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_CHANGETOPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1C4E2F20)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_METHOD_5_04D26C7621B9A351_OFFSET UNITYSDK_OFFSET(0x1C4E2540)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1C4E2870)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C4E2BD0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C4E2750)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_SETBALLID_OFFSET UNITYSDK_OFFSET(0x1C4E2360)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_SHOWTALKEVENT_OFFSET UNITYSDK_OFFSET(0x1C4E24C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4E2E00)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURTALKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E30A0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourTalkEvent_TypeDefinitionIndex = 74069;

	class MonoParkourTalkEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* TalkPanel; // 0x18
		::Class_1_6CC143B9599F1FCA* DLALHGJDNNO; // 0x20
		::System::Single MFIFOONNJPE; // 0x28
		::System::Single CHPKHDBGCHM; // 0x2C
		::System::UInt32 GNPMFEEIKDK; // 0x30
		::System::Boolean DADBKKLAMEC; // 0x34
		::UnityEngine::Transform* AGKIOIHAIFC; // 0x38
		::UnityEngine::Transform* KMFKJEHLCEN; // 0x40
		::UnityEngine::UI::Image* CICKGLBJBGK; // 0x48
		::UnityEngine::UI::Text* KFFNCHJCLDD; // 0x50
		::System::Boolean OFEPHLEKKCD; // 0x58

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
