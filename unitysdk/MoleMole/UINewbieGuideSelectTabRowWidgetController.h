#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_451;
class Class_2_A8C94EA612F5CBF3_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewbieGuideSelectTabRowWidgetController_Data; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ENSUREDETAILCACHE_OFFSET UNITYSDK_OFFSET(0x189D14F0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_FINDDETAILCONFIG_OFFSET UNITYSDK_OFFSET(0x189D13E0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189D0C40)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x189D0BB0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189D0D50)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189D0CD0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189D0990)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_REFRESHAVATARTAB_OFFSET UNITYSDK_OFFSET(0x189D0F40)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_REFRESHWEAPONTAB_OFFSET UNITYSDK_OFFSET(0x189D1190)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189D1B10)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189D1B20)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x189D1BB0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189D1C40)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189D1CE0)
#define MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189D1D70)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectTabRowWidgetController_TypeDefinitionIndex = 81334;

	class UINewbieGuideSelectTabRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_451*>** StaticGet__avatarDetailCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_451*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideSelectTabRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4C660);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_451*>** StaticGet__weaponDetailCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_451*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideSelectTabRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4C668);
		}
		::Class_2_A8C94EA612F5CBF3_4* _view; // 0x2F0
		::MoleMole::UINewbieGuideSelectTabRowWidgetController_Data* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshAvatarTab(::System::Int32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_REFRESHAVATARTAB_OFFSET))(this, avatarId);
		}

		::System::Void RefreshWeaponTab(::System::Int32 weaponItemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_REFRESHWEAPONTAB_OFFSET))(this, weaponItemId);
		}

		static ::System::Void EnsureDetailCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_ENSUREDETAILCACHE_OFFSET))();
		}

		::Class_2_208CC9941471731A_451* FindDetailConfig(::System::Int32 id, ::System::Boolean isAvatar)
		{
			return ((::Class_2_208CC9941471731A_451*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER_FINDDETAILCONFIG_OFFSET))(this, id, isAvatar);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
