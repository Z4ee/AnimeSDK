#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915;
class Class_2_208CC9941471731A_481;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET UNITYSDK_OFFSET(0x126BC1C0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x126BC170)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x126BC1B0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x126BC280)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_1_OFFSET UNITYSDK_OFFSET(0x126BC2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex = 53659;

	class UIWorkBenchInterknotNotePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_481*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_481*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFC0);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFC8);
		}
		static ::System::Comparison_1<::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*>** StaticGet___9__17_1()
		{
			return (::System::Comparison_1<::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFD0);
		}
		static ::MoleMole::UIWorkBenchInterknotNotePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchInterknotNotePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3CFD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_Button_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET))(this);
		}

		::System::Int32 _InitPopupSortData_b__17_0(::Class_2_208CC9941471731A_481* a, ::Class_2_208CC9941471731A_481* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_481*, ::Class_2_208CC9941471731A_481*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_0_OFFSET))(this, a, b);
		}

		::System::Int32 _InitPopupSortData_b__17_1(::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* a, ::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*, ::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_1_OFFSET))(this, a, b);
		}
	};
}
