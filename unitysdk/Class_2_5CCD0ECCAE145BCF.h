#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5CCD0ECCAE145BCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A6EDF0)
#define CLASS_2_5CCD0ECCAE145BCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A6EE30)
#define CLASS_2_5CCD0ECCAE145BCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A6F550)
#define CLASS_2_5CCD0ECCAE145BCF_TICK_OFFSET UNITYSDK_OFFSET(0x8A6F5A0)
#define CLASS_2_5CCD0ECCAE145BCF__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6EDE0)

inline static constexpr unsigned int Class_2_5CCD0ECCAE145BCF_TypeDefinitionIndex = 46821;

class Class_2_5CCD0ECCAE145BCF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CreateCharacter* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_5CCD0ECCAE145BCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CCD0ECCAE145BCF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CCD0ECCAE145BCF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CCD0ECCAE145BCF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CCD0ECCAE145BCF_TICK_OFFSET))(this, a1);
	}
};
