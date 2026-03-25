#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C.h"

class Class_1_256D9F63CEA2C6FD;
class Class_1_6C2797E3349B53EE;
class Class_1_827373C1CEDFE355;
class Class_1_C1EF032BF58D5C23;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_850C234AA2B8A0A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115FF710)
#define CLASS_2_850C234AA2B8A0A3_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x11607470)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_029F0C6DBB8AC745_OFFSET UNITYSDK_OFFSET(0x11607240)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_06608D365EA50724_OFFSET UNITYSDK_OFFSET(0x11605B60)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_143476BE61E30980_OFFSET UNITYSDK_OFFSET(0x115FF860)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_1792F44D8A28BBA5_OFFSET UNITYSDK_OFFSET(0x11605840)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_199CB10F8BF6CEF4_OFFSET UNITYSDK_OFFSET(0x11603A40)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_20D2EE25D15C1A41_OFFSET UNITYSDK_OFFSET(0x116056F0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_29EF15CD94593AAE_OFFSET UNITYSDK_OFFSET(0x11601DB0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_416B804F4ABC78EC_OFFSET UNITYSDK_OFFSET(0x11602470)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_4F4AFFC911B3D4AA_OFFSET UNITYSDK_OFFSET(0x11602A30)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x115FFAB0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_51BE7F0CD6759F40_OFFSET UNITYSDK_OFFSET(0x116025F0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_53BD888AED7AAE33_OFFSET UNITYSDK_OFFSET(0x11601160)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_79335F97BF9F9923_OFFSET UNITYSDK_OFFSET(0x11606080)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_7EE311423AAF2EBA_OFFSET UNITYSDK_OFFSET(0x116070A0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_87B3FEE9DCD52DFC_OFFSET UNITYSDK_OFFSET(0x11603430)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_B6066EDABA9658FF_1_OFFSET UNITYSDK_OFFSET(0x11602860)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_B6066EDABA9658FF_OFFSET UNITYSDK_OFFSET(0x11602690)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_C2DEBF51B6B0C21F_OFFSET UNITYSDK_OFFSET(0x11602C70)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_C693EE9B34491FF7_OFFSET UNITYSDK_OFFSET(0x116059C0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_D0AE1786157F8347_OFFSET UNITYSDK_OFFSET(0x11601E40)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_E61B723F9C6B7CFD_OFFSET UNITYSDK_OFFSET(0x11603080)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_F09F3B003393B142_OFFSET UNITYSDK_OFFSET(0x11600FC0)
#define CLASS_2_850C234AA2B8A0A3_METHOD_2_F12E7C59B11C586B_OFFSET UNITYSDK_OFFSET(0x116040F0)
#define CLASS_2_850C234AA2B8A0A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115FFBD0)
#define CLASS_2_850C234AA2B8A0A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x116023C0)
#define CLASS_2_850C234AA2B8A0A3_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x11607480)
#define CLASS_2_850C234AA2B8A0A3_TICK_OFFSET UNITYSDK_OFFSET(0x11602410)
#define CLASS_2_850C234AA2B8A0A3__CTOR_OFFSET UNITYSDK_OFFSET(0x115FF640)

inline static constexpr unsigned int Class_2_850C234AA2B8A0A3_TypeDefinitionIndex = 44012;

class Class_2_850C234AA2B8A0A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::DamageByAttackProperty* Field_2_1; // 0x28
	::Class_1_827373C1CEDFE355* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_1_C1EF032BF58D5C23*>* Field_2_5; // 0x38
	::System::Boolean _Disposed_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_DISPOSE_OFFSET))(this);
	}

	::Class_1_C1EF032BF58D5C23* Method_2_143476BE61E30980()
	{
		return ((::Class_1_C1EF032BF58D5C23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_143476BE61E30980_OFFSET))(this);
	}

	::System::Void Method_2_5110E061C0DF5692(::Class_1_C1EF032BF58D5C23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1EF032BF58D5C23*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_D0AE1786157F8347(::System::Boolean& a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_D0AE1786157F8347_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_TICK_OFFSET))(this, a1);
	}

	::Class_1_256D9F63CEA2C6FD* Method_2_416B804F4ABC78EC(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::Class_1_256D9F63CEA2C6FD*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_416B804F4ABC78EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_51BE7F0CD6759F40(::Class_1_256D9F63CEA2C6FD* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_51BE7F0CD6759F40_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_2_29EF15CD94593AAE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_29EF15CD94593AAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_53BD888AED7AAE33(::Class_1_6C2797E3349B53EE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C2797E3349B53EE*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_53BD888AED7AAE33_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6066EDABA9658FF(::Class_1_256D9F63CEA2C6FD* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_B6066EDABA9658FF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B6066EDABA9658FF_1(::Class_1_256D9F63CEA2C6FD* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_B6066EDABA9658FF_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4F4AFFC911B3D4AA(::Class_1_256D9F63CEA2C6FD* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::TurnBasedAbilityComponent* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_4F4AFFC911B3D4AA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_2_F12E7C59B11C586B(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2, ::Class_1_256D9F63CEA2C6FD* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::Class_3_5775A4FEC79026BC* a10)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_F12E7C59B11C586B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_2_20D2EE25D15C1A41(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::AttackData* a4, ::Class_1_256D9F63CEA2C6FD* a5, ::Struct_2_E03B78B927A9E70C a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackData*, ::Class_1_256D9F63CEA2C6FD*, ::Struct_2_E03B78B927A9E70C))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_20D2EE25D15C1A41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C2DEBF51B6B0C21F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_256D9F63CEA2C6FD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_C2DEBF51B6B0C21F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E61B723F9C6B7CFD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_256D9F63CEA2C6FD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_E61B723F9C6B7CFD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_199CB10F8BF6CEF4(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_256D9F63CEA2C6FD* a3, ::Class_3_5775A4FEC79026BC* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_256D9F63CEA2C6FD*, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_199CB10F8BF6CEF4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_06608D365EA50724(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_256D9F63CEA2C6FD* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_06608D365EA50724_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_87B3FEE9DCD52DFC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::DamageByAttackProperty* a5, ::Class_1_256D9F63CEA2C6FD* a6, ::RPG::GameCore::TaskContext* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_87B3FEE9DCD52DFC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_2_79335F97BF9F9923(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::AttackData* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_79335F97BF9F9923_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_2_7EE311423AAF2EBA(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_7EE311423AAF2EBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_029F0C6DBB8AC745(::RPG::Client::MonoEffect* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_029F0C6DBB8AC745_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F09F3B003393B142(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_F09F3B003393B142_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1792F44D8A28BBA5(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_256D9F63CEA2C6FD* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_256D9F63CEA2C6FD*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_1792F44D8A28BBA5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_C693EE9B34491FF7(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_256D9F63CEA2C6FD* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_METHOD_2_C693EE9B34491FF7_OFFSET))(a1, a2);
	}

	::System::Boolean get_Disposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_GET_DISPOSED_OFFSET))(this);
	}

	::System::Void set_Disposed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_850C234AA2B8A0A3_SET_DISPOSED_OFFSET))(this, value);
	}
};
