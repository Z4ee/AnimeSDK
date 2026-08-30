#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_36264895A759B0FF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimelineFinish; }

#define CLASS_2_EB250620979F1B7B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186A8A00)
#define CLASS_2_EB250620979F1B7B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x186A9130)
#define CLASS_2_EB250620979F1B7B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x186A8D30)
#define CLASS_2_EB250620979F1B7B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x186A9140)
#define CLASS_2_EB250620979F1B7B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186A8A40)
#define CLASS_2_EB250620979F1B7B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186A8D80)
#define CLASS_2_EB250620979F1B7B_TICK_OFFSET UNITYSDK_OFFSET(0x186A8DE0)
#define CLASS_2_EB250620979F1B7B__CTOR_OFFSET UNITYSDK_OFFSET(0x186A89E0)

inline static constexpr unsigned int Class_2_EB250620979F1B7B_TypeDefinitionIndex = 56667;

class Class_2_EB250620979F1B7B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_36264895A759B0FF* BMHGECJDFGN; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::WaitTimelineFinish* OFKGLJOAMLD; // 0x28
	::System::Boolean APFMCCJBGCB; // 0x30
	::System::UInt32 BKFJMDBMPKE; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTimelineFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTimelineFinish*))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB250620979F1B7B_ONSKIP_OFFSET))(this);
	}
};
