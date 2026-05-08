#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AA5FF0)
#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA6030)
#define MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__PLAYONSCREEN_B__39_0_OFFSET UNITYSDK_OFFSET(0x15AA6040)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMachineUnit3DModelController___c_TypeDefinitionIndex = 51282;

	class UIArcadeMachineUnit3DModelController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIArcadeMachineUnit3DModelController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeMachineUnit3DModelController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMachineUnit3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3A8A0);
		}
		static ::System::Action** StaticGet___9__39_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMachineUnit3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3A8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayOnScreen_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMACHINEUNIT3DMODELCONTROLLER___C__PLAYONSCREEN_B__39_0_OFFSET))(this);
		}
	};
}
