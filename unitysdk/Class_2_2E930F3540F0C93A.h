#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_D9413DC99216F54F;
class Class_3_AF0C907CE1E437DA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2E930F3540F0C93A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACFADE0)
#define CLASS_2_2E930F3540F0C93A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACFAE80)
#define CLASS_2_2E930F3540F0C93A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACFAE30)
#define CLASS_2_2E930F3540F0C93A_TICK_OFFSET UNITYSDK_OFFSET(0xACFAFA0)
#define CLASS_2_2E930F3540F0C93A__CTOR_OFFSET UNITYSDK_OFFSET(0xACFADD0)

inline static constexpr unsigned int Class_2_2E930F3540F0C93A_TypeDefinitionIndex = 50392;

class Class_2_2E930F3540F0C93A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_D9413DC99216F54F* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_AF0C907CE1E437DA* Field_2_2; // 0x28
	::RPG::GameCore::FixPoint Field_2_3; // 0x30
	::RPG::GameCore::FixPoint Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AF0C907CE1E437DA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AF0C907CE1E437DA*))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2E930F3540F0C93A_TICK_OFFSET))(this, a1);
	}
};
