#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E5EA20)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5EA60)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__ONINPUTACTION_B__10_1_OFFSET UNITYSDK_OFFSET(0x14E5EA70)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__ONUIINIT_B__67_0_OFFSET UNITYSDK_OFFSET(0x14E5EA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooAutoBattleInLevelPageController___c_TypeDefinitionIndex = 60385;

	class UIBangBooAutoBattleInLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__67_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooAutoBattleInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EBC0);
		}
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooAutoBattleInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EBC8);
		}
		static ::MoleMole::UIBangBooAutoBattleInLevelPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooAutoBattleInLevelPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooAutoBattleInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x2EBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnInputAction_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__ONINPUTACTION_B__10_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__67_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__ONUIINIT_B__67_0_OFFSET))(this, _);
		}
	};
}
