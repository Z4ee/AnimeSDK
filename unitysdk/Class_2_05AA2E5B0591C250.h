#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DestroyNPCMonster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_05AA2E5B0591C250_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AE5000)
#define CLASS_2_05AA2E5B0591C250_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AE5040)
#define CLASS_2_05AA2E5B0591C250_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8AE57A0)
#define CLASS_2_05AA2E5B0591C250_TICK_OFFSET UNITYSDK_OFFSET(0x8AE57F0)
#define CLASS_2_05AA2E5B0591C250__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE4FF0)

inline static constexpr unsigned int Class_2_05AA2E5B0591C250_TypeDefinitionIndex = 42684;

class Class_2_05AA2E5B0591C250 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::DestroyNPCMonster* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyNPCMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyNPCMonster*))((::PBYTE)hIl2Cpp + CLASS_2_05AA2E5B0591C250__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05AA2E5B0591C250_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05AA2E5B0591C250_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05AA2E5B0591C250_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_05AA2E5B0591C250_TICK_OFFSET))(this, a1);
	}
};
