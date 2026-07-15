#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerDrink; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_00444FA1B67D00E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CE7070)
#define CLASS_3_00444FA1B67D00E4_METHOD_3_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x16CE6EF0)
#define CLASS_3_00444FA1B67D00E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CE65C0)
#define CLASS_3_00444FA1B67D00E4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16CE69C0)
#define CLASS_3_00444FA1B67D00E4_TICK_OFFSET UNITYSDK_OFFSET(0x16CE6A10)
#define CLASS_3_00444FA1B67D00E4__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE65A0)

inline static constexpr unsigned int Class_3_00444FA1B67D00E4_TypeDefinitionIndex = 49778;

class Class_3_00444FA1B67D00E4 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerDrink*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x38
	::System::Single Field_3_3; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerDrink* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerDrink*))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00444FA1B67D00E4_METHOD_3_AFC8215C57A0845A_OFFSET))(this);
	}
};
