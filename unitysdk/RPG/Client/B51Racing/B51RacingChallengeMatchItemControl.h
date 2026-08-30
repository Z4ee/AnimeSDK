#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xC861590)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_GET_ONSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8615B0)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC861890)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xC8615A0)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_SET_ONSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8615C0)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__BINDBUTTON_OFFSET UNITYSDK_OFFSET(0xC861CD0)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC861F60)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC861E60)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC8615D0)
#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0xC861F00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingChallengeMatchItemControl_TypeDefinitionIndex = 80501;

	class B51RacingChallengeMatchItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Int32 _ItemIndex_k__BackingField; // 0x38
		::System::Action_1<::System::Int32>* _OnSelectCallback_k__BackingField; // 0x40
		::UnityEngine::UI::Image* _MapImage; // 0x48
		::RPG::Client::LocalizedText* _NameText; // 0x50
		::RPG::Client::LocalizedText* _TimeText; // 0x58
		::RPG::Client::AnimatorButton* _RootBtn; // 0x60
		::UnityEngine::GameObject* _SelectedGo; // 0x68
		::UnityEngine::GameObject* _TimePanelGo; // 0x70
		::UnityEngine::GameObject* _HintPanelGo; // 0x78
		::UnityEngine::GameObject* _CompletedGo; // 0x80
		::System::Boolean _buttonBound; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_SET_ITEMINDEX_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Int32>* get_OnSelectCallback()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_GET_ONSELECTCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnSelectCallback(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_SET_ONSELECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__BINDBUTTON_OFFSET))(this);
		}

		::System::Void _OnItemClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__ONITEMCLICK_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}
	};
}
