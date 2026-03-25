#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupUnload; }

#define CLASS_2_B3FA84AEDE7EDD25_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE465230)
#define CLASS_2_B3FA84AEDE7EDD25_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xE465490)
#define CLASS_2_B3FA84AEDE7EDD25_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4653D0)
#define CLASS_2_B3FA84AEDE7EDD25_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE4652C0)
#define CLASS_2_B3FA84AEDE7EDD25_TICK_OFFSET UNITYSDK_OFFSET(0xE465370)
#define CLASS_2_B3FA84AEDE7EDD25__CTOR_OFFSET UNITYSDK_OFFSET(0xE465100)

inline static constexpr unsigned int Class_2_B3FA84AEDE7EDD25_TypeDefinitionIndex = 43306;

class Class_2_B3FA84AEDE7EDD25 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::Client::RuntimeGroupManager* Field_2_3; // 0x20
	::RPG::GameCore::WaitGroupUnload* Field_2_1; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
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
