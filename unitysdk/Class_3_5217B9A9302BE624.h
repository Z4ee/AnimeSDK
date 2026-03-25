#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"

class Class_0_16E4307DCC419505_375;
class Class_1_F8F1752DCDE35E35;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class AdvSetAIFollow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_5217B9A9302BE624_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C26CB0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8C27920)
#define CLASS_3_5217B9A9302BE624_METHOD_3_5100C191BD8C1780_OFFSET UNITYSDK_OFFSET(0x8C27650)
#define CLASS_3_5217B9A9302BE624_METHOD_3_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x8C279D0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x8C27580)
#define CLASS_3_5217B9A9302BE624_METHOD_3_E49D1DF208CF8EFE_OFFSET UNITYSDK_OFFSET(0x8C27A30)
#define CLASS_3_5217B9A9302BE624_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C26D90)
#define CLASS_3_5217B9A9302BE624_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C278B0)
#define CLASS_3_5217B9A9302BE624_TICK_OFFSET UNITYSDK_OFFSET(0x8C277D0)
#define CLASS_3_5217B9A9302BE624__CTOR_OFFSET UNITYSDK_OFFSET(0x8C26C90)
#define CLASS_3_5217B9A9302BE624___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C27B90)

inline static constexpr unsigned int Class_3_5217B9A9302BE624_TypeDefinitionIndex = 42499;

class Class_3_5217B9A9302BE624 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	// static const ::System::Single Field_3_6; // 0x0
	// static const ::System::Single Field_3_7; // 0x0
	// static const ::System::Single Field_3_8; // 0x0
	::RPG::GameCore::AdvSetAIFollow* Field_3_0; // 0x30
	::System::String* Field_3_4; // 0x38
	::System::String* Field_3_5; // 0x40
	::Class_1_F8F1752DCDE35E35* Field_3_2; // 0x48
	::Class_2_9D4DD2F4235F8658* Field_3_1; // 0x50
	::System::UInt32 Field_3_3; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIFollow*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_5100C191BD8C1780()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_5100C191BD8C1780_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_3_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_3_E49D1DF208CF8EFE(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_E49D1DF208CF8EFE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
