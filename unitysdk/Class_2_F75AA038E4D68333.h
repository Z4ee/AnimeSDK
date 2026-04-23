#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class FinishHitStateImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F75AA038E4D68333_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFFDE80)
#define CLASS_2_F75AA038E4D68333_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFFDEC0)
#define CLASS_2_F75AA038E4D68333_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDFFE0C0)
#define CLASS_2_F75AA038E4D68333_TICK_OFFSET UNITYSDK_OFFSET(0xDFFE110)
#define CLASS_2_F75AA038E4D68333__CTOR_OFFSET UNITYSDK_OFFSET(0xDFFDE70)

inline static constexpr unsigned int Class_2_F75AA038E4D68333_TypeDefinitionIndex = 50764;

class Class_2_F75AA038E4D68333 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x18
	::RPG::GameCore::FinishHitStateImmediately* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishHitStateImmediately* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishHitStateImmediately*))((::PBYTE)hIl2Cpp + CLASS_2_F75AA038E4D68333__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F75AA038E4D68333_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F75AA038E4D68333_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F75AA038E4D68333_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F75AA038E4D68333_TICK_OFFSET))(this, a1);
	}
};
