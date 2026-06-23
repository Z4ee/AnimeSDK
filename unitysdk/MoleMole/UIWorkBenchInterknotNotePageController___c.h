#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;
class Class_2_208CC9941471731A_529;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET UNITYSDK_OFFSET(0x16E047D0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E04780)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E047C0)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x16E04890)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_1_OFFSET UNITYSDK_OFFSET(0x16E048E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex = 77514;

	class UIWorkBenchInterknotNotePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIWorkBenchInterknotNotePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIWorkBenchInterknotNotePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F650);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_529*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_529*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F658);
		}
		static ::System::Comparison_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>** StaticGet___9__17_1()
		{
			return (::System::Comparison_1<::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F660);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInterknotNotePageController___c_TypeDefinitionIndex)->GetStaticField(0x3F668);
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

		::System::Int32 _InitPopupSortData_b__17_0(::Class_2_208CC9941471731A_529* a, ::Class_2_208CC9941471731A_529* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_529*, ::Class_2_208CC9941471731A_529*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_0_OFFSET))(this, a, b);
		}

		::System::Int32 _InitPopupSortData_b__17_1(::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* a, ::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*, ::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER___C__INITPOPUPSORTDATA_B__17_1_OFFSET))(this, a, b);
		}
	};
}
