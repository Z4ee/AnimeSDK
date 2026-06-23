#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18122D90)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18122DD0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___OPENSELECTHEROPAGE_B__24_7_OFFSET UNITYSDK_OFFSET(0x18122E20)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___REFRESHSELECTEDAVATAR_B__29_0_OFFSET UNITYSDK_OFFSET(0x18122F40)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___REFRESHSELECTEDBUDDY_B__30_0_OFFSET UNITYSDK_OFFSET(0x18122F70)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___UPDATEROLES_B__13_2_OFFSET UNITYSDK_OFFSET(0x18122DE0)
#define MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___UPDATEROLES_B__13_3_OFFSET UNITYSDK_OFFSET(0x18122E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex = 69578;

	class UIHadalZone_RoomV2_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__13_2()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA50);
		}
		static ::System::Action** StaticGet___9__24_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA58);
		}
		static ::MoleMole::UIHadalZone_RoomV2_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_RoomV2_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA60);
		}
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA68);
		}
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__13_3()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA70);
		}
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__30_0()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RoomV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CA78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __UpdateRoles_b__13_2(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___UPDATEROLES_B__13_2_OFFSET))(this, t);
		}

		::System::Void __UpdateRoles_b__13_3(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___UPDATEROLES_B__13_3_OFFSET))(this, t);
		}

		::System::Void __OpenSelectHeroPage_b__24_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___OPENSELECTHEROPAGE_B__24_7_OFFSET))(this);
		}

		::System::Void __RefreshSelectedAvatar_b__29_0(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___REFRESHSELECTEDAVATAR_B__29_0_OFFSET))(this, t);
		}

		::System::Void __RefreshSelectedBuddy_b__30_0(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_ROOMV2_WIDGETCONTROLLER___C___REFRESHSELECTEDBUDDY_B__30_0_OFFSET))(this, t);
		}
	};
}
