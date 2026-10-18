#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1BDC917E1D919AA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1550A450)
#define CLASS_2_1BDC917E1D919AA4_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x1550A2C0)
#define CLASS_2_1BDC917E1D919AA4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1550A5A0)
#define CLASS_2_1BDC917E1D919AA4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1550A660)
#define CLASS_2_1BDC917E1D919AA4_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1550A600)
#define CLASS_2_1BDC917E1D919AA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1550A250)
#define CLASS_2_1BDC917E1D919AA4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1550A490)
#define CLASS_2_1BDC917E1D919AA4_TICK_OFFSET UNITYSDK_OFFSET(0x1550A4E0)
#define CLASS_2_1BDC917E1D919AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1550A240)

inline static constexpr unsigned int Class_2_1BDC917E1D919AA4_TypeDefinitionIndex = 58005;

class Class_2_1BDC917E1D919AA4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x20
	::RPG::GameCore::CharacterHeadStopLookAt* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadStopLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadStopLookAt*))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BDC917E1D919AA4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
