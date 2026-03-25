#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4435D91C89BF25F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E20E90)
#define CLASS_2_4435D91C89BF25F6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x8E21C70)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8E217D0)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x8E20F30)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x8E219B0)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_C38DE0E34C398638_OFFSET UNITYSDK_OFFSET(0x8E21C20)
#define CLASS_2_4435D91C89BF25F6_METHOD_2_E239382DD8D3653B_OFFSET UNITYSDK_OFFSET(0x8E21550)
#define CLASS_2_4435D91C89BF25F6_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x8E21B90)
#define CLASS_2_4435D91C89BF25F6_ONSKIP_OFFSET UNITYSDK_OFFSET(0x8E21960)
#define CLASS_2_4435D91C89BF25F6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8E21000)
#define CLASS_2_4435D91C89BF25F6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8E21850)
#define CLASS_2_4435D91C89BF25F6_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x8E20FB0)
#define CLASS_2_4435D91C89BF25F6_TICK_OFFSET UNITYSDK_OFFSET(0x8E21900)
#define CLASS_2_4435D91C89BF25F6__CTOR_OFFSET UNITYSDK_OFFSET(0x8E20E80)

inline static constexpr unsigned int Class_2_4435D91C89BF25F6_TypeDefinitionIndex = 47003;

class Class_2_4435D91C89BF25F6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x20
	::RPG::GameCore::PlayAndWaitSimpleTalk* Field_2_1; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAndWaitSimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAndWaitSimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E239382DD8D3653B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_E239382DD8D3653B_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_C38DE0E34C398638(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_C38DE0E34C398638_OFFSET))(this, a1);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4435D91C89BF25F6_GET_FORCESKIP_OFFSET))(this);
	}
};
