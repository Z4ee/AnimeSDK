#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FinishHitStateImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F75AA038E4D68333_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AECAF0)
#define CLASS_2_F75AA038E4D68333_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AECB30)
#define CLASS_2_F75AA038E4D68333_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19AECD10)
#define CLASS_2_F75AA038E4D68333_TICK_OFFSET UNITYSDK_OFFSET(0x19AECD60)
#define CLASS_2_F75AA038E4D68333__CTOR_OFFSET UNITYSDK_OFFSET(0x19AECAE0)

inline static constexpr unsigned int Class_2_F75AA038E4D68333_TypeDefinitionIndex = 55271;

class Class_2_F75AA038E4D68333 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x20
	::RPG::GameCore::FinishHitStateImmediately* OFKGLJOAMLD; // 0x28

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
