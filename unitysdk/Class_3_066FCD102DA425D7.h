#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessBill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_066FCD102DA425D7_METHOD_3_F859CE601F919CF3_OFFSET UNITYSDK_OFFSET(0x8B51720)
#define CLASS_3_066FCD102DA425D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B51270)
#define CLASS_3_066FCD102DA425D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8B51540)
#define CLASS_3_066FCD102DA425D7_TICK_OFFSET UNITYSDK_OFFSET(0x8B51590)
#define CLASS_3_066FCD102DA425D7__CTOR_OFFSET UNITYSDK_OFFSET(0x8B51240)
#define CLASS_3_066FCD102DA425D7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8B51A30)

inline static constexpr unsigned int Class_3_066FCD102DA425D7_TypeDefinitionIndex = 42172;

class Class_3_066FCD102DA425D7 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerProcessBill*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_4; // 0x28
	::UnityEngine::Quaternion Field_3_3; // 0x30
	::System::Single Field_3_0; // 0x40
	::System::Single Field_3_1; // 0x44
	::UnityEngine::Quaternion Field_3_2; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F859CE601F919CF3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7_METHOD_3_F859CE601F919CF3_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
