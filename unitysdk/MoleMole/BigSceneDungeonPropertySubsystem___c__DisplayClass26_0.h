#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;

#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134D3AB0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x134D3AC0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__1_OFFSET UNITYSDK_OFFSET(0x134D3BE0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonPropertySubsystem___c__DisplayClass26_0_TypeDefinitionIndex = 56558;

	class BigSceneDungeonPropertySubsystem___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 serialNumber; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _FlushPendingSync_b__0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__0_OFFSET))(this, message);
		}

		::System::Void _FlushPendingSync_b__1(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___C__DISPLAYCLASS26_0__FLUSHPENDINGSYNC_B__1_OFFSET))(this, message);
		}
	};
}
