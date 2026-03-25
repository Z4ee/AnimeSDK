#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CollectionPlaySimpleTalk; }
namespace RPG::GameCore { class PlayAndWaitSimpleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_0A88DBDF113FCDF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C68FE0)
#define CLASS_2_0A88DBDF113FCDF7_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x8C69D90)
#define CLASS_2_0A88DBDF113FCDF7_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x8C69030)
#define CLASS_2_0A88DBDF113FCDF7_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8C699B0)
#define CLASS_2_0A88DBDF113FCDF7_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8C69B50)
#define CLASS_2_0A88DBDF113FCDF7_METHOD_2_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0x8C69D40)
#define CLASS_2_0A88DBDF113FCDF7_METHOD_2_E239382DD8D3653B_OFFSET UNITYSDK_OFFSET(0x8C69730)
#define CLASS_2_0A88DBDF113FCDF7_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x8C69CB0)
#define CLASS_2_0A88DBDF113FCDF7_ONSKIP_OFFSET UNITYSDK_OFFSET(0x8C69B00)
#define CLASS_2_0A88DBDF113FCDF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C69130)
#define CLASS_2_0A88DBDF113FCDF7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C69A50)
#define CLASS_2_0A88DBDF113FCDF7_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x8C690E0)
#define CLASS_2_0A88DBDF113FCDF7_TICK_OFFSET UNITYSDK_OFFSET(0x8C69AA0)
#define CLASS_2_0A88DBDF113FCDF7__CTOR_OFFSET UNITYSDK_OFFSET(0x8C68FD0)

inline static constexpr unsigned int Class_2_0A88DBDF113FCDF7_TypeDefinitionIndex = 46808;

class Class_2_0A88DBDF113FCDF7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CollectionPlaySimpleTalk* Field_2_1; // 0x18
	::RPG::GameCore::PlayAndWaitSimpleTalk* Field_2_4; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x28
	::RPG::GameCore::TaskContext* Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectionPlaySimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectionPlaySimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E239382DD8D3653B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_METHOD_2_E239382DD8D3653B_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_METHOD_2_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A88DBDF113FCDF7_GET_FORCESKIP_OFFSET))(this);
	}
};
