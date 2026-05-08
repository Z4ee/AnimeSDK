#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B515C0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B51600)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REALGOTOSHOP_B__61_4_OFFSET UNITYSDK_OFFSET(0x14B51610)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REFRESHGOODS_B__62_1_OFFSET UNITYSDK_OFFSET(0x14B51620)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REFRESHGOODS_B__62_2_OFFSET UNITYSDK_OFFSET(0x14B51630)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REFRESHGOODS_B__62_3_OFFSET UNITYSDK_OFFSET(0x14B51640)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c_TypeDefinitionIndex = 51846;

	class UIHollowShopWidgetChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__62_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowShopWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBE0);
		}
		static ::MoleMole::UIHollowShopWidgetChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowShopWidgetChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowShopWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBE8);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__62_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowShopWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBF0);
		}
		static ::System::Action** StaticGet___9__61_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowShopWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CBF8);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__62_3()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowShopWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RealGotoShop_b__61_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REALGOTOSHOP_B__61_4_OFFSET))(this);
		}

		::System::Void _RefreshGoods_b__62_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REFRESHGOODS_B__62_1_OFFSET))(this, success);
		}

		::System::Void _RefreshGoods_b__62_2(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REFRESHGOODS_B__62_2_OFFSET))(this, success);
		}

		::System::Void _RefreshGoods_b__62_3(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__REFRESHGOODS_B__62_3_OFFSET))(this, success);
		}
	};
}
