#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterEnterWait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_434033F40D125929_METHOD_3_77EE15A62EEAAE1E_1_OFFSET UNITYSDK_OFFSET(0xBF023E0)
#define CLASS_3_434033F40D125929_METHOD_3_77EE15A62EEAAE1E_OFFSET UNITYSDK_OFFSET(0xBF02060)
#define CLASS_3_434033F40D125929_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF01F20)
#define CLASS_3_434033F40D125929_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF025C0)
#define CLASS_3_434033F40D125929__CTOR_OFFSET UNITYSDK_OFFSET(0xBF01EF0)

inline static constexpr unsigned int Class_3_434033F40D125929_TypeDefinitionIndex = 52457;

class Class_3_434033F40D125929 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterEnterWait*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterEnterWait*))((::PBYTE)hIl2Cpp + CLASS_3_434033F40D125929__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_434033F40D125929_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_434033F40D125929_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_77EE15A62EEAAE1E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_434033F40D125929_METHOD_3_77EE15A62EEAAE1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_77EE15A62EEAAE1E_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_434033F40D125929_METHOD_3_77EE15A62EEAAE1E_1_OFFSET))(this, a1);
	}
};
