#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FateRinExtraSource.h"
#include "unitysdk/RPG/GameCore/FateRinPreCalcPhase.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"
#include "unitysdk/Struct_2_BAFD362D8FC4BA51.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_4.h"
#include "unitysdk/System/Object.h"

class Class_2_545F497870FB4A84;
class Class_2_7EA45D2647F35CDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9142AEEC954ACD89_GET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0x16E704F0)
#define CLASS_1_9142AEEC954ACD89_GET_BASEDAMAGEPCT_OFFSET UNITYSDK_OFFSET(0x16E70570)
#define CLASS_1_9142AEEC954ACD89_GET_BASEDAMAGE_OFFSET UNITYSDK_OFFSET(0x16E70550)
#define CLASS_1_9142AEEC954ACD89_GET_BASEHEALPCT_OFFSET UNITYSDK_OFFSET(0x16E70530)
#define CLASS_1_9142AEEC954ACD89_GET_BASEHEAL_OFFSET UNITYSDK_OFFSET(0x16E70510)
#define CLASS_1_9142AEEC954ACD89_GET_BASESHIELD_OFFSET UNITYSDK_OFFSET(0x16E70590)
#define CLASS_1_9142AEEC954ACD89_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x16E704C0)
#define CLASS_1_9142AEEC954ACD89_GET_PRECALCTASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x16E704E0)
#define CLASS_1_9142AEEC954ACD89_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x16E704D0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_24DB0CE1595FE2D3_OFFSET UNITYSDK_OFFSET(0x16E712B0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_28B4B80C29FB0F1B_OFFSET UNITYSDK_OFFSET(0x16E705B0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_2CE02CA00D75BA32_OFFSET UNITYSDK_OFFSET(0x16E71760)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_325888F29AD57E1B_OFFSET UNITYSDK_OFFSET(0x16E72040)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_36CD3EA5F63BB6E2_OFFSET UNITYSDK_OFFSET(0x16E70A90)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_39F0DE2A1348DBFF_OFFSET UNITYSDK_OFFSET(0x16E70810)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_4015FDE23F37E665_1_OFFSET UNITYSDK_OFFSET(0x16E72560)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_4015FDE23F37E665_OFFSET UNITYSDK_OFFSET(0x16E72330)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_474FC179B376E2F9_OFFSET UNITYSDK_OFFSET(0x16E70F10)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_534FA337054CA657_OFFSET UNITYSDK_OFFSET(0x16E72150)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_9087AD74B4CB9BFD_OFFSET UNITYSDK_OFFSET(0x16E713A0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_AB71CB6A7FDDA465_OFFSET UNITYSDK_OFFSET(0x16E71E20)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_B2C13E0490FF5A9A_OFFSET UNITYSDK_OFFSET(0x16E70770)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_C236E732AB1EC1E4_OFFSET UNITYSDK_OFFSET(0x16E710E0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E71DD0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_CE922FA16F8C5A82_OFFSET UNITYSDK_OFFSET(0x16E72A80)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_DB6114EA5E195AD2_OFFSET UNITYSDK_OFFSET(0x16E70BE0)
#define CLASS_1_9142AEEC954ACD89_METHOD_1_F7268CF03A5BC199_OFFSET UNITYSDK_OFFSET(0x16E72780)
#define CLASS_1_9142AEEC954ACD89_SET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0x16E70500)
#define CLASS_1_9142AEEC954ACD89_SET_BASEDAMAGEPCT_OFFSET UNITYSDK_OFFSET(0x16E70580)
#define CLASS_1_9142AEEC954ACD89_SET_BASEDAMAGE_OFFSET UNITYSDK_OFFSET(0x16E70560)
#define CLASS_1_9142AEEC954ACD89_SET_BASEHEALPCT_OFFSET UNITYSDK_OFFSET(0x16E70540)
#define CLASS_1_9142AEEC954ACD89_SET_BASEHEAL_OFFSET UNITYSDK_OFFSET(0x16E70520)
#define CLASS_1_9142AEEC954ACD89_SET_BASESHIELD_OFFSET UNITYSDK_OFFSET(0x16E705A0)
#define CLASS_1_9142AEEC954ACD89__CTOR_OFFSET UNITYSDK_OFFSET(0x16E702B0)

inline static constexpr unsigned int Class_1_9142AEEC954ACD89_TypeDefinitionIndex = 53444;

