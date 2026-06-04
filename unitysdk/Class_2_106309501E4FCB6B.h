#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_1.h"

class Class_1_6A0C51CBDC1DAB09;
class Class_1_827373C1CEDFE355;
class Class_1_843DD6330B22E422;
class Class_1_C4B000B71ED01017_1;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_106309501E4FCB6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEF9A40)
#define CLASS_2_106309501E4FCB6B_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xAF01830)
#define CLASS_2_106309501E4FCB6B_METHOD_2_029F0C6DBB8AC745_OFFSET UNITYSDK_OFFSET(0xAF01600)
#define CLASS_2_106309501E4FCB6B_METHOD_2_04A95A05F6D6788B_OFFSET UNITYSDK_OFFSET(0xAEFDEA0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_1792F44D8A28BBA5_OFFSET UNITYSDK_OFFSET(0xAEFFA00)
#define CLASS_2_106309501E4FCB6B_METHOD_2_20D2EE25D15C1A41_OFFSET UNITYSDK_OFFSET(0xAEFF8B0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_229C83571AFBD054_OFFSET UNITYSDK_OFFSET(0xAEFB2A0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_29EF15CD94593AAE_OFFSET UNITYSDK_OFFSET(0xAEFC160)
#define CLASS_2_106309501E4FCB6B_METHOD_2_4217C63A4BECCEF7_OFFSET UNITYSDK_OFFSET(0xAEFC970)
#define CLASS_2_106309501E4FCB6B_METHOD_2_4F4AFFC911B3D4AA_OFFSET UNITYSDK_OFFSET(0xAEFCDB0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_5003086EDF739650_OFFSET UNITYSDK_OFFSET(0xAF01450)
#define CLASS_2_106309501E4FCB6B_METHOD_2_53BD888AED7AAE33_OFFSET UNITYSDK_OFFSET(0xAEFB4B0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_53D01BC7BE0C0CAC_OFFSET UNITYSDK_OFFSET(0xAEF9BB0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_633F22B7479FD2DA_OFFSET UNITYSDK_OFFSET(0xAEFC7E0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_7D99291CD1BE5ACE_OFFSET UNITYSDK_OFFSET(0xAEFFD50)
#define CLASS_2_106309501E4FCB6B_METHOD_2_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0xAEF9E30)
#define CLASS_2_106309501E4FCB6B_METHOD_2_95F3887CCA36A24C_OFFSET UNITYSDK_OFFSET(0xAEFC210)
#define CLASS_2_106309501E4FCB6B_METHOD_2_98BFACC389297C71_OFFSET UNITYSDK_OFFSET(0xAF002F0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_9B2468B630F1BF9B_OFFSET UNITYSDK_OFFSET(0xAEFFB80)
#define CLASS_2_106309501E4FCB6B_METHOD_2_B6066EDABA9658FF_1_OFFSET UNITYSDK_OFFSET(0xAEFCBE0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_B6066EDABA9658FF_OFFSET UNITYSDK_OFFSET(0xAEFCA10)
#define CLASS_2_106309501E4FCB6B_METHOD_2_C2DEBF51B6B0C21F_OFFSET UNITYSDK_OFFSET(0xAEFCFF0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_D0F1194C915827B4_OFFSET UNITYSDK_OFFSET(0xAEFE5C0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_DBF3FC8D2E94CE92_OFFSET UNITYSDK_OFFSET(0xAEFD7B0)
#define CLASS_2_106309501E4FCB6B_METHOD_2_E61B723F9C6B7CFD_OFFSET UNITYSDK_OFFSET(0xAEFD400)
#define CLASS_2_106309501E4FCB6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAEF9F60)
#define CLASS_2_106309501E4FCB6B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAEFC730)
#define CLASS_2_106309501E4FCB6B_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xAF01840)
#define CLASS_2_106309501E4FCB6B_TICK_OFFSET UNITYSDK_OFFSET(0xAEFC780)
#define CLASS_2_106309501E4FCB6B__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF9980)

inline static constexpr unsigned int Class_2_106309501E4FCB6B_TypeDefinitionIndex = 51382;

class Class_2_106309501E4FCB6B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DamageByAttackProperty* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6A0C51CBDC1DAB09*>* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_1_827373C1CEDFE355* Field_2_4; // 0x38
	::System::Boolean _Disposed_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_DISPOSE_OFFSET))(this);
	}

	::Class_1_6A0C51CBDC1DAB09* Method_2_53D01BC7BE0C0CAC()
	{
		return ((::Class_1_6A0C51CBDC1DAB09*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_53D01BC7BE0C0CAC_OFFSET))(this);
	}

	::System::Void Method_2_8E22B572EA9F050D(::Class_1_6A0C51CBDC1DAB09* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A0C51CBDC1DAB09*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_95F3887CCA36A24C(::System::Boolean& a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_95F3887CCA36A24C_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_TICK_OFFSET))(this, a1);
	}

	::Class_1_843DD6330B22E422* Method_2_633F22B7479FD2DA(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::Class_1_843DD6330B22E422*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_633F22B7479FD2DA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4217C63A4BECCEF7(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_4217C63A4BECCEF7_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_2_29EF15CD94593AAE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_29EF15CD94593AAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_53BD888AED7AAE33(::Class_1_C4B000B71ED01017_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4B000B71ED01017_1*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_53BD888AED7AAE33_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6066EDABA9658FF(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_B6066EDABA9658FF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B6066EDABA9658FF_1(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_B6066EDABA9658FF_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4F4AFFC911B3D4AA(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::TurnBasedAbilityComponent* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_4F4AFFC911B3D4AA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_2_D0F1194C915827B4(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2, ::Class_1_843DD6330B22E422* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::Class_3_07C3C4D2990C49EE* a10)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_D0F1194C915827B4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_2_20D2EE25D15C1A41(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::AttackData* a4, ::Class_1_843DD6330B22E422* a5, ::Struct_2_E03B78B927A9E70C_1 a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackData*, ::Class_1_843DD6330B22E422*, ::Struct_2_E03B78B927A9E70C_1))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_20D2EE25D15C1A41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C2DEBF51B6B0C21F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_C2DEBF51B6B0C21F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E61B723F9C6B7CFD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_E61B723F9C6B7CFD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_04A95A05F6D6788B(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3, ::Class_3_07C3C4D2990C49EE* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_04A95A05F6D6788B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_7D99291CD1BE5ACE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_7D99291CD1BE5ACE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DBF3FC8D2E94CE92(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::DamageByAttackProperty* a5, ::Class_1_843DD6330B22E422* a6, ::RPG::GameCore::TaskContext* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_DBF3FC8D2E94CE92_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_2_98BFACC389297C71(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::AttackData* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_98BFACC389297C71_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_2_5003086EDF739650(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_5003086EDF739650_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_029F0C6DBB8AC745(::RPG::Client::MonoEffect* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_029F0C6DBB8AC745_OFFSET))(a1, a2);
	}

	::System::Void Method_2_229C83571AFBD054(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_229C83571AFBD054_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1792F44D8A28BBA5(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_1792F44D8A28BBA5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_9B2468B630F1BF9B(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_METHOD_2_9B2468B630F1BF9B_OFFSET))(a1, a2);
	}

	::System::Boolean get_Disposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_GET_DISPOSED_OFFSET))(this);
	}

	::System::Void set_Disposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_106309501E4FCB6B_SET_DISPOSED_OFFSET))(this, a1);
	}
};
