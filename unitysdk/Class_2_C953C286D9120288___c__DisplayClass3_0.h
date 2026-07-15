#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_2_C953C286D9120288;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define CLASS_2_C953C286D9120288___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1632E320)
#define CLASS_2_C953C286D9120288___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET UNITYSDK_OFFSET(0x163303F0)

inline static constexpr unsigned int Class_2_C953C286D9120288___c__DisplayClass3_0_TypeDefinitionIndex = 72786;

class Class_2_C953C286D9120288___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_C953C286D9120288* __4__this; // 0x10
	::Class_2_56DCA1B58073717B* capturedEntity; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* completeActions; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __SolveSubClassAction_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C953C286D9120288___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET))(this);
	}
};
