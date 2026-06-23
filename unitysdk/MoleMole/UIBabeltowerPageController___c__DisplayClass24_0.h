#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIBabeltowerPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18679BC0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x18681D10)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x18681EC0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x186820E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass24_0_TypeDefinitionIndex = 64253;

	class UIBabeltowerPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::Class_2_B4378B46E0020E85* btn; // 0x18
		::UnityEngine::Animation* rootAnim; // 0x20
		::UnityEngine::Events::UnityAction* __9__1; // 0x28
		::System::Action* __9__2; // 0x30
		::Class_2_B4378B46E0020E85* startConsoleBtn; // 0x38
		::System::Int32 curPhase; // 0x40
		::System::Int32 lastPhase; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__2_OFFSET))(this);
		}
	};
}
