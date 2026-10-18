#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_571;
class Class_1_9E3B72ED878AEF28;
class Class_1_DA32E543F3E152DD;
class Class_3_98C806684F7CC372_12;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1763C3F870E54CEB_METHOD_1_07F7A083AEB87759_OFFSET UNITYSDK_OFFSET(0xBF9E250)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_0DFF2CFEC2E9091A_OFFSET UNITYSDK_OFFSET(0xBF9D5B0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_2AB85BE2A67D08EB_OFFSET UNITYSDK_OFFSET(0xBF9D480)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_2BD784981EFF0C9B_OFFSET UNITYSDK_OFFSET(0xBF9E8E0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_4E40B6C28D9DCB70_OFFSET UNITYSDK_OFFSET(0xBF9D920)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_55357EED91DD300A_OFFSET UNITYSDK_OFFSET(0xBF8D950)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_6C319119E0CCE4C0_1_OFFSET UNITYSDK_OFFSET(0xBF9E110)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_6C319119E0CCE4C0_OFFSET UNITYSDK_OFFSET(0xBF9E090)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_78328DD1829FCCF4_OFFSET UNITYSDK_OFFSET(0xBF9E3E0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0xBF9E9F0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_908180B8F1022CC2_OFFSET UNITYSDK_OFFSET(0xBF9DA60)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_91A383AC107D6858_OFFSET UNITYSDK_OFFSET(0xBF9E510)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_AC7BD58DBE80A7D0_OFFSET UNITYSDK_OFFSET(0xBF9E7A0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_C6DE0B41731F49F8_OFFSET UNITYSDK_OFFSET(0xBF9E6A0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_D1DAA01ABF3D4077_OFFSET UNITYSDK_OFFSET(0xBF9DAE0)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_E91DC8577619DA02_OFFSET UNITYSDK_OFFSET(0xBF9E300)
#define CLASS_1_1763C3F870E54CEB_METHOD_1_EE39C91E1ED6865F_OFFSET UNITYSDK_OFFSET(0xBF9D810)
#define CLASS_1_1763C3F870E54CEB_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBF9DB40)
#define CLASS_1_1763C3F870E54CEB_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBF9E190)
#define CLASS_1_1763C3F870E54CEB__CTOR_OFFSET UNITYSDK_OFFSET(0xBF9EA00)

inline static constexpr unsigned int Class_1_1763C3F870E54CEB_TypeDefinitionIndex = 54218;

class Class_1_1763C3F870E54CEB : public ::System::Object
{
public:
	::Class_1_9E3B72ED878AEF28* BLJOOHKFBBF; // 0x10
	::Il2CppArray<::Class_1_DA32E543F3E152DD*>* MHPIAFKLEEG; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* ILJPCPAJDMC; // 0x20
	::RPG::GameCore::FixVec3 CFAGPIIALAB; // 0x28
	::RPG::GameCore::FixPoint JHLBDACDGOM; // 0x40
	::RPG::GameCore::IVec2 PJJIBPCHANK; // 0x48
	::RPG::GameCore::IVec2 APDEGFLMOIB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2AB85BE2A67D08EB(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::Class_0_16E4307DCC419505_571* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::Class_0_16E4307DCC419505_571*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_2AB85BE2A67D08EB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_0DFF2CFEC2E9091A(::RPG::GameCore::IVec2& a1, ::Class_0_16E4307DCC419505_571* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2&, ::Class_0_16E4307DCC419505_571*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_0DFF2CFEC2E9091A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_EE39C91E1ED6865F(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2& a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_EE39C91E1ED6865F_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_4E40B6C28D9DCB70(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a5, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::RPG::GameCore::IVec2, ::System::Int32, ::System::Int32, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_4E40B6C28D9DCB70_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_908180B8F1022CC2(::Class_1_DA32E543F3E152DD* a1)
	{
		return ((::System::Boolean(*)(::Class_1_DA32E543F3E152DD*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_908180B8F1022CC2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D1DAA01ABF3D4077(::Class_1_DA32E543F3E152DD* a1)
	{
		return ((::System::Boolean(*)(::Class_1_DA32E543F3E152DD*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_D1DAA01ABF3D4077_OFFSET))(a1);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Boolean Method_1_07F7A083AEB87759(::RPG::GameCore::IVec2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_07F7A083AEB87759_OFFSET))(this, a1);
	}

	::Class_1_DA32E543F3E152DD* Method_1_E91DC8577619DA02(::RPG::GameCore::IVec2 a1)
	{
		return ((::Class_1_DA32E543F3E152DD*(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_E91DC8577619DA02_OFFSET))(this, a1);
	}

	::Class_1_DA32E543F3E152DD* Method_1_78328DD1829FCCF4(::RPG::GameCore::IVec2 a1, ::Class_0_16E4307DCC419505_571* a2, ::System::Boolean a3)
	{
		return ((::Class_1_DA32E543F3E152DD*(*)(::PVOID, ::RPG::GameCore::IVec2, ::Class_0_16E4307DCC419505_571*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_78328DD1829FCCF4_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::IVec2 Method_1_91A383AC107D6858(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_91A383AC107D6858_OFFSET))(this, a1);
	}

	::Class_1_DA32E543F3E152DD* Method_1_55357EED91DD300A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_DA32E543F3E152DD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_55357EED91DD300A_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_AC7BD58DBE80A7D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_AC7BD58DBE80A7D0_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixVec3 Method_1_2BD784981EFF0C9B(::RPG::GameCore::IVec2 a1)
	{
		return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_2BD784981EFF0C9B_OFFSET))(this, a1);
	}

	::RPG::GameCore::IVec2 Method_1_C6DE0B41731F49F8(::RPG::GameCore::FixVec3 a1)
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_C6DE0B41731F49F8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_6C319119E0CCE4C0(::RPG::GameCore::IVec2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_6C319119E0CCE4C0_OFFSET))(this, a1);
	}

	::RPG::GameCore::IVec2 Method_1_6C319119E0CCE4C0_1(::System::Int32 a1)
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_6C319119E0CCE4C0_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1763C3F870E54CEB_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}
};
