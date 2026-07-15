#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_1C159CA9AE6B0843_Class_0_16E7307DCC43CB2C_15;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIAnim; }
namespace UnityEngine { class Transform; }

#define CLASS_2_1C159CA9AE6B0843_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EFB430)
#define CLASS_2_1C159CA9AE6B0843_METHOD_2_804AFBDABBD9560A_OFFSET UNITYSDK_OFFSET(0x16EFB7F0)
#define CLASS_2_1C159CA9AE6B0843_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EFB470)
#define CLASS_2_1C159CA9AE6B0843_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EFB990)
#define CLASS_2_1C159CA9AE6B0843_TICK_OFFSET UNITYSDK_OFFSET(0x16EFB9E0)
#define CLASS_2_1C159CA9AE6B0843__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFB420)

inline static constexpr unsigned int Class_2_1C159CA9AE6B0843_TypeDefinitionIndex = 56302;

class Class_2_1C159CA9AE6B0843 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_1C159CA9AE6B0843_Class_0_16E7307DCC43CB2C_15* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::WaitUIAnim* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIAnim*))((::PBYTE)hIl2Cpp + CLASS_2_1C159CA9AE6B0843__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C159CA9AE6B0843_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C159CA9AE6B0843_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C159CA9AE6B0843_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1C159CA9AE6B0843_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_804AFBDABBD9560A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C159CA9AE6B0843_METHOD_2_804AFBDABBD9560A_OFFSET))(this);
	}
};
