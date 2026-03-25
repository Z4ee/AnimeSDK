#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterMap; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_10B3A134613D7BF3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116AF400)
#define CLASS_2_10B3A134613D7BF3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x116AF440)
#define CLASS_2_10B3A134613D7BF3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x116AF6D0)
#define CLASS_2_10B3A134613D7BF3_TICK_OFFSET UNITYSDK_OFFSET(0x116AF720)
#define CLASS_2_10B3A134613D7BF3__CTOR_OFFSET UNITYSDK_OFFSET(0x116AF3F0)

inline static constexpr unsigned int Class_2_10B3A134613D7BF3_TypeDefinitionIndex = 42705;

class Class_2_10B3A134613D7BF3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnterMap* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMap*))((::PBYTE)hIl2Cpp + CLASS_2_10B3A134613D7BF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10B3A134613D7BF3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10B3A134613D7BF3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10B3A134613D7BF3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10B3A134613D7BF3_TICK_OFFSET))(this, a1);
	}
};
