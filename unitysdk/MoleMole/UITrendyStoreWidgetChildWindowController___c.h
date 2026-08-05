#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__BOOKTOYDEAL_B__22_1_OFFSET UNITYSDK_OFFSET(0x17D74500)
#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D744B0)
#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D744F0)
#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__TAKETOYDEAL_B__23_1_OFFSET UNITYSDK_OFFSET(0x17D74590)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetChildWindowController___c_TypeDefinitionIndex = 49818;

	class UITrendyStoreWidgetChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UITrendyStoreWidgetChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UITrendyStoreWidgetChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UITrendyStoreWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x332D0);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__22_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UITrendyStoreWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x332D8);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__23_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UITrendyStoreWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x332E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BookToyDeal_b__22_1(::Class_0_16E4307DCC419505_36* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__BOOKTOYDEAL_B__22_1_OFFSET))(this, errMsg);
		}

		::System::Void _TakeToyDeal_b__23_1(::Class_0_16E4307DCC419505_36* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__TAKETOYDEAL_B__23_1_OFFSET))(this, errMsg);
		}
	};
}
