#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupUnload; }

#define CLASS_2_B3FA84AEDE7EDD25_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6CB400)
#define CLASS_2_B3FA84AEDE7EDD25_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA6CB6A0)
#define CLASS_2_B3FA84AEDE7EDD25_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6CB5C0)
#define CLASS_2_B3FA84AEDE7EDD25_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA6CB490)
#define CLASS_2_B3FA84AEDE7EDD25_TICK_OFFSET UNITYSDK_OFFSET(0xA6CB560)
#define CLASS_2_B3FA84AEDE7EDD25__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CB2D0)

inline static constexpr unsigned int Class_2_B3FA84AEDE7EDD25_TypeDefinitionIndex = 49971;

class Class_2_B3FA84AEDE7EDD25 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::Client::RuntimeGroupManager* Field_2_2; // 0x28
	::RPG::GameCore::WaitGroupUnload* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupUnload* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupUnload*))((::PBYTE)hIl2Cpp + CLASS_2_B3FA84AEDE7EDD25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3FA84AEDE7EDD25_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B3FA84AEDE7EDD25_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3FA84AEDE7EDD25_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3FA84AEDE7EDD25_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3FA84AEDE7EDD25_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
