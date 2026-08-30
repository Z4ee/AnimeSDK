#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x19EFC2F0)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_GET_ONSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EFC310)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EE2F90)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x19EFC300)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_SET_ONSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EFC320)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x19EFC3F0)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFC680)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EFC580)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EFC330)
#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x19EFC620)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopPartSelectItemControl_TypeDefinitionIndex = 80494;

	class B51RacingDevelopPartSelectItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Int32 _ItemIndex_k__BackingField; // 0x38
		::System::Action_1<::System::Int32>* _OnSelectCallback_k__BackingField; // 0x40
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _PartIconControl; // 0x48
		::RPG::Client::LocalizedText* _NameText; // 0x50
		::RPG::Client::AnimatorButton* _RootBtn; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_SET_ITEMINDEX_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Int32>* get_OnSelectCallback()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_GET_ONSELECTCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnSelectCallback(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_SET_ONSELECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void _BindButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__BINDBUTTON_OFFSET))(this);
		}

		::System::Void _OnItemClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__ONITEMCLICK_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPPARTSELECTITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}
	};
}
