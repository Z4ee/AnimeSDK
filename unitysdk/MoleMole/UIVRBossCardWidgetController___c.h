#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x137BBAB0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x137BBAF0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x137BBB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController___c_TypeDefinitionIndex = 42031;

	class UIVRBossCardWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_3659D99D9E0DCBB9_3, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Struct_2_3659D99D9E0DCBB9_3, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x355B0);
		}
		static ::MoleMole::UIVRBossCardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIVRBossCardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVRBossCardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x355B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> _OnScrollItemUpdate_b__8_0(::Struct_2_3659D99D9E0DCBB9_3 item)
		{
			return ((::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__8_0_OFFSET))(this, item);
		}
	};
}
