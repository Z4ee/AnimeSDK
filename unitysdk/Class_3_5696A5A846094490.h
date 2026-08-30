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

#define CLASS_3_5696A5A846094490_METHOD_3_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xBB961A0)
#define CLASS_3_5696A5A846094490_METHOD_3_1311F0BD93173256_OFFSET UNITYSDK_OFFSET(0xBB96660)
#define CLASS_3_5696A5A846094490_METHOD_3_157150C3CF1EE88C_OFFSET UNITYSDK_OFFSET(0xBB96AE0)
#define CLASS_3_5696A5A846094490_METHOD_3_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xBB97070)
#define CLASS_3_5696A5A846094490_METHOD_3_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xBB95E00)
#define CLASS_3_5696A5A846094490_METHOD_3_4D478C256745A551_OFFSET UNITYSDK_OFFSET(0xBB93910)
#define CLASS_3_5696A5A846094490_METHOD_3_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xBB95B50)
#define CLASS_3_5696A5A846094490_METHOD_3_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xBB95070)
#define CLASS_3_5696A5A846094490_METHOD_3_A0D176118EE280F6_OFFSET UNITYSDK_OFFSET(0xBB956D0)
#define CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_1_OFFSET UNITYSDK_OFFSET(0xBB94790)
#define CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_2_OFFSET UNITYSDK_OFFSET(0xBB94C00)
#define CLASS_3_5696A5A846094490_METHOD_3_D137D7F87F2A9E70_OFFSET UNITYSDK_OFFSET(0xBB94310)
#define CLASS_3_5696A5A846094490_METHOD_3_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0xBB96530)
#define CLASS_3_5696A5A846094490_METHOD_3_EA5ADB91FAB174B1_OFFSET UNITYSDK_OFFSET(0xBB97950)
#define CLASS_3_5696A5A846094490_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB924C0)
#define CLASS_3_5696A5A846094490_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB931C0)
#define CLASS_3_5696A5A846094490_TICK_OFFSET UNITYSDK_OFFSET(0xBB93210)
#define CLASS_3_5696A5A846094490__CTOR_OFFSET UNITYSDK_OFFSET(0xBB924A0)
#define CLASS_3_5696A5A846094490__TICK_B__3_0_OFFSET UNITYSDK_OFFSET(0xBB97F00)
#define CLASS_3_5696A5A846094490___ONCOMPLETEEATING_B__5_0_OFFSET UNITYSDK_OFFSET(0xBB97F90)
#define CLASS_3_5696A5A846094490___ONPAYING_B__11_0_OFFSET UNITYSDK_OFFSET(0xBB98020)
#define CLASS_3_5696A5A846094490___ONPAYING_B__11_1_OFFSET UNITYSDK_OFFSET(0xBB980B0)

inline static constexpr unsigned int Class_3_5696A5A846094490_TypeDefinitionIndex = 52439;

class Class_3_5696A5A846094490 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerEating*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* CCPIFEPGOEN; // 0x30
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x38
	::System::Single JLEHFEKALDB; // 0x40
	::System::Boolean PBICLKEMBJL; // 0x44
	::System::Boolean FLHLHHLDAGI; // 0x45
	::System::Single FLGMFBBOKNN; // 0x48
	::System::Single PGMIOKKLHIE; // 0x4C
	::System::Single LNMEAAGLLCI; // 0x50
	::Class_3_5696A5A846094490_EatingState EAHDKCILFIK; // 0x54

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
};
