#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseTutorialWidgetController_TutorialData; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1639B9F0)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1639BA30)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITEXTERNALPOPUPS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1639BA40)
#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITHOLLOWINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x1639BA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex = 55914;

	class UIInLevelPauseTutorialWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelPauseTutorialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseTutorialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AB70);
		}
		static ::System::Comparison_1<::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AB78);
		}
		static ::System::Comparison_1<::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTutorialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3AB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitExternalPopups_b__10_0(::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* a, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITEXTERNALPOPUPS_B__10_0_OFFSET))(this, a, b);
		}

		::System::Int32 _InitHollowInfo_b__11_0(::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* a, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*, ::MoleMole::UIInLevelPauseTutorialWidgetController_TutorialData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER___C__INITHOLLOWINFO_B__11_0_OFFSET))(this, a, b);
		}
	};
}
