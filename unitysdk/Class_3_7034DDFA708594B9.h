#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_938C223DA5C0C9C7;
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterPutdownFood; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7034DDFA708594B9_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x186E3AA0)
#define CLASS_3_7034DDFA708594B9_METHOD_3_D0EDFA57F5E97657_OFFSET UNITYSDK_OFFSET(0x186E3C20)
#define CLASS_3_7034DDFA708594B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186E3130)
#define CLASS_3_7034DDFA708594B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186E4570)
#define CLASS_3_7034DDFA708594B9_TICK_OFFSET UNITYSDK_OFFSET(0x186E3790)
#define CLASS_3_7034DDFA708594B9__CTOR_OFFSET UNITYSDK_OFFSET(0x186E3110)

inline static constexpr unsigned int Class_3_7034DDFA708594B9_TypeDefinitionIndex = 52459;

class Class_3_7034DDFA708594B9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* ONBOKIHOBCA; // 0x28
	::Class_1_938C223DA5C0C9C7* CFLPIIGIFDM; // 0x30
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* IJDCKBPPNMD; // 0x38
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* GPONHMHCEDI; // 0x40
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x48
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* EHMJOACJLCG; // 0x50
	::System::Int32 NOLLEHFIJHH; // 0x58
	::System::Boolean NINPJMDPDPO; // 0x5C
	::System::Single PGMIOKKLHIE; // 0x60

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

	::System::Void Method_3_D0EDFA57F5E97657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_METHOD_3_D0EDFA57F5E97657_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9_ONTASKRESET_OFFSET))(this);
	}
};
