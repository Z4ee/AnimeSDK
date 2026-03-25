#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLESELECTHOUGUDIALOGINITPARAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA88D900)
#define RPG_GAMECORE_BATTLESELECTHOUGUDIALOGINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA88D970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleSelectHouguDialogInitParam_TypeDefinitionIndex = 44534;

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
