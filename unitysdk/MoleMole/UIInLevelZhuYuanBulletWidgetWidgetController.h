#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_670AC8E9FAE34B3B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_CURWEAPONMODE_OFFSET UNITYSDK_OFFSET(0x146A1EC0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x146A1EB0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x146A1ED0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_ROOTANIM_OFFSET UNITYSDK_OFFSET(0x146A1EE0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x146A15A0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x146A16A0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONISSHOWMODIFIED_OFFSET UNITYSDK_OFFSET(0x146A1890)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONMODEMODIFIED_OFFSET UNITYSDK_OFFSET(0x146A1B00)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x146A17F0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x146A14D0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x146A1530)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x146A1A60)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x146A1DC0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x146A1C00)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_CURWEAPONMODE_OFFSET UNITYSDK_OFFSET(0x146A1E40)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x146A1D50)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x146A1D00)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x146A1630)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x146A1F60)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x146A1F00)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x146A1FE0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x146A2070)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x146A2100)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x146A2190)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex = 52848;

	class UIInLevelZhuYuanBulletWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_Grey2Orange()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x37EA0);
		}
		static ::System::String** StaticGet_OrangeGet()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x37EA8);
		}
		static ::System::String** StaticGet_OrangeCost()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x37EB0);
		}
		static ::System::String** StaticGet_GreyGet()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x37EB8);
		}
		static ::System::String** StaticGet_Orange2Grey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x37EC0);
		}
		::System::String* _curAnimClipName; // 0x2B8
		::System::Boolean _isPlaying; // 0x2C0
		::System::Boolean _isShow; // 0x2C1
		::Class_2_670AC8E9FAE34B3B* _view; // 0x2C8
		::System::Int32 _curWeaponMode; // 0x2D0
		::System::Int32 CtrlerIndex; // 0x2D4
		::MoleMole::Battle::Entity* _ownerEntity; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnIsShowModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONISSHOWMODIFIED_OFFSET))(this);
		}

		::System::Void OnModeModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONMODEMODIFIED_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_PLAYANIM_OFFSET))(this, animName);
		}

		::System::Void Refresh(::System::Int32 curBulletCount, ::MoleMole::Battle::Entity* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_REFRESH_OFFSET))(this, curBulletCount, owner);
		}

		::System::Void RefreshMode(::System::Int32 currentWeapon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_REFRESHMODE_OFFSET))(this, currentWeapon);
		}

		::System::Boolean get_isShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_isShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_ISSHOW_OFFSET))(this, value);
		}

		::System::Int32 get_curWeaponMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_CURWEAPONMODE_OFFSET))(this);
		}

		::System::Void set_curWeaponMode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_CURWEAPONMODE_OFFSET))(this, value);
		}

		::MoleMole::Battle::Entity* get_OwnerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::MoleMole::Battle::Entity* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_OWNERENTITY_OFFSET))(this, value);
		}

		::UnityEngine::Animation* get_RootAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_ROOTANIM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
