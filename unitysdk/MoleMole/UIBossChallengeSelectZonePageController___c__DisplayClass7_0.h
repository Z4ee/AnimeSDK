#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_468A4FBF2E9F527C;
namespace MoleMole { class UIBossChallengeSelectZonePageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5AD10)
#define MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS7_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x17F5AD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeSelectZonePageController___c__DisplayClass7_0_TypeDefinitionIndex = 80096;

	class UIBossChallengeSelectZonePageController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Class_2_468A4FBF2E9F527C* hadalModel; // 0x10
		::MoleMole::UIBossChallengeSelectZonePageController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* allNewHadalZoneIDs; // 0x20
		::UnityEngine::Events::UnityAction* __9__0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGESELECTZONEPAGECONTROLLER___C__DISPLAYCLASS7_0__ONUIINIT_B__0_OFFSET))(this);
		}
	};
}
