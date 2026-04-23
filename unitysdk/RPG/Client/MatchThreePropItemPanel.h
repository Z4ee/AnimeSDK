#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace System { class Action; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0xA845D60)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_GET_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA845D20)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_GET_PROPINFO_OFFSET UNITYSDK_OFFSET(0xA845D40)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_INIT_OFFSET UNITYSDK_OFFSET(0xA845E90)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_METHOD_5_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xA846090)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA845EE0)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_SET_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA845D30)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL_SET_PROPINFO_OFFSET UNITYSDK_OFFSET(0xA845D50)
#define RPG_CLIENT_MATCHTHREEPROPITEMPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA8460E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePropItemPanel_TypeDefinitionIndex = 60733;

	class MatchThreePropItemPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* IconImage; // 0x18
		::UnityEngine::UI::Image* IconBan; // 0x20
		::RPG::Client::LocalizedText* NumText; // 0x28
		::UnityEngine::UI::Button* Button; // 0x30
		::System::Action* _OnButtonClick_k__BackingField; // 0x38
		::RPG::Client::MatchThreeGameProp* _PropInfo_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnButtonClick()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_GET_ONBUTTONCLICK_OFFSET))(this);
		}

		::System::Void set_OnButtonClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_SET_ONBUTTONCLICK_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeGameProp* get_PropInfo()
		{
			return ((::RPG::Client::MatchThreeGameProp*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_GET_PROPINFO_OFFSET))(this);
		}

		::System::Void set_PropInfo(::RPG::Client::MatchThreeGameProp* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_SET_PROPINFO_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_AWAKE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::MatchThreeGameProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_INIT_OFFSET))(this, a1);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void Method_5_9A6DA36CCAE7D188()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPITEMPANEL_METHOD_5_9A6DA36CCAE7D188_OFFSET))(this);
		}
	};
}
