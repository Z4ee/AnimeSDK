#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsManagementPlanInfoItemViewModelState.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_45376C2A41320C07;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2C8B7D0B37BEEAEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AA7B40)
#define CLASS_2_2C8B7D0B37BEEAEC_METHOD_2_900854D6DD23E296_OFFSET UNITYSDK_OFFSET(0x15AA7740)
#define CLASS_2_2C8B7D0B37BEEAEC_METHOD_2_F6FC78BA493D9C05_OFFSET UNITYSDK_OFFSET(0x15AA76B0)
#define CLASS_2_2C8B7D0B37BEEAEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AA7520)
#define CLASS_2_2C8B7D0B37BEEAEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AA78A0)
#define CLASS_2_2C8B7D0B37BEEAEC_TICK_OFFSET UNITYSDK_OFFSET(0x15AA7980)
#define CLASS_2_2C8B7D0B37BEEAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA73D0)

inline static constexpr unsigned int Class_2_2C8B7D0B37BEEAEC_TypeDefinitionIndex = 53208;

class Class_2_2C8B7D0B37BEEAEC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_45376C2A41320C07* OFKGLJOAMLD; // 0x20
	::RPG::Client::LimaoNews::LimaoNewsPlanService* IAHMPKBCKBF; // 0x28
	::Class_3_07C3C4D2990C49EE* CDINLNAOFJO; // 0x30
	::Class_3_07C3C4D2990C49EE* EBAIBMDGJNK; // 0x38
	::Class_3_07C3C4D2990C49EE* JPMOKOKJEJC; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_45376C2A41320C07* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_45376C2A41320C07*))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_F6FC78BA493D9C05(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoItemViewModelState))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC_METHOD_2_F6FC78BA493D9C05_OFFSET))(this, a1);
	}

	::System::Void Method_2_900854D6DD23E296(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_2C8B7D0B37BEEAEC_METHOD_2_900854D6DD23E296_OFFSET))(this, a1);
	}
};
