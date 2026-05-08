#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E2FE50)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2FE90)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__GET_ACTIVATEDCAMPS_B__22_0_OFFSET UNITYSDK_OFFSET(0x17E2FEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelShopWidgetController___c_TypeDefinitionIndex = 50173;

	class UIABInLevelShopWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelShopWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37AE0);
		}
		static ::MoleMole::UIABInLevelShopWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIABInLevelShopWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelShopWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_ActivatedCamps_b__22_0(::System::ValueTuple_2<::System::Int32, ::System::Int32> x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__GET_ACTIVATEDCAMPS_B__22_0_OFFSET))(this, x);
		}
	};
}
