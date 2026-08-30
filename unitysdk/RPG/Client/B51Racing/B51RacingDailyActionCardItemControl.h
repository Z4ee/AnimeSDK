#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x19EFBD40)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_GET_ONCARDSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EFBD60)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19EDCC10)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_SET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x19EFBD50)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_SET_ONCARDSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EFBD70)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFC2A0)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EFC1A0)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__GETCARDBGSTATEBYICONCOUNT_OFFSET UNITYSDK_OFFSET(0x19EFBFA0)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__GETCARDDESCTEXTIDBYICONCOUNT_OFFSET UNITYSDK_OFFSET(0x19EFBEC0)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19EFC030)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__ONCARDCLICK_OFFSET UNITYSDK_OFFSET(0x19EFC240)
#define RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19EFBD80)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDailyActionCardItemControl_TypeDefinitionIndex = 80493;

	class B51RacingDailyActionCardItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _STATE_NORMAL; // 0x0
		// static const ::System::String* _STATE_RECOMMEND; // 0x0
		::System::Int32 _CardIndex_k__BackingField; // 0x38
		::System::Action_1<::System::Int32>* _OnCardSelectCallback_k__BackingField; // 0x40
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListControl* _ValueIconListControl; // 0x48
		::RPG::Client::LocalizedText* _NameText; // 0x50
		::RPG::Client::LocalizedText* _DescText; // 0x58
		::RPG::Client::UIStateCtrl* _RootStateCtrl; // 0x60
		::RPG::Client::UIStateCtrl* _BGImgCtrl; // 0x68
		::RPG::Client::AnimatorButton* _RootBtn; // 0x70
		::RPG::UINavigation::UINavigationButton* _NaviBtn; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Void set_CardIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_SET_CARDINDEX_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Int32>* get_OnCardSelectCallback()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_GET_ONCARDSELECTCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnCardSelectCallback(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_SET_ONCARDSELECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::RPG::Client::TextID _GetCardDescTextIDByIconCount(::System::Int32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__GETCARDDESCTEXTIDBYICONCOUNT_OFFSET))(this, a1);
		}

		::System::String* _GetCardBGStateByIconCount(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__GETCARDBGSTATEBYICONCOUNT_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void _OnCardClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDAILYACTIONCARDITEMCONTROL__ONCARDCLICK_OFFSET))(this);
		}
	};
}
