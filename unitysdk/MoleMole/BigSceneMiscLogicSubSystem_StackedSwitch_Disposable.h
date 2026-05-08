#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BigSceneMiscLogicSubSystem_StackedSwitch; }

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1742A3E0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1742A440)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_StackedSwitch_Disposable_TypeDefinitionIndex = 66892;

	class BigSceneMiscLogicSubSystem_StackedSwitch_Disposable : public ::System::Object
	{
	public:
		::MoleMole::BigSceneMiscLogicSubSystem_StackedSwitch* Switch; // 0x10
		::System::Boolean IsCancelled; // 0x18
		::System::UInt32 GroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_STACKEDSWITCH_DISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
