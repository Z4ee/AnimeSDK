#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_2.h"
#include "unitysdk/System/Guid.h"

class Class_2_A48F3719AA1CF200_4;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPerformance; }

#define CLASS_2_F7A78C4D86B65E8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8B79E0)
#define CLASS_2_F7A78C4D86B65E8D_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1A8B84D0)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_688BE5E8E681071A_OFFSET UNITYSDK_OFFSET(0x1A8B7A40)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8B8550)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_CCD768A4B5AD3AFC_OFFSET UNITYSDK_OFFSET(0x1A8B7AD0)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_D77E6A6E25781A33_OFFSET UNITYSDK_OFFSET(0x1A8B7FB0)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_E598ADFD47E46991_OFFSET UNITYSDK_OFFSET(0x1A8B8080)
#define CLASS_2_F7A78C4D86B65E8D_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1A8B84E0)
#define CLASS_2_F7A78C4D86B65E8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8B7B50)
#define CLASS_2_F7A78C4D86B65E8D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8B8400)
#define CLASS_2_F7A78C4D86B65E8D_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x1A8B7A80)
#define CLASS_2_F7A78C4D86B65E8D_TICK_OFFSET UNITYSDK_OFFSET(0x1A8B8470)
#define CLASS_2_F7A78C4D86B65E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B79C0)

inline static constexpr unsigned int Class_2_F7A78C4D86B65E8D_TypeDefinitionIndex = 53710;

class Class_2_F7A78C4D86B65E8D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerPerformance* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_5F51D4049EA87B7B* CJHJNLGOJLA; // 0x28
	::Class_3_07C3C4D2990C49EE* FPHGFPAGLND; // 0x30
	::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x38
	::RPG::Client::PerformanceManager* CFHLPMAFJLH; // 0x40
	::System::Guid HAMICAAHNAM; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::TriggerPerformance* Method_2_688BE5E8E681071A()
	{
		return ((::RPG::GameCore::TriggerPerformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_688BE5E8E681071A_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCD768A4B5AD3AFC(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_CCD768A4B5AD3AFC_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_ONSKIP_OFFSET))(this);
	}

	::System::Boolean Method_2_D77E6A6E25781A33()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_D77E6A6E25781A33_OFFSET))(this);
	}

	::System::Void Method_2_E598ADFD47E46991(::Struct_2_FEFADCB82FEB841E_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_2))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_E598ADFD47E46991_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
