#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180211E0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18021220)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__ONSTART_B__12_2_OFFSET UNITYSDK_OFFSET(0x18021230)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController___c_TypeDefinitionIndex = 65634;

	class UIBangBooUAVLevelPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangBooUAVLevelPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangBooUAVLevelPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A250);
		}
		static ::System::Action** StaticGet___9__12_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__12_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__ONSTART_B__12_2_OFFSET))(this);
		}
	};
}
