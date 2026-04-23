#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayAndWaitRogueSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71A079ABAC496461_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117D6A20)
#define CLASS_2_71A079ABAC496461_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x117D72D0)
#define CLASS_2_71A079ABAC496461_METHOD_2_3D116447C69048AD_OFFSET UNITYSDK_OFFSET(0x117D71E0)
#define CLASS_2_71A079ABAC496461_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x117D6EE0)
#define CLASS_2_71A079ABAC496461_METHOD_2_510C3C62CAC002C3_1_OFFSET UNITYSDK_OFFSET(0x117D7130)
#define CLASS_2_71A079ABAC496461_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x117D6AC0)
#define CLASS_2_71A079ABAC496461_METHOD_2_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0x117D6CD0)
#define CLASS_2_71A079ABAC496461_ONSKIP_OFFSET UNITYSDK_OFFSET(0x117D7070)
#define CLASS_2_71A079ABAC496461_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117D6B90)
#define CLASS_2_71A079ABAC496461_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x117D6F60)
#define CLASS_2_71A079ABAC496461_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x117D6B40)
#define CLASS_2_71A079ABAC496461_TICK_OFFSET UNITYSDK_OFFSET(0x117D7010)
#define CLASS_2_71A079ABAC496461__CTOR_OFFSET UNITYSDK_OFFSET(0x117D6A10)

inline static constexpr unsigned int Class_2_71A079ABAC496461_TypeDefinitionIndex = 53734;

class Class_2_71A079ABAC496461 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayAndWaitRogueSimpleTalk* Field_2_1; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_C26623CFD2E6EAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_C26623CFD2E6EAE3_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_3D116447C69048AD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_3D116447C69048AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_510C3C62CAC002C3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_METHOD_2_510C3C62CAC002C3_1_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A079ABAC496461_GET_FORCESKIP_OFFSET))(this);
	}
};
