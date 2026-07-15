#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetupBattleLineup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_10AB9F6882C5BA3A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16432FF0)
#define CLASS_2_10AB9F6882C5BA3A_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x16433080)
#define CLASS_2_10AB9F6882C5BA3A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16433030)
#define CLASS_2_10AB9F6882C5BA3A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164331F0)
#define CLASS_2_10AB9F6882C5BA3A_TICK_OFFSET UNITYSDK_OFFSET(0x16433240)
#define CLASS_2_10AB9F6882C5BA3A__CTOR_OFFSET UNITYSDK_OFFSET(0x16432FE0)

inline static constexpr unsigned int Class_2_10AB9F6882C5BA3A_TypeDefinitionIndex = 55969;

class Class_2_10AB9F6882C5BA3A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetupBattleLineup* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupBattleLineup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupBattleLineup*))((::PBYTE)hIl2Cpp + CLASS_2_10AB9F6882C5BA3A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10AB9F6882C5BA3A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10AB9F6882C5BA3A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10AB9F6882C5BA3A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10AB9F6882C5BA3A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10AB9F6882C5BA3A_METHOD_2_41146E620D694011_OFFSET))(this);
	}
};
