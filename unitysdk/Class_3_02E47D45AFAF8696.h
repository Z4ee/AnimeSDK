#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterTimeOverPerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_02E47D45AFAF8696_METHOD_3_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xCF04D20)
#define CLASS_3_02E47D45AFAF8696_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF04A40)
#define CLASS_3_02E47D45AFAF8696_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF05180)
#define CLASS_3_02E47D45AFAF8696_TICK_OFFSET UNITYSDK_OFFSET(0xCF04C90)
#define CLASS_3_02E47D45AFAF8696__CTOR_OFFSET UNITYSDK_OFFSET(0xCF04A10)

inline static constexpr unsigned int Class_3_02E47D45AFAF8696_TypeDefinitionIndex = 52175;

class Class_3_02E47D45AFAF8696 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x30
	::System::Single PGMIOKKLHIE; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696_METHOD_3_AB88190D695EBEA9_OFFSET))(this);
	}
};
