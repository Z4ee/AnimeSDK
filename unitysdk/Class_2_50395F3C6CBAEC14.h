#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowGuideEvolveTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_50395F3C6CBAEC14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1388EC90)
#define CLASS_2_50395F3C6CBAEC14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1388ECD0)
#define CLASS_2_50395F3C6CBAEC14_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1388EE80)
#define CLASS_2_50395F3C6CBAEC14_TICK_OFFSET UNITYSDK_OFFSET(0x1388EED0)
#define CLASS_2_50395F3C6CBAEC14__CTOR_OFFSET UNITYSDK_OFFSET(0x1388EC80)
#define CLASS_2_50395F3C6CBAEC14__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1388EF30)

inline static constexpr unsigned int Class_2_50395F3C6CBAEC14_TypeDefinitionIndex = 54801;

class Class_2_50395F3C6CBAEC14 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowGuideEvolveTalk* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideEvolveTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideEvolveTalk*))((::PBYTE)hIl2Cpp + CLASS_2_50395F3C6CBAEC14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50395F3C6CBAEC14_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50395F3C6CBAEC14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50395F3C6CBAEC14_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_50395F3C6CBAEC14_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50395F3C6CBAEC14__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
