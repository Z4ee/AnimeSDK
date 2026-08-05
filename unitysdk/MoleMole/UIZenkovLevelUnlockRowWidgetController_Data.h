#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVLEVELUNLOCKROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x162EEB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLevelUnlockRowWidgetController_Data_TypeDefinitionIndex = 62648;

	class UIZenkovLevelUnlockRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* DifficultyList; // 0x10
		::System::Int32 MapId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLEVELUNLOCKROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
