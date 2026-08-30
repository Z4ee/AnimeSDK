#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonsterPerform; }

#define CLASS_2_94BFA9C9BB476F32_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163E85C0)
#define CLASS_2_94BFA9C9BB476F32_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x163E8700)
#define CLASS_2_94BFA9C9BB476F32_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x163E8F50)
#define CLASS_2_94BFA9C9BB476F32_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163E8780)
#define CLASS_2_94BFA9C9BB476F32_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163E9000)
#define CLASS_2_94BFA9C9BB476F32_TICK_OFFSET UNITYSDK_OFFSET(0x163E90B0)
#define CLASS_2_94BFA9C9BB476F32__CTOR_OFFSET UNITYSDK_OFFSET(0x163E8530)

inline static constexpr unsigned int Class_2_94BFA9C9BB476F32_TypeDefinitionIndex = 59097;

class Class_2_94BFA9C9BB476F32 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaveMonsterPerform* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* DLJHJKLMADI; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_3_07C3C4D2990C49EE* JEGADJGFPFM; // 0x30
	::System::Int32 IPMDCABGBPP; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonsterPerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonsterPerform*))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_94BFA9C9BB476F32_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}
};