class Class_1_9142AEEC954ACD89 : public ::System::Object
{
public:
	::Class_2_545F497870FB4A84* _BaseConfig_k__BackingField; // 0x10
	::Class_2_7EA45D2647F35CDD* _SubMode_k__BackingField; // 0x18
	::RPG::GameCore::TaskContext* _PreCalcTaskContext_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x28
	::Il2CppArray<::System::Collections::Generic::List_1<::Struct_2_BAFD362D8FC4BA51>*>* Field_1_4; // 0x30
	::RPG::GameCore::FixPoint _BaseDamagePct_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _BaseShield_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _BaseHealPct_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _BaseDamage_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint Field_1_9; // 0x58
	::RPG::GameCore::FixPoint Field_1_10; // 0x60
	::RPG::GameCore::FixPoint Field_1_11; // 0x68
	::RPG::GameCore::FixPoint Field_1_12; // 0x70
	::RPG::GameCore::FixPoint Field_1_13; // 0x78
	::RPG::GameCore::FixPoint Field_1_14; // 0x80
	::System::Boolean Field_1_15; // 0x88
	::System::Boolean Field_1_16; // 0x89
	::RPG::GameCore::FixPoint _BaseHeal_k__BackingField; // 0x90

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Class_2_7EA45D2647F35CDD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_2_7EA45D2647F35CDD*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_ENTITY_OFFSET))(this);
	}

	::Class_2_7EA45D2647F35CDD* get_SubMode()
	{
		return ((::Class_2_7EA45D2647F35CDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_SUBMODE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_PreCalcTaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_PRECALCTASKCONTEXT_OFFSET))(this);
	}

	::Class_2_545F497870FB4A84* get_BaseConfig()
	{
		return ((::Class_2_545F497870FB4A84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_BASECONFIG_OFFSET))(this);
	}

	::System::Void set_BaseConfig(::Class_2_545F497870FB4A84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_545F497870FB4A84*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_SET_BASECONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BaseHeal()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_BASEHEAL_OFFSET))(this);
	}

	::System::Void set_BaseHeal(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_SET_BASEHEAL_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BaseHealPct()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_BASEHEALPCT_OFFSET))(this);
	}

	::System::Void set_BaseHealPct(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_SET_BASEHEALPCT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BaseDamage()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_BASEDAMAGE_OFFSET))(this);
	}

	::System::Void set_BaseDamage(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_SET_BASEDAMAGE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BaseDamagePct()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_BASEDAMAGEPCT_OFFSET))(this);
	}

	::System::Void set_BaseDamagePct(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_SET_BASEDAMAGEPCT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BaseShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_GET_BASESHIELD_OFFSET))(this);
	}

	::System::Void set_BaseShield(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_SET_BASESHIELD_OFFSET))(this, a1);
	}

	::System::Void Method_1_28B4B80C29FB0F1B(::Class_2_545F497870FB4A84* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_545F497870FB4A84*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_28B4B80C29FB0F1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2C13E0490FF5A9A(::RPG::GameCore::FateRinExtraSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinExtraSource))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_B2C13E0490FF5A9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_39F0DE2A1348DBFF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_39F0DE2A1348DBFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_36CD3EA5F63BB6E2(::RPG::GameCore::FateRinExtraSource a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinExtraSource, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_36CD3EA5F63BB6E2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Struct_2_BAFD362D8FC4BA51 Method_1_DB6114EA5E195AD2(::RPG::GameCore::FateRinExtraSource a1)
	{
		return ((::Struct_2_BAFD362D8FC4BA51(*)(::PVOID, ::RPG::GameCore::FateRinExtraSource))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_DB6114EA5E195AD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_474FC179B376E2F9(::RPG::GameCore::FateRinPreCalcPhase a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPreCalcPhase, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_474FC179B376E2F9_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_E03B78B927A9E70C_4 Method_1_AB71CB6A7FDDA465(::System::Boolean a1)
	{
		return ((::Struct_2_E03B78B927A9E70C_4(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_AB71CB6A7FDDA465_OFFSET))(this, a1);
	}

	::System::Void Method_1_C236E732AB1EC1E4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_C236E732AB1EC1E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_24DB0CE1595FE2D3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_24DB0CE1595FE2D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4015FDE23F37E665(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_4015FDE23F37E665_OFFSET))(this, a1);
	}

	::System::Void Method_1_4015FDE23F37E665_1(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_4015FDE23F37E665_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9087AD74B4CB9BFD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_9087AD74B4CB9BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE922FA16F8C5A82(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_CE922FA16F8C5A82_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CE02CA00D75BA32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_2CE02CA00D75BA32_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_1_F7268CF03A5BC199(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::AttackFormulaType a5, ::RPG::GameCore::FinalDamageFormulaType a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackFormulaType, ::RPG::GameCore::FinalDamageFormulaType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_F7268CF03A5BC199_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::RPG::GameCore::FixPoint Method_1_325888F29AD57E1B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::HealFormulaType a5)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::HealFormulaType))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_325888F29AD57E1B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::FixPoint Method_1_534FA337054CA657(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::ShieldFormulaType a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ShieldFormulaType))((::PBYTE)hIl2Cpp + CLASS_1_9142AEEC954ACD89_METHOD_1_534FA337054CA657_OFFSET))(a1, a2, a3, a4);
	}
};
