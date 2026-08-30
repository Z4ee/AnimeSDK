#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfPlayEntityBehavior; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1157BE6C36B94ADF_METHOD_3_D65976E74F5D44D7_OFFSET UNITYSDK_OFFSET(0xB946FE0)
#define CLASS_3_1157BE6C36B94ADF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB946D90)
#define CLASS_3_1157BE6C36B94ADF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9472E0)
#define CLASS_3_1157BE6C36B94ADF__CTOR_OFFSET UNITYSDK_OFFSET(0xB946D60)

inline static constexpr unsigned int Class_3_1157BE6C36B94ADF_TypeDefinitionIndex = 52465;

class Class_3_1157BE6C36B94ADF : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*))((::PBYTE)hIl2Cpp + CLASS_3_1157BE6C36B94ADF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1157BE6C36B94ADF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1157BE6C36B94ADF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_D65976E74F5D44D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1157BE6C36B94ADF_METHOD_3_D65976E74F5D44D7_OFFSET))(this);
	}
};
