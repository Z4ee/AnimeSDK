#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DrinkMakerPreBartendPerformanceEndNotify; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F41AC20EFCAAE20_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EA93C0)
#define CLASS_2_8F41AC20EFCAAE20_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x8EA9540)
#define CLASS_2_8F41AC20EFCAAE20_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8EA9460)
#define CLASS_2_8F41AC20EFCAAE20_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8EA9590)
#define CLASS_2_8F41AC20EFCAAE20_TICK_OFFSET UNITYSDK_OFFSET(0x8EA9400)
#define CLASS_2_8F41AC20EFCAAE20__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA9330)

inline static constexpr unsigned int Class_2_8F41AC20EFCAAE20_TypeDefinitionIndex = 46861;

class Class_2_8F41AC20EFCAAE20 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayScreenTransfer* Field_2_2; // 0x18
	::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*))((::PBYTE)hIl2Cpp + CLASS_2_8F41AC20EFCAAE20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F41AC20EFCAAE20_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F41AC20EFCAAE20_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F41AC20EFCAAE20_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F41AC20EFCAAE20_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F41AC20EFCAAE20_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}
};
