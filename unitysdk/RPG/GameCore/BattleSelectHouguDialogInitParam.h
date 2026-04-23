#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLESELECTHOUGUDIALOGINITPARAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5D2D00)
#define RPG_GAMECORE_BATTLESELECTHOUGUDIALOGINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D2D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSelectHouguDialogInitParam_TypeDefinitionIndex = 51264;

	class BattleSelectHouguDialogInitParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ForSelected; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESELECTHOUGUDIALOGINITPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESELECTHOUGUDIALOGINITPARAM_DISPOSE_OFFSET))(this);
		}
	};
}
