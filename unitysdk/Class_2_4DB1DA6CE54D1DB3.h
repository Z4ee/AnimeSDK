#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterNavigateFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4DB1DA6CE54D1DB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14E57720)
#define CLASS_2_4DB1DA6CE54D1DB3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14E57760)
#define CLASS_2_4DB1DA6CE54D1DB3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14E577E0)
#define CLASS_2_4DB1DA6CE54D1DB3_TICK_OFFSET UNITYSDK_OFFSET(0x14E57830)
#define CLASS_2_4DB1DA6CE54D1DB3__CTOR_OFFSET UNITYSDK_OFFSET(0x14E57710)

inline static constexpr unsigned int Class_2_4DB1DA6CE54D1DB3_TypeDefinitionIndex = 55427;

class Class_2_4DB1DA6CE54D1DB3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterNavigateFollow* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
