#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EE2640)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE2680)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__ONPLAYANIMFINISH_B__16_0_OFFSET UNITYSDK_OFFSET(0x14EE2690)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetController___c_TypeDefinitionIndex = 75508;

	class UIGachaItemWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGachaItemWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGachaItemWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGachaItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46A70);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(UIGachaItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46A78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnPlayAnimFinish_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> l, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> r)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__ONPLAYANIMFINISH_B__16_0_OFFSET))(this, l, r);
		}
	};
}
