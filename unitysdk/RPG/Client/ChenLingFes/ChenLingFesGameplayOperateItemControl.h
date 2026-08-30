#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayOperateItemViewModel; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL_GETNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0x1B72A200)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B72A380)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0x1B72A2B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72BD20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B72A700)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B72B230)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B72A600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHCONFIRMBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1B72B9A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0x1B72B670)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1B72B420)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B72B0F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayOperateItemControl_TypeDefinitionIndex = 79986;

	class ChenLingFesGameplayOperateItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x38
		::RPG::Client::AnimatorButton* _BtnCancel; // 0x40
		::RPG::Client::AnimatorButton* _BtnRotate; // 0x48
		::UnityEngine::Transform* _Pointer; // 0x50
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* GetNavigationZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL_GETNAVIGATIONZONE_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHVISIBLE_OFFSET))(this);
		}

		::System::Void _RefreshPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHPOSITION_OFFSET))(this);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHSTATE_OFFSET))(this);
		}

		::System::Void _RefreshConfirmBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL__REFRESHCONFIRMBTNSTATE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayOperateItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayOperateItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYOPERATEITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
