#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessBill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_066FCD102DA425D7_METHOD_3_DE21204480B88394_OFFSET UNITYSDK_OFFSET(0xB7623F0)
#define CLASS_3_066FCD102DA425D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB761F40)
#define CLASS_3_066FCD102DA425D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB762210)
#define CLASS_3_066FCD102DA425D7_TICK_OFFSET UNITYSDK_OFFSET(0xB762260)
#define CLASS_3_066FCD102DA425D7__CTOR_OFFSET UNITYSDK_OFFSET(0xB761F10)

inline static constexpr unsigned int Class_3_066FCD102DA425D7_TypeDefinitionIndex = 52155;

class Class_3_066FCD102DA425D7 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfCustomerProcessBill*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
	::UnityEngine::Quaternion ACDOFFNEDEF; // 0x30
	::System::Single PGMIOKKLHIE; // 0x40
	::System::Single KLBFFEFFJID; // 0x44
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x48

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

	::System::Void Method_3_DE21204480B88394(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_066FCD102DA425D7_METHOD_3_DE21204480B88394_OFFSET))(this, a1);
	}
};
