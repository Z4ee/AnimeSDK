#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E948A0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E948E0)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__4_0_OFFSET UNITYSDK_OFFSET(0x15E948F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController_ViewModel___c_TypeDefinitionIndex = 45981;

	class UISuibianTempleSellWidgetController_ViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleSellWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x332C0);
		}
		static ::MoleMole::UISuibianTempleSellWidgetController_ViewModel___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleSellWidgetController_ViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleSellWidgetController_ViewModel___c_TypeDefinitionIndex)->GetStaticField(0x332C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnCreateProperty_b__4_0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER_VIEWMODEL___C__ONCREATEPROPERTY_B__4_0_OFFSET))(this);
		}
	};
}
