#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1519A980)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CHECKBUDDY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1519AAA0)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1519A9C0)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONCREATEVIEW_B__13_2_OFFSET UNITYSDK_OFFSET(0x1519A9D0)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1519AAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex = 66201;

	class UISuibianTempleBangbooSelectDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D3C0);
		}
		static ::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::Class_2_01B22E9930E7BB4D*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D3C8);
		}
		static ::MoleMole::UISuibianTempleBangbooSelectDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleBangbooSelectDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D3D0);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONCREATEVIEW_B__13_2_OFFSET))(this);
		}

		::System::Void _CheckBuddy_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CHECKBUDDY_B__14_0_OFFSET))(this);
		}

		::System::UInt32 _OnUIDestroy_b__17_0(::Class_2_01B22E9930E7BB4D* b)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__17_0_OFFSET))(this, b);
		}
	};
}
