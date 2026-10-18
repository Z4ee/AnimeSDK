#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_C0A75D92E3E8DAB7;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define CLASS_2_C0A75D92E3E8DAB7___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15997320)
#define CLASS_2_C0A75D92E3E8DAB7___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET UNITYSDK_OFFSET(0x15999DD0)

inline static constexpr unsigned int Class_2_C0A75D92E3E8DAB7___c__DisplayClass3_0_TypeDefinitionIndex = 76704;

class Class_2_C0A75D92E3E8DAB7___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* completeActions; // 0x10
	::Class_2_B8E38BF47138A2E5* capturedEntity; // 0x18
	::Class_2_C0A75D92E3E8DAB7* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0A75D92E3E8DAB7___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __SolveSubClassAction_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0A75D92E3E8DAB7___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET))(this);
	}
};
