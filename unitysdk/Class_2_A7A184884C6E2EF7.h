#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_544;
namespace RPG::GameCore { class ShowTutorialGuideTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A7A184884C6E2EF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124A67F0)
#define CLASS_2_A7A184884C6E2EF7_METHOD_2_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0x124A6B70)
#define CLASS_2_A7A184884C6E2EF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124A6930)
#define CLASS_2_A7A184884C6E2EF7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124A6A30)
#define CLASS_2_A7A184884C6E2EF7_TICK_OFFSET UNITYSDK_OFFSET(0x124A6B10)
#define CLASS_2_A7A184884C6E2EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x124A67E0)

inline static constexpr unsigned int Class_2_A7A184884C6E2EF7_TypeDefinitionIndex = 54116;

class Class_2_A7A184884C6E2EF7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowTutorialGuideTalk* Field_2_0; // 0x20
	::Class_0_16E4307DCC419505_544* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialGuideTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialGuideTalk*))((::PBYTE)hIl2Cpp + CLASS_2_A7A184884C6E2EF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7A184884C6E2EF7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7A184884C6E2EF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7A184884C6E2EF7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A7A184884C6E2EF7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_049407E7CFE73C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A7A184884C6E2EF7_METHOD_2_049407E7CFE73C8B_OFFSET))(this, a1);
	}
};
