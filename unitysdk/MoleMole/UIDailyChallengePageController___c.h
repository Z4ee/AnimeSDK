#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D5F20)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157D5F60)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__54_0_OFFSET UNITYSDK_OFFSET(0x157D5F70)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__72_0_OFFSET UNITYSDK_OFFSET(0x157D60F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController___c_TypeDefinitionIndex = 67170;

	class UIDailyChallengePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__54_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x34F80);
		}
		static ::MoleMole::UIDailyChallengePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDailyChallengePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x34F88);
		}
		static ::System::Action** StaticGet___9__72_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x34F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GotoTrainingCoursePage_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__54_0_OFFSET))(this);
		}

		::System::Void _RefreshVIP_b__72_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__72_0_OFFSET))(this);
		}
	};
}
