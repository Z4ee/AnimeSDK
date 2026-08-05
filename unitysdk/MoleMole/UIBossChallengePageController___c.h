#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D00757009D1EB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197F1D10)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197F1D50)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__ONMAINCITYBTNCLICK_B__78_0_OFFSET UNITYSDK_OFFSET(0x197F1D70)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__REFRESHSHOPBTNSTATE_B__60_2_OFFSET UNITYSDK_OFFSET(0x197F1D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c_TypeDefinitionIndex = 49472;

	class UIBossChallengePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBossChallengePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBossChallengePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x32BE0);
		}
		static ::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>** StaticGet___9__60_2()
		{
			return (::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x32BE8);
		}
		static ::System::Action** StaticGet___9__78_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x32BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshShopBtnState_b__60_2(::Class_1_F57D00757009D1EB* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F57D00757009D1EB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__REFRESHSHOPBTNSTATE_B__60_2_OFFSET))(this, good);
		}

		::System::Void _OnMainCityBtnClick_b__78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__ONMAINCITYBTNCLICK_B__78_0_OFFSET))(this);
		}
	};
}
