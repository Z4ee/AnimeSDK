#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"

class Class_0_16E4307DCC419505_401;
class Class_1_F8F1752DCDE35E35;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class AdvSetAIFollow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_5217B9A9302BE624_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137A48E0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_099AB2977CB7EB87_OFFSET UNITYSDK_OFFSET(0x137A56E0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x137A55D0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_7F10F3A00DFF6619_OFFSET UNITYSDK_OFFSET(0x137A52E0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x137A5680)
#define CLASS_3_5217B9A9302BE624_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x137A5210)
#define CLASS_3_5217B9A9302BE624_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137A49D0)
#define CLASS_3_5217B9A9302BE624_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137A5560)
#define CLASS_3_5217B9A9302BE624_TICK_OFFSET UNITYSDK_OFFSET(0x137A5480)
#define CLASS_3_5217B9A9302BE624__CTOR_OFFSET UNITYSDK_OFFSET(0x137A48C0)
#define CLASS_3_5217B9A9302BE624___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137A5840)

inline static constexpr unsigned int Class_3_5217B9A9302BE624_TypeDefinitionIndex = 49086;

class Class_3_5217B9A9302BE624 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	// static const ::System::Single Field_3_1; // 0x0
	// static const ::System::Single Field_3_2; // 0x0
	::System::String* Field_3_3; // 0x30
	::Class_2_9D4DD2F4235F8658* Field_3_4; // 0x38
	::System::String* Field_3_5; // 0x40
	::Class_1_F8F1752DCDE35E35* Field_3_6; // 0x48
	::RPG::GameCore::AdvSetAIFollow* Field_3_7; // 0x50
	::System::UInt32 Field_3_8; // 0x58

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

	::RPG::GameCore::GameEntity* Method_3_7F10F3A00DFF6619()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_7F10F3A00DFF6619_OFFSET))(this);
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

	::System::Void Method_3_099AB2977CB7EB87(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_099AB2977CB7EB87_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
