#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5696A5A846094490_EatingState.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerEating; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_5696A5A846094490_METHOD_3_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xA8284F0)
#define CLASS_3_5696A5A846094490_METHOD_3_1311F0BD93173256_OFFSET UNITYSDK_OFFSET(0xA8289B0)
#define CLASS_3_5696A5A846094490_METHOD_3_157150C3CF1EE88C_OFFSET UNITYSDK_OFFSET(0xA828E30)
#define CLASS_3_5696A5A846094490_METHOD_3_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xA8293C0)
#define CLASS_3_5696A5A846094490_METHOD_3_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xA828150)
#define CLASS_3_5696A5A846094490_METHOD_3_4D478C256745A551_OFFSET UNITYSDK_OFFSET(0xA825CC0)
#define CLASS_3_5696A5A846094490_METHOD_3_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xA827F00)
#define CLASS_3_5696A5A846094490_METHOD_3_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xA827420)
#define CLASS_3_5696A5A846094490_METHOD_3_A0D176118EE280F6_OFFSET UNITYSDK_OFFSET(0xA827A80)
#define CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_1_OFFSET UNITYSDK_OFFSET(0xA826B40)
#define CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_2_OFFSET UNITYSDK_OFFSET(0xA826FB0)
#define CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_OFFSET UNITYSDK_OFFSET(0xA8266C0)
#define CLASS_3_5696A5A846094490_METHOD_3_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0xA828880)
#define CLASS_3_5696A5A846094490_METHOD_3_EA5ADB91FAB174B1_OFFSET UNITYSDK_OFFSET(0xA829CA0)
#define CLASS_3_5696A5A846094490_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA824880)
#define CLASS_3_5696A5A846094490_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA825580)
#define CLASS_3_5696A5A846094490_TICK_OFFSET UNITYSDK_OFFSET(0xA8255D0)
#define CLASS_3_5696A5A846094490__CTOR_OFFSET UNITYSDK_OFFSET(0xA824860)
#define CLASS_3_5696A5A846094490__TICK_B__3_0_OFFSET UNITYSDK_OFFSET(0xA82A250)
#define CLASS_3_5696A5A846094490___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA82A490)
#define CLASS_3_5696A5A846094490___ONCOMPLETEEATING_B__5_0_OFFSET UNITYSDK_OFFSET(0xA82A2E0)
#define CLASS_3_5696A5A846094490___ONPAYING_B__11_0_OFFSET UNITYSDK_OFFSET(0xA82A370)
#define CLASS_3_5696A5A846094490___ONPAYING_B__11_1_OFFSET UNITYSDK_OFFSET(0xA82A400)

inline static constexpr unsigned int Class_3_5696A5A846094490_TypeDefinitionIndex = 48766;

class Class_3_5696A5A846094490 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerEating*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x30
	::RPG::Client::ElfRestaurantGameInstance* Field_3_2; // 0x38
	::System::Single Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x44
	::System::Boolean Field_3_5; // 0x48
	::System::Boolean Field_3_6; // 0x49
	::System::Single Field_3_7; // 0x4C
	::System::Single Field_3_8; // 0x50
	::Class_3_5696A5A846094490_EatingState Field_3_9; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerEating* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerEating*))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_DFF4B66A65F23F6B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_DFF4B66A65F23F6B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4D478C256745A551()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_4D478C256745A551_OFFSET))(this);
	}

	::System::Void Method_3_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Boolean Method_3_D137D7F87F2A9E70()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_OFFSET))(this);
	}

	::System::Boolean Method_3_D137D7F87F2A9E70_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_1_OFFSET))(this);
	}

	::System::Boolean Method_3_D137D7F87F2A9E70_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_2_OFFSET))(this);
	}

	::System::Boolean Method_3_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_3_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_3_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Boolean Method_3_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_2A887DFC7A5BB2CB_OFFSET))(this);
	}

	::System::Int32 Method_3_157150C3CF1EE88C(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_157150C3CF1EE88C_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0D176118EE280F6(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_A0D176118EE280F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EA5ADB91FAB174B1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_EA5ADB91FAB174B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_1311F0BD93173256(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Int32, ::RPG::GameCore::LittleGameSmartObjectSlotGroup))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490_METHOD_3_1311F0BD93173256_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _Tick_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490__TICK_B__3_0_OFFSET))(this);
	}

	::System::Void __OnCompleteEating_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490___ONCOMPLETEEATING_B__5_0_OFFSET))(this);
	}

	::System::Void __OnPaying_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490___ONPAYING_B__11_0_OFFSET))(this);
	}

	::System::Void __OnPaying_b__11_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490___ONPAYING_B__11_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5696A5A846094490___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
