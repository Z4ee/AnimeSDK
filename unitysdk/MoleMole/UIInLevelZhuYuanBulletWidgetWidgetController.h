#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_670AC8E9FAE34B3B_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_CURWEAPONMODE_OFFSET UNITYSDK_OFFSET(0x164EF860)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x164EF850)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x164EF870)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_GET_ROOTANIM_OFFSET UNITYSDK_OFFSET(0x164EF880)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164EEF40)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x164EF040)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONISSHOWMODIFIED_OFFSET UNITYSDK_OFFSET(0x164EF230)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONMODEMODIFIED_OFFSET UNITYSDK_OFFSET(0x164EF4A0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164EF190)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164EEE70)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164EEED0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x164EF400)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_REFRESHMODE_OFFSET UNITYSDK_OFFSET(0x164EF760)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x164EF5A0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_CURWEAPONMODE_OFFSET UNITYSDK_OFFSET(0x164EF7E0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x164EF6F0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x164EF6A0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x164EEFD0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x164EF900)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164EF8A0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164EF980)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164EFA10)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164EFAA0)
#define MOLEMOLE_UIINLEVELZHUYUANBULLETWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164EFB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex = 64764;

	class UIInLevelZhuYuanBulletWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_OrangeCost()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x3D150);
		}
		static ::System::String** StaticGet_Orange2Grey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x3D158);
		}
		static ::System::String** StaticGet_OrangeGet()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x3D160);
		}
		static ::System::String** StaticGet_GreyGet()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x3D168);
		}
		static ::System::String** StaticGet_Grey2Orange()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelZhuYuanBulletWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x3D170);
		}
		::System::String* _curAnimClipName; // 0x2C0
		::System::Boolean _isPlaying; // 0x2C8
		::System::Boolean _isShow; // 0x2C9
		::Class_2_670AC8E9FAE34B3B_2* _view; // 0x2D0
		::System::Int32 _curWeaponMode; // 0x2D8
		::System::Int32 CtrlerIndex; // 0x2DC
		::MoleMole::Battle::Entity* _ownerEntity; // 0x2E0

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
