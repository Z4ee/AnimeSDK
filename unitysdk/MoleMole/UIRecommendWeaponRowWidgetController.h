#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_60638234271CCDB8_149;
class Class_2_888734130AA1067E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_GETWEAPONID_OFFSET UNITYSDK_OFFSET(0x178EBD40)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_GETWEAPONUID_OFFSET UNITYSDK_OFFSET(0x178EBCF0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178EAF50)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x178EB3D0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x178EB060)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178EAFE0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178EACF0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178EAEE0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_REFRESHAVATARINFO_OFFSET UNITYSDK_OFFSET(0x178EB820)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x178EB150)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SETAVATARID_OFFSET UNITYSDK_OFFSET(0x178EBD90)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SETROLEICON_OFFSET UNITYSDK_OFFSET(0x178EBC40)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SETWEAPON_OFFSET UNITYSDK_OFFSET(0x178EB470)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0x178EBB90)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x178EBDE0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178EBDF0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x178EBE80)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x178EBF10)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178EBFB0)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178EC040)
#define MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178EC0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendWeaponRowWidgetController_TypeDefinitionIndex = 83648;

	class UIRecommendWeaponRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_149* _view; // 0x2F0
		::System::Int32 _weaponId; // 0x2F8
		::System::UInt32 _weaponUId; // 0x2FC
		::System::UInt32 _avatarId; // 0x300
		::Class_2_888734130AA1067E* _weaponConfig; // 0x308
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardRarityWidget; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshView(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, index);
		}

		::System::Void SetWeapon(::System::Int32 weaponID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SETWEAPON_OFFSET))(this, weaponID);
		}

		::System::Void ShowEmpty(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SHOWEMPTY_OFFSET))(this, show);
		}

		::System::Void SetRoleIcon(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SETROLEICON_OFFSET))(this, avatarId);
		}

		::System::UInt32 GetWeaponUId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_GETWEAPONUID_OFFSET))(this);
		}

		::System::Int32 GetWeaponId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_GETWEAPONID_OFFSET))(this);
		}

		::System::Void SetAvatarId(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_SETAVATARID_OFFSET))(this, avatarId);
		}

		::System::Void RefreshAvatarInfo(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER_REFRESHAVATARINFO_OFFSET))(this, avatarId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDWEAPONROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
