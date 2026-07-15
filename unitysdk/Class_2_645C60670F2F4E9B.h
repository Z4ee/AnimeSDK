#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FinishPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_645C60670F2F4E9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1634CA00)
#define CLASS_2_645C60670F2F4E9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1634CA40)
#define CLASS_2_645C60670F2F4E9B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1634CAF0)
#define CLASS_2_645C60670F2F4E9B_TICK_OFFSET UNITYSDK_OFFSET(0x1634CB40)
#define CLASS_2_645C60670F2F4E9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1634C9F0)

inline static constexpr unsigned int Class_2_645C60670F2F4E9B_TypeDefinitionIndex = 56342;

class Class_2_645C60670F2F4E9B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::FinishPerformance* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_645C60670F2F4E9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C60670F2F4E9B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C60670F2F4E9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C60670F2F4E9B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_645C60670F2F4E9B_TICK_OFFSET))(this, a1);
	}
};
