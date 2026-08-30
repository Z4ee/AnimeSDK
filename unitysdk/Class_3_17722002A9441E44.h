#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutDelivery; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_17722002A9441E44_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A45F530)
#define CLASS_3_17722002A9441E44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A45F180)
#define CLASS_3_17722002A9441E44_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A45F480)
#define CLASS_3_17722002A9441E44_TICK_OFFSET UNITYSDK_OFFSET(0x1A45F4D0)
#define CLASS_3_17722002A9441E44__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45F150)

inline static constexpr unsigned int Class_3_17722002A9441E44_TypeDefinitionIndex = 52451;

class Class_3_17722002A9441E44 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfTakeOutDelivery*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* HOPJIONMGFC; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17722002A9441E44_DISPOSE_OFFSET))(this);
	}
};
