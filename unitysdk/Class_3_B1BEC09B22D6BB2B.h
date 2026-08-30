#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfChangeAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B1BEC09B22D6BB2B_METHOD_3_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x15718B00)
#define CLASS_3_B1BEC09B22D6BB2B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157189C0)
#define CLASS_3_B1BEC09B22D6BB2B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15718CC0)
#define CLASS_3_B1BEC09B22D6BB2B_TICK_OFFSET UNITYSDK_OFFSET(0x15718A60)
#define CLASS_3_B1BEC09B22D6BB2B__CTOR_OFFSET UNITYSDK_OFFSET(0x15718990)

inline static constexpr unsigned int Class_3_B1BEC09B22D6BB2B_TypeDefinitionIndex = 52463;

class Class_3_B1BEC09B22D6BB2B : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ElfChangeAnimState*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x28
	::System::Single PGMIOKKLHIE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfChangeAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfChangeAnimState*))((::PBYTE)hIl2Cpp + CLASS_3_B1BEC09B22D6BB2B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1BEC09B22D6BB2B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B1BEC09B22D6BB2B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1BEC09B22D6BB2B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1BEC09B22D6BB2B_METHOD_3_F7300E87EC49A206_OFFSET))(this);
	}
};
