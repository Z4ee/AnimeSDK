#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentAssistantState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_103;
class Class_0_16E4307DCC419505_150;
class Class_1_04E767430AD06AF5;

#define CLASS_1_04E767430AD06AF5_CLASS_1_DE10D13FDAFAE782_METHOD_1_6B4EB73BC613FEB1_OFFSET UNITYSDK_OFFSET(0x158072A0)
#define CLASS_1_04E767430AD06AF5_CLASS_1_DE10D13FDAFAE782__CTOR_OFFSET UNITYSDK_OFFSET(0x15807290)

inline static constexpr unsigned int Class_1_04E767430AD06AF5_Class_1_DE10D13FDAFAE782_TypeDefinitionIndex = 79432;

class Class_1_04E767430AD06AF5_Class_1_DE10D13FDAFAE782 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_103* ILPEEPDIPHL; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_CLASS_1_DE10D13FDAFAE782__CTOR_OFFSET))(this, a1);
	}

	::Class_1_04E767430AD06AF5* Method_1_6B4EB73BC613FEB1(::Class_0_16E4307DCC419505_150* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState a2)
	{
		return ((::Class_1_04E767430AD06AF5*(*)(::PVOID, ::Class_0_16E4307DCC419505_150*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentAssistantState))((::PBYTE)hIl2Cpp + CLASS_1_04E767430AD06AF5_CLASS_1_DE10D13FDAFAE782_METHOD_1_6B4EB73BC613FEB1_OFFSET))(this, a1, a2);
	}
};
