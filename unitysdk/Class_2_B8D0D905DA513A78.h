#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class CommandPartner; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B8D0D905DA513A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111B9420)
#define CLASS_2_B8D0D905DA513A78_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x111B9960)
#define CLASS_2_B8D0D905DA513A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111B94A0)
#define CLASS_2_B8D0D905DA513A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111B9C60)
#define CLASS_2_B8D0D905DA513A78_TICK_OFFSET UNITYSDK_OFFSET(0x111B9CB0)
#define CLASS_2_B8D0D905DA513A78__CTOR_OFFSET UNITYSDK_OFFSET(0x111B93A0)

inline static constexpr unsigned int Class_2_B8D0D905DA513A78_TypeDefinitionIndex = 50702;

class Class_2_B8D0D905DA513A78 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::CommandPartner* Field_2_1; // 0x30
	::System::Boolean Field_2_4; // 0x38

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

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
