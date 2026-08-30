#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7E1DEB8F9D7E08B6;
class Class_2_B8E38BF47138A2E5;
namespace RPG::GameCore { class FiveDimBaseEventAction; }

#define CLASS_2_7E1DEB8F9D7E08B6___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17282240)
#define CLASS_2_7E1DEB8F9D7E08B6___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET UNITYSDK_OFFSET(0x17284C80)

inline static constexpr unsigned int Class_2_7E1DEB8F9D7E08B6___c__DisplayClass3_0_TypeDefinitionIndex = 76226;

class Class_2_7E1DEB8F9D7E08B6___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_B8E38BF47138A2E5* capturedEntity; // 0x10
	::Class_2_7E1DEB8F9D7E08B6* __4__this; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* completeActions; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __SolveSubClassAction_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1DEB8F9D7E08B6___C__DISPLAYCLASS3_0___SOLVESUBCLASSACTION_B__1_OFFSET))(this);
	}
};
