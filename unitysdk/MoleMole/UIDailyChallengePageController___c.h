#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18042A40)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18042A80)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__55_0_OFFSET UNITYSDK_OFFSET(0x18042A90)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__73_0_OFFSET UNITYSDK_OFFSET(0x18042C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController___c_TypeDefinitionIndex = 83095;

	class UIDailyChallengePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIDailyChallengePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDailyChallengePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A2F0);
		}
		static ::System::Action** StaticGet___9__55_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A2F8);
		}
		static ::System::Action** StaticGet___9__73_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x3A300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GotoTrainingCoursePage_b__55_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__55_0_OFFSET))(this);
		}

		::System::Void _RefreshVIP_b__73_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__73_0_OFFSET))(this);
		}
	};
}
