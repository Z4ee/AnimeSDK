#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfTakeOutWait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA9CB9163F709F4A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1561E940)
#define CLASS_3_FA9CB9163F709F4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1561E480)
#define CLASS_3_FA9CB9163F709F4A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1561E750)
#define CLASS_3_FA9CB9163F709F4A_TICK_OFFSET UNITYSDK_OFFSET(0x1561E7A0)
#define CLASS_3_FA9CB9163F709F4A__CTOR_OFFSET UNITYSDK_OFFSET(0x1561E450)

inline static constexpr unsigned int Class_3_FA9CB9163F709F4A_TypeDefinitionIndex = 49793;

class Class_3_FA9CB9163F709F4A : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfTakeOutWait*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfTakeOutWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfTakeOutWait*))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA9CB9163F709F4A_DISPOSE_OFFSET))(this);
	}
};
