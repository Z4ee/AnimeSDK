#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanObstacle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FAE4A26A73E8DB5_METHOD_3_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1135F740)
#define CLASS_3_5FAE4A26A73E8DB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1135F260)
#define CLASS_3_5FAE4A26A73E8DB5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1135F5E0)
#define CLASS_3_5FAE4A26A73E8DB5_TICK_OFFSET UNITYSDK_OFFSET(0x1135F630)
#define CLASS_3_5FAE4A26A73E8DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1135F230)
#define CLASS_3_5FAE4A26A73E8DB5___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x113608F0)

inline static constexpr unsigned int Class_3_5FAE4A26A73E8DB5_TypeDefinitionIndex = 42185;

class Class_3_5FAE4A26A73E8DB5 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* Field_3_4; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_3; // 0x30
	::System::Boolean Field_3_0; // 0x38
	::System::Single Field_3_1; // 0x3C
	::System::Single Field_3_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*))((::PBYTE)hIl2Cpp + CLASS_3_5FAE4A26A73E8DB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FAE4A26A73E8DB5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FAE4A26A73E8DB5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5FAE4A26A73E8DB5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FAE4A26A73E8DB5_METHOD_3_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5FAE4A26A73E8DB5___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
