#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyGridMove; }

#define CLASS_2_3B0E5F2A5B82B87F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B31110)
#define CLASS_2_3B0E5F2A5B82B87F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B31370)
#define CLASS_2_3B0E5F2A5B82B87F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B311F0)
#define CLASS_2_3B0E5F2A5B82B87F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B312C0)
#define CLASS_2_3B0E5F2A5B82B87F_TICK_OFFSET UNITYSDK_OFFSET(0x15B31310)
#define CLASS_2_3B0E5F2A5B82B87F__CTOR_OFFSET UNITYSDK_OFFSET(0x15B31100)

inline static constexpr unsigned int Class_2_3B0E5F2A5B82B87F_TypeDefinitionIndex = 53683;

class Class_2_3B0E5F2A5B82B87F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TrainPartyGridMove* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyGridMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyGridMove*))((::PBYTE)hIl2Cpp + CLASS_2_3B0E5F2A5B82B87F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0E5F2A5B82B87F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0E5F2A5B82B87F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0E5F2A5B82B87F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3B0E5F2A5B82B87F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B0E5F2A5B82B87F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
