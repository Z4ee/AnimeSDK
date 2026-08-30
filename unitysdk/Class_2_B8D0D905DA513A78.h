#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CommandPartner; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B8D0D905DA513A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8C7790)
#define CLASS_2_B8D0D905DA513A78_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A8C7E60)
#define CLASS_2_B8D0D905DA513A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8C7880)
#define CLASS_2_B8D0D905DA513A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8C82C0)
#define CLASS_2_B8D0D905DA513A78_TICK_OFFSET UNITYSDK_OFFSET(0x1A8C8310)
#define CLASS_2_B8D0D905DA513A78__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C7710)

inline static constexpr unsigned int Class_2_B8D0D905DA513A78_TypeDefinitionIndex = 55177;

class Class_2_B8D0D905DA513A78 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CommandPartner* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* BLIGDDNHFHH; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::GameEntity* EDNCILPIMIG; // 0x30
	::System::Boolean EFPALFGNAEF; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CommandPartner* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CommandPartner*))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
