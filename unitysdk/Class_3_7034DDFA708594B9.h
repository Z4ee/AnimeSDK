#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_938C223DA5C0C9C7;
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterPutdownFood; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7034DDFA708594B9_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x14166720)
#define CLASS_3_7034DDFA708594B9_METHOD_3_D0EDFA57F5E97657_OFFSET UNITYSDK_OFFSET(0x141668A0)
#define CLASS_3_7034DDFA708594B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14165DB0)
#define CLASS_3_7034DDFA708594B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14167190)
#define CLASS_3_7034DDFA708594B9_TICK_OFFSET UNITYSDK_OFFSET(0x14166410)
#define CLASS_3_7034DDFA708594B9__CTOR_OFFSET UNITYSDK_OFFSET(0x14165D90)
#define CLASS_3_7034DDFA708594B9___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x141671E0)

inline static constexpr unsigned int Class_3_7034DDFA708594B9_TypeDefinitionIndex = 48786;

class Class_3_7034DDFA708594B9 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterPutdownFood*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x30
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_2; // 0x38
	::Class_1_938C223DA5C0C9C7* Field_3_3; // 0x40
	::RPG::Client::ElfRestaurantGameInstance* Field_3_4; // 0x48
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_5; // 0x50
	::System::Single Field_3_6; // 0x58
	::System::Int32 Field_3_7; // 0x5C
	::System::Boolean Field_3_8; // 0x60

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7034DDFA708594B9___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
