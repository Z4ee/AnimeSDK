#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class CommandPartner; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B8D0D905DA513A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C2B820)
#define CLASS_2_B8D0D905DA513A78_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10C2BD60)
#define CLASS_2_B8D0D905DA513A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C2B8A0)
#define CLASS_2_B8D0D905DA513A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C2C060)
#define CLASS_2_B8D0D905DA513A78_TICK_OFFSET UNITYSDK_OFFSET(0x10C2C0B0)
#define CLASS_2_B8D0D905DA513A78__CTOR_OFFSET UNITYSDK_OFFSET(0x10C2B7A0)

inline static constexpr unsigned int Class_2_B8D0D905DA513A78_TypeDefinitionIndex = 44000;

class Class_2_B8D0D905DA513A78 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CommandPartner* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_0; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_2; // 0x30
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
