#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LEVELSTATESUBSYSTEM_GETLEVELSTATE_OFFSET UNITYSDK_OFFSET(0x19BF6EA0)
#define MOLEMOLE_LEVELSTATESUBSYSTEM_REGISTERONLEVELSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x19BF6FD0)
#define MOLEMOLE_LEVELSTATESUBSYSTEM_UNREGISTERONLEVELSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x19BF7080)
#define MOLEMOLE_LEVELSTATESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF7130)

namespace MoleMole
{
	inline static constexpr unsigned int LevelStateSubsystem_TypeDefinitionIndex = 75421;

	class LevelStateSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::LevelStateSubsystem*>
	{
	public:
		::System::Action_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92>* _OnLevelStageChanged; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92>* LevelStateMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean GetLevelState(::MoleMole::LevelStateDefine_ELevelStateName name, ::Struct_2_A47ACAABA9AAFE92& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM_GETLEVELSTATE_OFFSET))(this, name, value);
		}

		::System::Void RegisterOnLevelStageChanged(::System::Action_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM_REGISTERONLEVELSTAGECHANGED_OFFSET))(this, action);
		}

		::System::Void UnRegisterOnLevelStageChanged(::System::Action_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92>*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATESUBSYSTEM_UNREGISTERONLEVELSTAGECHANGED_OFFSET))(this, action);
		}
	};
}
