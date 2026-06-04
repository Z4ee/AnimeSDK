#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/Guid.h"

namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5388514CECCA0FC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA83AAB0)
#define CLASS_2_5388514CECCA0FC0_METHOD_2_DF3BCB639F0C02DF_OFFSET UNITYSDK_OFFSET(0xA83AE00)
#define CLASS_2_5388514CECCA0FC0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA83AB60)
#define CLASS_2_5388514CECCA0FC0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA83AD30)
#define CLASS_2_5388514CECCA0FC0_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xA83AB10)
#define CLASS_2_5388514CECCA0FC0_TICK_OFFSET UNITYSDK_OFFSET(0xA83ADA0)
#define CLASS_2_5388514CECCA0FC0__CTOR_OFFSET UNITYSDK_OFFSET(0xA83AA90)

inline static constexpr unsigned int Class_2_5388514CECCA0FC0_TypeDefinitionIndex = 54382;

class Class_2_5388514CECCA0FC0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::LevelPerformanceInitialize* Field_2_2; // 0x28
	::RPG::Client::PerformanceManager* Field_2_3; // 0x30
	::System::Guid Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPerformanceInitialize*))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF3BCB639F0C02DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5388514CECCA0FC0_METHOD_2_DF3BCB639F0C02DF_OFFSET))(this, a1);
	}
};
