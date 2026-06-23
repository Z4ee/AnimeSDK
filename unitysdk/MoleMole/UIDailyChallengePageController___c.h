#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166B71B0)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166B71F0)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__55_0_OFFSET UNITYSDK_OFFSET(0x166B7200)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__73_0_OFFSET UNITYSDK_OFFSET(0x166B73D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController___c_TypeDefinitionIndex = 74589;

	class UIDailyChallengePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__73_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x37960);
		}
		static ::System::Action** StaticGet___9__55_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x37968);
		}
		static ::MoleMole::UIDailyChallengePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIDailyChallengePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x37970);
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
