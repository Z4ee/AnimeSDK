#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_ADC27DBA8547EDD7;
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterPutdownFood; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7034DDFA708594B9_METHOD_3_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x12A197F0)
#define CLASS_3_7034DDFA708594B9_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x12A19670)
#define CLASS_3_7034DDFA708594B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A18CD0)
#define CLASS_3_7034DDFA708594B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A1A160)
#define CLASS_3_7034DDFA708594B9_TICK_OFFSET UNITYSDK_OFFSET(0x12A19340)
#define CLASS_3_7034DDFA708594B9__CTOR_OFFSET UNITYSDK_OFFSET(0x12A18CB0)
#define CLASS_3_7034DDFA708594B9___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12A1A1B0)

inline static constexpr unsigned int Class_3_7034DDFA708594B9_TypeDefinitionIndex = 48162;

class Class_3_7034DDFA708594B9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_7; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_8; // 0x30
	::Class_1_ADC27DBA8547EDD7* Field_3_3; // 0x38
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_6; // 0x40
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_2; // 0x48
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_5; // 0x50
	::System::Int32 Field_3_4; // 0x58
	::System::Boolean Field_3_0; // 0x5C
	::System::Single Field_3_1; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_METHOD_3_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
