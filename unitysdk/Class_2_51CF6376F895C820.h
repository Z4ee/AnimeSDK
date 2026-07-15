#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetupAlleyTransportGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_51CF6376F895C820_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16365030)
#define CLASS_2_51CF6376F895C820_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16365070)
#define CLASS_2_51CF6376F895C820_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163650D0)
#define CLASS_2_51CF6376F895C820_TICK_OFFSET UNITYSDK_OFFSET(0x16365120)
#define CLASS_2_51CF6376F895C820__CTOR_OFFSET UNITYSDK_OFFSET(0x16365020)

inline static constexpr unsigned int Class_2_51CF6376F895C820_TypeDefinitionIndex = 55968;

class Class_2_51CF6376F895C820 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetupAlleyTransportGuide* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupAlleyTransportGuide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupAlleyTransportGuide*))((::PBYTE)hIl2Cpp + CLASS_2_51CF6376F895C820__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CF6376F895C820_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CF6376F895C820_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51CF6376F895C820_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51CF6376F895C820_TICK_OFFSET))(this, a1);
	}
};
