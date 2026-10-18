#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E8F2C17D0B15D35C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB2EF0)
#define CLASS_2_E8F2C17D0B15D35C_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xDCB31B0)
#define CLASS_2_E8F2C17D0B15D35C_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xDCB2F40)
#define CLASS_2_E8F2C17D0B15D35C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDCB3040)
#define CLASS_2_E8F2C17D0B15D35C_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0xDCB31F0)
#define CLASS_2_E8F2C17D0B15D35C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB2FF0)
#define CLASS_2_E8F2C17D0B15D35C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB3100)
#define CLASS_2_E8F2C17D0B15D35C_TICK_OFFSET UNITYSDK_OFFSET(0xDCB3150)
#define CLASS_2_E8F2C17D0B15D35C__CTOR_OFFSET UNITYSDK_OFFSET(0xDCB2EE0)

inline static constexpr unsigned int Class_2_E8F2C17D0B15D35C_TypeDefinitionIndex = 58419;

class Class_2_E8F2C17D0B15D35C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean NJEMCPDFAOK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_GETCONFIG_OFFSET))(this);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8F2C17D0B15D35C_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}
};
