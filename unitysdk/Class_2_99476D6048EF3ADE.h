#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/PropState.h"

namespace RPG::GameCore { class SwitchHandCatchableStateSync; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_99476D6048EF3ADE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2D9A60)
#define CLASS_2_99476D6048EF3ADE_METHOD_2_A2004B1CA434DA2B_OFFSET UNITYSDK_OFFSET(0xA2D9BA0)
#define CLASS_2_99476D6048EF3ADE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2D9B00)
#define CLASS_2_99476D6048EF3ADE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA2D9B50)
#define CLASS_2_99476D6048EF3ADE_TICK_OFFSET UNITYSDK_OFFSET(0xA2D9AA0)
#define CLASS_2_99476D6048EF3ADE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D9A50)

inline static constexpr unsigned int Class_2_99476D6048EF3ADE_TypeDefinitionIndex = 49160;

class Class_2_99476D6048EF3ADE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchHandCatchableStateSync* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchableStateSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchableStateSync*))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_A2004B1CA434DA2B(::RPG::GameCore::PropState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + CLASS_2_99476D6048EF3ADE_METHOD_2_A2004B1CA434DA2B_OFFSET))(this, a1);
	}
};
