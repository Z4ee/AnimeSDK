#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CreateLevelAreas; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_48CFB6C9ECCDA7EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3987E0)
#define CLASS_2_48CFB6C9ECCDA7EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD398820)
#define CLASS_2_48CFB6C9ECCDA7EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD398990)
#define CLASS_2_48CFB6C9ECCDA7EA_TICK_OFFSET UNITYSDK_OFFSET(0xD3989E0)
#define CLASS_2_48CFB6C9ECCDA7EA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3987D0)

inline static constexpr unsigned int Class_2_48CFB6C9ECCDA7EA_TypeDefinitionIndex = 53534;

class Class_2_48CFB6C9ECCDA7EA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CreateLevelAreas* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateLevelAreas* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateLevelAreas*))((::PBYTE)hIl2Cpp + CLASS_2_48CFB6C9ECCDA7EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48CFB6C9ECCDA7EA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48CFB6C9ECCDA7EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48CFB6C9ECCDA7EA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48CFB6C9ECCDA7EA_TICK_OFFSET))(this, a1);
	}
};
