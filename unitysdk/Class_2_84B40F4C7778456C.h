#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_273AB9C9690DD47B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_84B40F4C7778456C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE47CB00)
#define CLASS_2_84B40F4C7778456C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE47CE20)
#define CLASS_2_84B40F4C7778456C_METHOD_2_1D5C1D3027FFF563_OFFSET UNITYSDK_OFFSET(0xE47C6D0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_2BFB72D7A3D3B8CB_OFFSET UNITYSDK_OFFSET(0xE47C370)
#define CLASS_2_84B40F4C7778456C_METHOD_2_3EE9C3671E304796_OFFSET UNITYSDK_OFFSET(0xE47C260)
#define CLASS_2_84B40F4C7778456C_METHOD_2_42A121C686C73935_OFFSET UNITYSDK_OFFSET(0xE47C1D0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_5477399663FA192A_OFFSET UNITYSDK_OFFSET(0xE47C470)
#define CLASS_2_84B40F4C7778456C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE47D1E0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xE47C850)
#define CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xE47C8F0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xE47CA60)
#define CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xE47C770)
#define CLASS_2_84B40F4C7778456C_METHOD_2_ABB142299C4ACDC1_OFFSET UNITYSDK_OFFSET(0xE47C5F0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_BBEB6FA9D76DD91E_OFFSET UNITYSDK_OFFSET(0xE47C4C0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0xE47C990)
#define CLASS_2_84B40F4C7778456C_METHOD_2_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0xE47C660)
#define CLASS_2_84B40F4C7778456C_METHOD_2_DE3244AC41BC6E2A_OFFSET UNITYSDK_OFFSET(0xE47BFF0)
#define CLASS_2_84B40F4C7778456C_METHOD_2_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0xE47BE40)
#define CLASS_2_84B40F4C7778456C__CTOR_OFFSET UNITYSDK_OFFSET(0xE47D100)
#define CLASS_2_84B40F4C7778456C___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE47D240)
#define CLASS_2_84B40F4C7778456C___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE47D2A0)

inline static constexpr unsigned int Class_2_84B40F4C7778456C_TypeDefinitionIndex = 66855;

class Class_2_84B40F4C7778456C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Stack_1<::Class_2_273AB9C9690DD47B*>* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_273AB9C9690DD47B*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_2_42A121C686C73935(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_42A121C686C73935_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EE9C3671E304796(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_3EE9C3671E304796_OFFSET))(this, a1);
	}

	::System::Void Method_2_5477399663FA192A(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_5477399663FA192A_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBEB6FA9D76DD91E(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_BBEB6FA9D76DD91E_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABB142299C4ACDC1(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_ABB142299C4ACDC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE3244AC41BC6E2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_DE3244AC41BC6E2A_OFFSET))(this, a1);
	}

	::Class_2_273AB9C9690DD47B* Method_2_DCEC38F05597CB7D()
	{
		return ((::Class_2_273AB9C9690DD47B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_DCEC38F05597CB7D_OFFSET))(this);
	}

	::System::Void Method_2_2BFB72D7A3D3B8CB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_2BFB72D7A3D3B8CB_OFFSET))(this, a1);
	}

	::Class_2_273AB9C9690DD47B* Method_2_1D5C1D3027FFF563(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_273AB9C9690DD47B*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_1D5C1D3027FFF563_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B40F4C7778456C___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
