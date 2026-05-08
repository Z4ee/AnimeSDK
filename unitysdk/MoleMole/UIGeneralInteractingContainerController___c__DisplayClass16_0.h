#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15903DA0)
#define MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTROLLER___C__DISPLAYCLASS16_0__DOINTERACT_B__0_OFFSET UNITYSDK_OFFSET(0x15903DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralInteractingContainerController___c__DisplayClass16_0_TypeDefinitionIndex = 62406;

	class UIGeneralInteractingContainerController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Int32 npcTag; // 0x10
		::System::Int32 interactID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoInteract_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTERACTINGCONTAINERCONTROLLER___C__DISPLAYCLASS16_0__DOINTERACT_B__0_OFFSET))(this);
		}
	};
}
