#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterTimeOverPerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_02E47D45AFAF8696_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x11987ED0)
#define CLASS_3_02E47D45AFAF8696_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11987C00)
#define CLASS_3_02E47D45AFAF8696_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x119883A0)
#define CLASS_3_02E47D45AFAF8696_TICK_OFFSET UNITYSDK_OFFSET(0x11987E40)
#define CLASS_3_02E47D45AFAF8696__CTOR_OFFSET UNITYSDK_OFFSET(0x11987BD0)
#define CLASS_3_02E47D45AFAF8696___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x119883F0)

inline static constexpr unsigned int Class_3_02E47D45AFAF8696_TypeDefinitionIndex = 48165;

class Class_3_02E47D45AFAF8696 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_1; // 0x28
	::RPG::Client::ElfRestaurantGameInstance* Field_3_2; // 0x30
	::System::Single Field_3_0; // 0x38

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

	::System::Void Method_3_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_02E47D45AFAF8696___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
