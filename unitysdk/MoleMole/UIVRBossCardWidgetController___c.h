#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_10.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11583E80)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11583EC0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x11583ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController___c_TypeDefinitionIndex = 64802;

	class UIVRBossCardWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVRBossCardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIVRBossCardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37FE0);
		}
		static ::System::Func_2<::Struct_2_3659D99D9E0DCBB9_10, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Struct_2_3659D99D9E0DCBB9_10, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> _OnScrollItemUpdate_b__8_0(::Struct_2_3659D99D9E0DCBB9_10 item)
		{
			return ((::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_10))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__8_0_OFFSET))(this, item);
		}
	};
}
