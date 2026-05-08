#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C2EE9BE6ADE8BB7;
class Class_2_208CC9941471731A_911;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CAFDA0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CAFDE0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x15CB00E0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x15CAFDF0)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x15CAFF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBossWidgetController___c_TypeDefinitionIndex = 57369;

	class UIHandBookBossWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_911*, ::Class_1_8C2EE9BE6ADE8BB7*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_911*, ::Class_1_8C2EE9BE6ADE8BB7*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x327D0);
		}
		static ::MoleMole::UIHandBookBossWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookBossWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x327D8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x327E0);
		}
		static ::System::Func_2<::Class_1_8C2EE9BE6ADE8BB7*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_8C2EE9BE6ADE8BB7*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x327E8);
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

		::Class_1_8C2EE9BE6ADE8BB7* _OnUIOpen_b__4_0(::Class_2_208CC9941471731A_911* template_)
		{
			return ((::Class_1_8C2EE9BE6ADE8BB7*(*)(::PVOID, ::Class_2_208CC9941471731A_911*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, template_);
		}

		::System::Int32 _OnShow_b__5_0(::Class_1_8C2EE9BE6ADE8BB7* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8C2EE9BE6ADE8BB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}
	};
}
