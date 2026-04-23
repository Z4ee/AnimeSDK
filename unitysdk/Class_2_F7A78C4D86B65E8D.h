#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_3.h"
#include "unitysdk/System/Guid.h"

class Class_2_A48F3719AA1CF200_6;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPerformance; }

#define CLASS_2_F7A78C4D86B65E8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DBABA0)
#define CLASS_2_F7A78C4D86B65E8D_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x11DBB520)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_5D99099B99F1668A_OFFSET UNITYSDK_OFFSET(0x11DBB190)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_688BE5E8E681071A_OFFSET UNITYSDK_OFFSET(0x11DBAC00)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_A7DA7E520D3F52A3_OFFSET UNITYSDK_OFFSET(0x11DBB0C0)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DBB5A0)
#define CLASS_2_F7A78C4D86B65E8D_METHOD_2_DF4A3B8481FEB8BF_OFFSET UNITYSDK_OFFSET(0x11DBAC90)
#define CLASS_2_F7A78C4D86B65E8D_ONSKIP_OFFSET UNITYSDK_OFFSET(0x11DBB530)
#define CLASS_2_F7A78C4D86B65E8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DBAD10)
#define CLASS_2_F7A78C4D86B65E8D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DBB450)
#define CLASS_2_F7A78C4D86B65E8D_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x11DBAC40)
#define CLASS_2_F7A78C4D86B65E8D_TICK_OFFSET UNITYSDK_OFFSET(0x11DBB4C0)
#define CLASS_2_F7A78C4D86B65E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBAB80)

inline static constexpr unsigned int Class_2_F7A78C4D86B65E8D_TypeDefinitionIndex = 49282;

class Class_2_F7A78C4D86B65E8D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerPerformance* Field_2_0; // 0x18
	::RPG::Client::AdventurePhase* Field_2_4; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::RPG::Client::PerformanceManager* Field_2_5; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x40
	::System::Guid Field_2_6; // 0x48

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

	::System::Void Method_2_DF4A3B8481FEB8BF(::Class_2_A48F3719AA1CF200_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_DF4A3B8481FEB8BF_OFFSET))(this, a1);
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

	::System::Boolean Method_2_A7DA7E520D3F52A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_A7DA7E520D3F52A3_OFFSET))(this);
	}

	::System::Void Method_2_5D99099B99F1668A(::Struct_2_FEFADCB82FEB841E_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_3))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_5D99099B99F1668A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7A78C4D86B65E8D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
