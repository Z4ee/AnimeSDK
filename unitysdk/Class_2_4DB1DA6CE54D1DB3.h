#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterNavigateFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4DB1DA6CE54D1DB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1057EFC0)
#define CLASS_2_4DB1DA6CE54D1DB3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1057F000)
#define CLASS_2_4DB1DA6CE54D1DB3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1057F080)
#define CLASS_2_4DB1DA6CE54D1DB3_TICK_OFFSET UNITYSDK_OFFSET(0x1057F0D0)
#define CLASS_2_4DB1DA6CE54D1DB3__CTOR_OFFSET UNITYSDK_OFFSET(0x1057EFB0)

inline static constexpr unsigned int Class_2_4DB1DA6CE54D1DB3_TypeDefinitionIndex = 46782;

class Class_2_4DB1DA6CE54D1DB3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CharacterNavigateFollow* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterNavigateFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterNavigateFollow*))((::PBYTE)hIl2Cpp + CLASS_2_4DB1DA6CE54D1DB3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB1DA6CE54D1DB3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB1DA6CE54D1DB3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB1DA6CE54D1DB3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4DB1DA6CE54D1DB3_TICK_OFFSET))(this, a1);
	}
};
