#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_319;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148B60A0)
#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148B60E0)
#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x148B60F0)
#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__TAKEALLREWARDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x148B6510)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex = 80292;

	class UIInterKnotNewsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CC50);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_319*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_319*>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CC58);
		}
		static ::MoleMole::UIInterKnotNewsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotNewsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__10_0(::Class_2_208CC9941471731A_319* a, ::Class_2_208CC9941471731A_319* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_319*, ::Class_2_208CC9941471731A_319*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this, a, b);
		}

		::System::Void _TakeAllRewards_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__TAKEALLREWARDS_B__12_0_OFFSET))(this);
		}
	};
}
