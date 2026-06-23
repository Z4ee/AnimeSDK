#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D048BBBEAD733B3;
class Class_2_208CC9941471731A_249;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18810F30)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18810F70)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x18811270)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x18810F80)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x188110A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBossWidgetController___c_TypeDefinitionIndex = 76018;

	class UIHandBookBossWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34660);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_249*, ::Class_1_5D048BBBEAD733B3*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_249*, ::Class_1_5D048BBBEAD733B3*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34668);
		}
		static ::MoleMole::UIHandBookBossWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookBossWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34670);
		}
		static ::System::Func_2<::Class_1_5D048BBBEAD733B3*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_5D048BBBEAD733B3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET))(this);
		}

		::Class_1_5D048BBBEAD733B3* _OnUIOpen_b__4_0(::Class_2_208CC9941471731A_249* template_)
		{
			return ((::Class_1_5D048BBBEAD733B3*(*)(::PVOID, ::Class_2_208CC9941471731A_249*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, template_);
		}

		::System::Int32 _OnShow_b__5_0(::Class_1_5D048BBBEAD733B3* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5D048BBBEAD733B3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}
	};
}
