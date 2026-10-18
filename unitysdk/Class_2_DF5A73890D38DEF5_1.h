#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5134D652652849DB;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DF5A73890D38DEF5_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AC9960)
#define CLASS_2_DF5A73890D38DEF5_1_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x15ACA060)
#define CLASS_2_DF5A73890D38DEF5_1_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15AC9950)
#define CLASS_2_DF5A73890D38DEF5_1_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15AC9EC0)
#define CLASS_2_DF5A73890D38DEF5_1_METHOD_2_CF8551534BA217CC_OFFSET UNITYSDK_OFFSET(0x15AC9A30)
#define CLASS_2_DF5A73890D38DEF5_1_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15AC9F80)
#define CLASS_2_DF5A73890D38DEF5_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AC9AC0)
#define CLASS_2_DF5A73890D38DEF5_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AC9CB0)
#define CLASS_2_DF5A73890D38DEF5_1_TICK_OFFSET UNITYSDK_OFFSET(0x15AC9D80)
#define CLASS_2_DF5A73890D38DEF5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC9940)

inline static constexpr unsigned int Class_2_DF5A73890D38DEF5_1_TypeDefinitionIndex = 55614;

class Class_2_DF5A73890D38DEF5_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_5134D652652849DB* OFKGLJOAMLD; // 0x20
	::System::Single BOBKAKEJPEI; // 0x28
	::System::Single DKOFFPPGEFI; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5134D652652849DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5134D652652849DB*))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_ONSKIP_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_GETCONFIG_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_CF8551534BA217CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF5A73890D38DEF5_1_METHOD_2_CF8551534BA217CC_OFFSET))(this, a1);
	}
};
