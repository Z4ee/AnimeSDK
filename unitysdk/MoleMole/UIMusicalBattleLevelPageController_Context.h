#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIMUSICALBATTLELEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15108830)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelPageController_Context_TypeDefinitionIndex = 67339;

	class UIMusicalBattleLevelPageController_Context : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
