#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterSuperEventReady; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA9352940B595E4B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1754B900)
#define CLASS_3_FA9352940B595E4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1754B6A0)
#define CLASS_3_FA9352940B595E4B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1754B850)
#define CLASS_3_FA9352940B595E4B_TICK_OFFSET UNITYSDK_OFFSET(0x1754B8A0)
#define CLASS_3_FA9352940B595E4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1754B670)

inline static constexpr unsigned int Class_3_FA9352940B595E4B_TypeDefinitionIndex = 49801;

class Class_3_FA9352940B595E4B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterSuperEventReady*))((::PBYTE)hIl2Cpp + CLASS_3_FA9352940B595E4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9352940B595E4B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9352940B595E4B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FA9352940B595E4B_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9352940B595E4B_DISPOSE_OFFSET))(this);
	}
};
