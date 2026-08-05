#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_991;
namespace MoleMole { class UIMiniscapeMissionPageController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183371F0)
#define MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABS_B__1_OFFSET UNITYSDK_OFFSET(0x18337200)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMissionPageController___c__DisplayClass10_0_TypeDefinitionIndex = 48949;

	class UIMiniscapeMissionPageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x10
		::Class_2_208CC9941471731A_991* chapterConfig; // 0x18
		::MoleMole::UIMiniscapeMissionPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabs_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMISSIONPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABS_B__1_OFFSET))(this);
		}
	};
}
