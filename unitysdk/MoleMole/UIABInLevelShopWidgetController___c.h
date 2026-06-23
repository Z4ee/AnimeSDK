#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191A0A60)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191A0AA0)
#define MOLEMOLE_UIABINLEVELSHOPWIDGETCONTROLLER___C__GET_ACTIVATEDCAMPS_B__22_0_OFFSET UNITYSDK_OFFSET(0x191A0AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelShopWidgetController___c_TypeDefinitionIndex = 66644;

	class UIABInLevelShopWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIABInLevelShopWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIABInLevelShopWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelShopWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39F80);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelShopWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39F88);
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
