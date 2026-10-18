#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftSettleStage.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client::MechCraft::View { class MechCraftSettleControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftSettleViewModel; }
namespace RPG::UINavigation { class UINavigationScroller; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6549D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD6566B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD654A10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_START_OFFSET UNITYSDK_OFFSET(0xD656610)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6575D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__GETSTATENAME_OFFSET UNITYSDK_OFFSET(0xD656C40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__ONVMPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xD6567C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__REFRESH_OFFSET UNITYSDK_OFFSET(0xD654BD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__UNBINDBUTTONS_OFFSET UNITYSDK_OFFSET(0xD656410)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleControl_TypeDefinitionIndex = 80034;

	class MechCraftSettleControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel* _Content; // 0x18
		::RPG::Client::MechCraft::View::MechCraftSettleControlBinder* _Binder; // 0x20
		::System::String* _ExamState; // 0x28
		::System::String* _EarningState; // 0x30
		::System::String* _GoalState; // 0x38
		::UnityEngine::Animation* _Animation; // 0x40
		::RPG::Client::MonoInControlTip* _InControlTip; // 0x48
		::RPG::UINavigation::UINavigationScroller* _Scroller; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnVmPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__ONVMPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _Refresh(::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftSettleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__REFRESH_OFFSET))(this, a1);
		}

		::System::Void _UnbindButtons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__UNBINDBUTTONS_OFFSET))(this);
		}

		::System::String* _GetStateName(::RPG::Client::MechCraft::ViewModel::MechCraftSettleStage a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftSettleStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROL__GETSTATENAME_OFFSET))(this, a1);
		}
	};
}
