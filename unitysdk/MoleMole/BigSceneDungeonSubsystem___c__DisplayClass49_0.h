#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1623A3B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS49_0__ONTIMESTATUSCHANGE_B__1_OFFSET UNITYSDK_OFFSET(0x1623A3C0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c__DisplayClass49_0_TypeDefinitionIndex = 44141;

	class BigSceneDungeonSubsystem___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::String* soundActionName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTimeStatusChange_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS49_0__ONTIMESTATUSCHANGE_B__1_OFFSET))(this);
		}
	};
}
