#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_705B862E649BF345;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimStateChange; }

#define CLASS_2_718D0F51F93C3F94_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98C2B80)
#define CLASS_2_718D0F51F93C3F94_METHOD_2_36DC1766519EFFC3_OFFSET UNITYSDK_OFFSET(0x98C3100)
#define CLASS_2_718D0F51F93C3F94_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0x98C2C80)
#define CLASS_2_718D0F51F93C3F94_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x98C2F80)
#define CLASS_2_718D0F51F93C3F94_METHOD_2_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0x98C2E90)
#define CLASS_2_718D0F51F93C3F94_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x98C31A0)
#define CLASS_2_718D0F51F93C3F94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98C2D50)
#define CLASS_2_718D0F51F93C3F94_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98C3050)
#define CLASS_2_718D0F51F93C3F94_TICK_OFFSET UNITYSDK_OFFSET(0x98C30A0)
#define CLASS_2_718D0F51F93C3F94__CTOR_OFFSET UNITYSDK_OFFSET(0x98C2AE0)

inline static constexpr unsigned int Class_2_718D0F51F93C3F94_TypeDefinitionIndex = 54257;

class Class_2_718D0F51F93C3F94 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_705B862E649BF345* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::WaitAnimStateChange* Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_36DC1766519EFFC3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_METHOD_2_36DC1766519EFFC3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_METHOD_2_B09E78EE7EE4F8FA_1_OFFSET))(this);
	}

	::System::Void Method_2_B6F0C2C831C5F31A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_718D0F51F93C3F94_METHOD_2_B6F0C2C831C5F31A_OFFSET))(this, a1);
	}
};
