#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_91;
class Class_3_48A3D3A34C52331D_6;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E6AAC0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6AB00)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_0_OFFSET UNITYSDK_OFFSET(0x15E6AB20)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_1_OFFSET UNITYSDK_OFFSET(0x15E6AC30)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x15E6B140)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSTARTCLICKHANDLE_B__17_0_OFFSET UNITYSDK_OFFSET(0x15E6AB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex = 72827;

	class UIAbyssArpeggioLevelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_91*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_91*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E00);
		}
		static ::System::Action** StaticGet___9__18_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E08);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E10);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_6*>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_6*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E18);
		}
		static ::MoleMole::UIAbyssArpeggioLevelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssArpeggioLevelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioLevelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x41E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnStartClickHandle_b__17_0(::Class_3_48A3D3A34C52331D_6* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSTARTCLICKHANDLE_B__17_0_OFFSET))(this, ret);
		}

		::System::Void _OnHollowReconnectHandle_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_0_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__18_1_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__26_0(::Class_2_208CC9941471731A_91* a, ::Class_2_208CC9941471731A_91* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_91*, ::Class_2_208CC9941471731A_91*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__ONSHOW_B__26_0_OFFSET))(this, a, b);
		}
	};
}
