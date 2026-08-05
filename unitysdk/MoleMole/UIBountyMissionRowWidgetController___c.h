#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBOUNTYMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170A3B80)
#define MOLEMOLE_UIBOUNTYMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170A3BC0)
#define MOLEMOLE_UIBOUNTYMISSIONROWWIDGETCONTROLLER___C__SENDRESETPHOTOMAINCITYQUEST_B__11_0_OFFSET UNITYSDK_OFFSET(0x170A3BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBountyMissionRowWidgetController___c_TypeDefinitionIndex = 56449;

	class UIBountyMissionRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBountyMissionRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBountyMissionRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBountyMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45030);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBountyMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendResetPhotoMainCityQuest_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONROWWIDGETCONTROLLER___C__SENDRESETPHOTOMAINCITYQUEST_B__11_0_OFFSET))(this);
		}
	};
}
