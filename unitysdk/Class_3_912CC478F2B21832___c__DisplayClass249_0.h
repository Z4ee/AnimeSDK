#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }

#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS249_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FC390)
#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS249_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xBA04920)
#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS249_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0xBA049A0)

inline static constexpr unsigned int Class_3_912CC478F2B21832___c__DisplayClass249_0_TypeDefinitionIndex = 76698;

class Class_3_912CC478F2B21832___c__DisplayClass249_0 : public ::System::Object
{
public:
	::Class_2_B8E38BF47138A2E5* propEntity; // 0x10
	::Class_3_912CC478F2B21832* __4__this; // 0x18
	::RPG::GameCore::FiveDimTriggerEventEmitterConfig* emitterConfig; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS249_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTriggerEventEmitterTrigger_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS249_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void __CreateTriggerEventEmitterTrigger_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS249_0___CREATETRIGGEREVENTEMITTERTRIGGER_B__1_OFFSET))(this, a1);
	}
};
