#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1276;
class Class_0_16E4307DCC419505_1277;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudFreeCardMoveHandler; }

#define CLASS_1_F492C74DFB16E89B_METHOD_1_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x1765B720)
#define CLASS_1_F492C74DFB16E89B_METHOD_1_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0x1765BB10)
#define CLASS_1_F492C74DFB16E89B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1765BA40)
#define CLASS_1_F492C74DFB16E89B_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1765BBA0)
#define CLASS_1_F492C74DFB16E89B_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1765B900)
#define CLASS_1_F492C74DFB16E89B__CTOR_OFFSET UNITYSDK_OFFSET(0x1765BC50)

inline static constexpr unsigned int Class_1_F492C74DFB16E89B_TypeDefinitionIndex = 75738;

class Class_1_F492C74DFB16E89B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x14; // 0x0
	::Class_0_16E4307DCC419505_1276* Field_1_1; // 0x10
	::RPG::Client::FateRin::Battle::FateRinBattleHudFreeCardMoveHandler* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F492C74DFB16E89B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_1277* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1277*))((::PBYTE)hIl2Cpp + CLASS_1_F492C74DFB16E89B_METHOD_1_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F492C74DFB16E89B_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F492C74DFB16E89B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F492C74DFB16E89B_METHOD_1_28141171CE1C76E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F492C74DFB16E89B_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
