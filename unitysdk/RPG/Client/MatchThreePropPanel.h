#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client { class MatchThreePropItemPanel; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEPROPPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0xD651390)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ITEMPANELS_OFFSET UNITYSDK_OFFSET(0xD651310)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ONBUTTONCANCEL_OFFSET UNITYSDK_OFFSET(0xD651370)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ONBUTTONOK_OFFSET UNITYSDK_OFFSET(0xD651350)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ONPROPUSE_OFFSET UNITYSDK_OFFSET(0xD651330)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_HIDECONTROLS_OFFSET UNITYSDK_OFFSET(0xD651DB0)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD6514D0)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ITEMPANELS_OFFSET UNITYSDK_OFFSET(0xD651320)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ONBUTTONCANCEL_OFFSET UNITYSDK_OFFSET(0xD651380)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ONBUTTONOK_OFFSET UNITYSDK_OFFSET(0xD651360)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ONPROPUSE_OFFSET UNITYSDK_OFFSET(0xD651340)
#define RPG_CLIENT_MATCHTHREEPROPPANEL_SHOWCONTROLS_OFFSET UNITYSDK_OFFSET(0xD651E10)
#define RPG_CLIENT_MATCHTHREEPROPPANEL__AWAKE_B__23_0_OFFSET UNITYSDK_OFFSET(0xD651EC0)
#define RPG_CLIENT_MATCHTHREEPROPPANEL__AWAKE_B__23_1_OFFSET UNITYSDK_OFFSET(0xD651EE0)
#define RPG_CLIENT_MATCHTHREEPROPPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD651E70)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePropPanel_TypeDefinitionIndex = 66015;

	class MatchThreePropPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* PropItemLayout; // 0x18
		::UnityEngine::GameObject* PropItemPrefab; // 0x20
		::UnityEngine::RectTransform* DescriptionRoot; // 0x28
		::RPG::Client::LocalizedText* DescriptionText; // 0x30
		::RPG::Client::AnimatorButton* ButtonOk; // 0x38
		::RPG::Client::AnimatorButton* ButtonCancel; // 0x40
		::RPG::Client::LittleGame::Match3::OpponentRole Role; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreePropItemPanel*>* _ItemPanels_k__BackingField; // 0x50
		::System::Action_1<::RPG::Client::MatchThreeGameProp*>* _OnPropUse_k__BackingField; // 0x58
		::System::Action* _OnButtonOk_k__BackingField; // 0x60
		::System::Action* _OnButtonCancel_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreePropItemPanel*>* get_ItemPanels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreePropItemPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ITEMPANELS_OFFSET))(this);
		}

		::System::Void set_ItemPanels(::System::Collections::Generic::List_1<::RPG::Client::MatchThreePropItemPanel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreePropItemPanel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ITEMPANELS_OFFSET))(this, a1);
		}

		::System::Action_1<::RPG::Client::MatchThreeGameProp*>* get_OnPropUse()
		{
			return ((::System::Action_1<::RPG::Client::MatchThreeGameProp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ONPROPUSE_OFFSET))(this);
		}

		::System::Void set_OnPropUse(::System::Action_1<::RPG::Client::MatchThreeGameProp*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ONPROPUSE_OFFSET))(this, a1);
		}

		::System::Action* get_OnButtonOk()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ONBUTTONOK_OFFSET))(this);
		}

		::System::Void set_OnButtonOk(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ONBUTTONOK_OFFSET))(this, a1);
		}

		::System::Action* get_OnButtonCancel()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_GET_ONBUTTONCANCEL_OFFSET))(this);
		}

		::System::Void set_OnButtonCancel(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_SET_ONBUTTONCANCEL_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_AWAKE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void HideControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_HIDECONTROLS_OFFSET))(this);
		}

		::System::Void ShowControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL_SHOWCONTROLS_OFFSET))(this);
		}

		::System::Void _Awake_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL__AWAKE_B__23_0_OFFSET))(this);
		}

		::System::Void _Awake_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPROPPANEL__AWAKE_B__23_1_OFFSET))(this);
		}
	};
}
