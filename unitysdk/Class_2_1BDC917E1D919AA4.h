#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1BDC917E1D919AA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13509810)
#define CLASS_2_1BDC917E1D919AA4_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x13509680)
#define CLASS_2_1BDC917E1D919AA4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13509960)
#define CLASS_2_1BDC917E1D919AA4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13509A20)
#define CLASS_2_1BDC917E1D919AA4_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x135099C0)
#define CLASS_2_1BDC917E1D919AA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13509610)
#define CLASS_2_1BDC917E1D919AA4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13509850)
#define CLASS_2_1BDC917E1D919AA4_TICK_OFFSET UNITYSDK_OFFSET(0x135098A0)
#define CLASS_2_1BDC917E1D919AA4__CTOR_OFFSET UNITYSDK_OFFSET(0x13509600)

inline static constexpr unsigned int Class_2_1BDC917E1D919AA4_TypeDefinitionIndex = 54203;

class Class_2_1BDC917E1D919AA4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::CharacterHeadStopLookAt* Field_2_2; // 0x28

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
