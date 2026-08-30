#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimEvent; }

#define CLASS_2_C9BE3A943B19E203_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC2E5D0)
#define CLASS_2_C9BE3A943B19E203_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBC2EFE0)
#define CLASS_2_C9BE3A943B19E203_METHOD_2_5021D4F5CE511BA1_OFFSET UNITYSDK_OFFSET(0xBC2E870)
#define CLASS_2_C9BE3A943B19E203_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBC2EFF0)
#define CLASS_2_C9BE3A943B19E203_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC2E620)
#define CLASS_2_C9BE3A943B19E203_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC2EF10)
#define CLASS_2_C9BE3A943B19E203_TICK_OFFSET UNITYSDK_OFFSET(0xBC2EF70)
#define CLASS_2_C9BE3A943B19E203__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2E580)

inline static constexpr unsigned int Class_2_C9BE3A943B19E203_TypeDefinitionIndex = 55994;

class Class_2_C9BE3A943B19E203 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x18
	::RPG::GameCore::WaitAnimEvent* OFKGLJOAMLD; // 0x20
	::Class_2_CB25D7A6FABF07EF* LAEGBOHFOCM; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Single PKKNPBGKPAJ; // 0x38
	::System::Int32 OHOGFBCFFFN; // 0x3C
	::System::Int32 BCICECIINBD; // 0x40
	::System::Int32 JFMEEDGDMKP; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5021D4F5CE511BA1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_METHOD_2_5021D4F5CE511BA1_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_ONSKIP_OFFSET))(this);
	}
};
