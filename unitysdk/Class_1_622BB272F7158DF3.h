#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityExtraProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/Struct_2_B57FD4EDC70CAC4C.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C.h"
#include "unitysdk/Struct_2_E1E5158E6D285224.h"
#include "unitysdk/System/Object.h"

class Class_1_09994FA7935E2E36;
class Class_1_43B0AF86156D9901;
class Class_1_43BD383C98B4C0C5_128;
class Class_1_70CCABA9DB985F52;
class Class_1_F966CC1261619DFB;
class Class_2_291F7DA21A504FC4;
class Class_2_F3B643C4D5BD11F2;
class Class_3_3184742B87D05B9A;
class Class_3_AC77597D4FE9B922;
class Class_3_BB8B7764D3497776;
class Class_3_C22B3EED69F1AB77;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_622BB272F7158DF3_METHOD_1_048A2D907400EAB5_OFFSET UNITYSDK_OFFSET(0xC055120)
#define CLASS_1_622BB272F7158DF3_METHOD_1_05E08AC0DC749D20_OFFSET UNITYSDK_OFFSET(0xC054B30)
#define CLASS_1_622BB272F7158DF3_METHOD_1_09F426CAF820F26D_OFFSET UNITYSDK_OFFSET(0xC0588A0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_10F6840B281523CD_OFFSET UNITYSDK_OFFSET(0xC049080)
#define CLASS_1_622BB272F7158DF3_METHOD_1_1144B1401066F478_OFFSET UNITYSDK_OFFSET(0xC050EC0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_1263B3123F5802DD_OFFSET UNITYSDK_OFFSET(0xC048B30)
#define CLASS_1_622BB272F7158DF3_METHOD_1_18E1AF9A11DFCE75_OFFSET UNITYSDK_OFFSET(0xC056AC0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_1C44531D4D8B5F81_OFFSET UNITYSDK_OFFSET(0xC056A70)
#define CLASS_1_622BB272F7158DF3_METHOD_1_1F60BBFE32614795_OFFSET UNITYSDK_OFFSET(0xC04A310)
#define CLASS_1_622BB272F7158DF3_METHOD_1_22862E9D4344C9DC_OFFSET UNITYSDK_OFFSET(0xC04D230)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2735B127A28991E6_1_OFFSET UNITYSDK_OFFSET(0xC054520)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2735B127A28991E6_OFFSET UNITYSDK_OFFSET(0xC0543F0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_1_OFFSET UNITYSDK_OFFSET(0xC0496E0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_2_OFFSET UNITYSDK_OFFSET(0xC049810)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_3_OFFSET UNITYSDK_OFFSET(0xC049940)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_4_OFFSET UNITYSDK_OFFSET(0xC049A70)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_5_OFFSET UNITYSDK_OFFSET(0xC058410)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_OFFSET UNITYSDK_OFFSET(0xC0495B0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2CD6288639813257_OFFSET UNITYSDK_OFFSET(0xC04E790)
#define CLASS_1_622BB272F7158DF3_METHOD_1_2F5DFEDA6B325E1C_OFFSET UNITYSDK_OFFSET(0xC058250)
#define CLASS_1_622BB272F7158DF3_METHOD_1_36D03C03A81129BC_OFFSET UNITYSDK_OFFSET(0xC04E980)
#define CLASS_1_622BB272F7158DF3_METHOD_1_3E06E3797F2BEA84_1_OFFSET UNITYSDK_OFFSET(0xC055F80)
#define CLASS_1_622BB272F7158DF3_METHOD_1_3E06E3797F2BEA84_OFFSET UNITYSDK_OFFSET(0xC055D00)
#define CLASS_1_622BB272F7158DF3_METHOD_1_4201A5688372FF1D_OFFSET UNITYSDK_OFFSET(0xC048D50)
#define CLASS_1_622BB272F7158DF3_METHOD_1_427521AC6B9AD06E_OFFSET UNITYSDK_OFFSET(0xC0491A0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_445408D16791EC3B_OFFSET UNITYSDK_OFFSET(0xC054A70)
#define CLASS_1_622BB272F7158DF3_METHOD_1_4779E64912A50873_OFFSET UNITYSDK_OFFSET(0xC04D070)
#define CLASS_1_622BB272F7158DF3_METHOD_1_4CBC65E3D904511D_OFFSET UNITYSDK_OFFSET(0xC056DF0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_50D14C0466C96D73_OFFSET UNITYSDK_OFFSET(0xC050390)
#define CLASS_1_622BB272F7158DF3_METHOD_1_54986CE1ABF6DB46_OFFSET UNITYSDK_OFFSET(0xC056B90)
#define CLASS_1_622BB272F7158DF3_METHOD_1_5698142C80195850_OFFSET UNITYSDK_OFFSET(0xC04F540)
#define CLASS_1_622BB272F7158DF3_METHOD_1_57034583BCE2305D_OFFSET UNITYSDK_OFFSET(0xC0494C0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_5C465E17D6483459_OFFSET UNITYSDK_OFFSET(0xC056200)
#define CLASS_1_622BB272F7158DF3_METHOD_1_5EC5E0A7A2606816_OFFSET UNITYSDK_OFFSET(0xC04F910)
#define CLASS_1_622BB272F7158DF3_METHOD_1_5FD3A4BF0C3603E6_OFFSET UNITYSDK_OFFSET(0xC051270)
#define CLASS_1_622BB272F7158DF3_METHOD_1_5FD44241AE29C328_OFFSET UNITYSDK_OFFSET(0xC0528A0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_650D7BE71179F24B_OFFSET UNITYSDK_OFFSET(0xC049EC0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_65B378624FF5673B_OFFSET UNITYSDK_OFFSET(0xC049520)
#define CLASS_1_622BB272F7158DF3_METHOD_1_725A95A64C1804C5_OFFSET UNITYSDK_OFFSET(0xC04D180)
#define CLASS_1_622BB272F7158DF3_METHOD_1_7F1E36E3DA9BDF9B_OFFSET UNITYSDK_OFFSET(0xC0551B0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_8160F73B7F579E4C_OFFSET UNITYSDK_OFFSET(0xC054650)
#define CLASS_1_622BB272F7158DF3_METHOD_1_8669729BE172AF96_OFFSET UNITYSDK_OFFSET(0xC050E60)
#define CLASS_1_622BB272F7158DF3_METHOD_1_8D2A4AEF1EE3E1CD_OFFSET UNITYSDK_OFFSET(0xC056B40)
#define CLASS_1_622BB272F7158DF3_METHOD_1_932EDD5FC683277B_OFFSET UNITYSDK_OFFSET(0xC049BA0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_9500B53DE5A00E59_OFFSET UNITYSDK_OFFSET(0xC0548E0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_A0633B041221F559_OFFSET UNITYSDK_OFFSET(0xC049230)
#define CLASS_1_622BB272F7158DF3_METHOD_1_A2454A4781396FED_OFFSET UNITYSDK_OFFSET(0xC0553D0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_A2DE7561CE71F368_OFFSET UNITYSDK_OFFSET(0xC0517A0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_A7911E1328639C77_OFFSET UNITYSDK_OFFSET(0xC048ED0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B018DC0EE1E16299_OFFSET UNITYSDK_OFFSET(0xC048C30)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B6E6A6E26E0DA98A_1_OFFSET UNITYSDK_OFFSET(0xC054E30)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B6E6A6E26E0DA98A_2_OFFSET UNITYSDK_OFFSET(0xC052240)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B6E6A6E26E0DA98A_OFFSET UNITYSDK_OFFSET(0xC055A10)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B731978DB078C8C8_OFFSET UNITYSDK_OFFSET(0xC04F840)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B7582D1B6A42093C_OFFSET UNITYSDK_OFFSET(0xC049440)
#define CLASS_1_622BB272F7158DF3_METHOD_1_B856F3E5393A749C_OFFSET UNITYSDK_OFFSET(0xC052B50)
#define CLASS_1_622BB272F7158DF3_METHOD_1_C021F5E515B935E9_OFFSET UNITYSDK_OFFSET(0xC056D80)
#define CLASS_1_622BB272F7158DF3_METHOD_1_C4A4326DA4C042C6_OFFSET UNITYSDK_OFFSET(0xC04F7C0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_C63863CE30F75BE3_OFFSET UNITYSDK_OFFSET(0xC055260)
#define CLASS_1_622BB272F7158DF3_METHOD_1_C87E353614BACBEF_1_OFFSET UNITYSDK_OFFSET(0xC058540)
#define CLASS_1_622BB272F7158DF3_METHOD_1_C87E353614BACBEF_OFFSET UNITYSDK_OFFSET(0xC057EF0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_C890576EF570960F_OFFSET UNITYSDK_OFFSET(0xC0509F0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_CB5BDAD451B68A96_1_OFFSET UNITYSDK_OFFSET(0xC0569B0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_CB5BDAD451B68A96_OFFSET UNITYSDK_OFFSET(0xC056A10)
#define CLASS_1_622BB272F7158DF3_METHOD_1_D6BB98944AF4EE67_1_OFFSET UNITYSDK_OFFSET(0xC052530)
#define CLASS_1_622BB272F7158DF3_METHOD_1_D6BB98944AF4EE67_OFFSET UNITYSDK_OFFSET(0xC0556A0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_D98D2C67BEEB1556_OFFSET UNITYSDK_OFFSET(0xC048BC0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_E257D56A6590325C_OFFSET UNITYSDK_OFFSET(0xC051BD0)
#define CLASS_1_622BB272F7158DF3_METHOD_1_EE43EC6BD4B1164B_OFFSET UNITYSDK_OFFSET(0xC051B20)
#define CLASS_1_622BB272F7158DF3_METHOD_1_F2B6B817688B5CAF_OFFSET UNITYSDK_OFFSET(0xC051B70)
#define CLASS_1_622BB272F7158DF3__CCTOR_OFFSET UNITYSDK_OFFSET(0xC058930)

inline static constexpr unsigned int Class_1_622BB272F7158DF3_TypeDefinitionIndex = 54061;

class Class_1_622BB272F7158DF3 : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_FAILMDMKLAP()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_622BB272F7158DF3_TypeDefinitionIndex)->GetStaticField(0xBC40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::GameEntity* Method_1_1263B3123F5802DD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_1263B3123F5802DD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D98D2C67BEEB1556(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_D98D2C67BEEB1556_OFFSET))(a1);
	}

	static ::RPG::GameCore::DamageBlockType Method_1_B018DC0EE1E16299(::Class_1_70CCABA9DB985F52* a1, ::Class_3_BB8B7764D3497776* a2)
	{
		return ((::RPG::GameCore::DamageBlockType(*)(::Class_1_70CCABA9DB985F52*, ::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B018DC0EE1E16299_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_4201A5688372FF1D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_4201A5688372FF1D_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_A7911E1328639C77(::Class_3_BB8B7764D3497776* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_A7911E1328639C77_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_10F6840B281523CD(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_10F6840B281523CD_OFFSET))(a1);
	}

	static ::RPG::PoolList_1<::RPG::GameCore::AttackType>* Method_1_427521AC6B9AD06E(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::AttackType>*(*)(::Class_3_BB8B7764D3497776*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_427521AC6B9AD06E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A0633B041221F559(::Class_1_70CCABA9DB985F52* a1, ::Class_1_43B0AF86156D9901* a2, ::System::Boolean& a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::Class_1_43B0AF86156D9901*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_A0633B041221F559_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B7582D1B6A42093C(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::DynamicFloat* a2, ::System::String* a3, ::RPG::GameCore::TaskContext* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::DynamicFloat*, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B7582D1B6A42093C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_57034583BCE2305D(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_57034583BCE2305D_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_65B378624FF5673B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_65B378624FF5673B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2A58533C49566012(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2A58533C49566012_1(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2A58533C49566012_2(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2A58533C49566012_3(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2A58533C49566012_4(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_4_OFFSET))(a1, a2);
	}

	static ::Class_1_70CCABA9DB985F52* Method_1_932EDD5FC683277B(::Class_2_F3B643C4D5BD11F2* a1, ::Class_2_291F7DA21A504FC4* a2, ::Class_3_BB8B7764D3497776* a3, ::Class_3_BB8B7764D3497776* a4, ::Class_3_BB8B7764D3497776* a5, ::RPG::GameCore::RtAttackData* a6, ::RPG::GameCore::TaskContext* a7)
	{
		return ((::Class_1_70CCABA9DB985F52*(*)(::Class_2_F3B643C4D5BD11F2*, ::Class_2_291F7DA21A504FC4*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_932EDD5FC683277B_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_1_70CCABA9DB985F52* Method_1_650D7BE71179F24B(::Class_2_F3B643C4D5BD11F2* a1, ::Class_3_BB8B7764D3497776* a2, ::Class_3_BB8B7764D3497776* a3, ::Class_3_BB8B7764D3497776* a4, ::Class_1_F966CC1261619DFB* a5, ::Class_2_291F7DA21A504FC4* a6)
	{
		return ((::Class_1_70CCABA9DB985F52*(*)(::Class_2_F3B643C4D5BD11F2*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::Class_1_F966CC1261619DFB*, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_650D7BE71179F24B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_4779E64912A50873(::Class_1_70CCABA9DB985F52*& a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*&, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_4779E64912A50873_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_725A95A64C1804C5(::Class_1_70CCABA9DB985F52*& a1, ::Class_3_BB8B7764D3497776* a2, ::Class_3_BB8B7764D3497776* a3)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*&, ::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_725A95A64C1804C5_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_22862E9D4344C9DC(::Class_1_70CCABA9DB985F52*& a1, ::Class_1_43B0AF86156D9901* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*&, ::Class_1_43B0AF86156D9901*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_22862E9D4344C9DC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_36D03C03A81129BC(::Class_1_70CCABA9DB985F52* a1, ::Class_1_43B0AF86156D9901* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint& a4, ::RPG::GameCore::FixPoint& a5)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*, ::Class_1_43B0AF86156D9901*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_36D03C03A81129BC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::FixPoint Method_1_5698142C80195850(::Class_3_BB8B7764D3497776* a1, ::Class_3_BB8B7764D3497776* a2, ::RPG::GameCore::FixPoint a3, ::Class_1_43B0AF86156D9901* a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::FixPoint, ::Class_1_43B0AF86156D9901*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_5698142C80195850_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_2CD6288639813257(::Class_1_70CCABA9DB985F52* a1, ::Class_1_43B0AF86156D9901* a2)
	{
		return ((::System::Boolean(*)(::Class_1_70CCABA9DB985F52*, ::Class_1_43B0AF86156D9901*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2CD6288639813257_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B731978DB078C8C8(::Class_1_70CCABA9DB985F52*& a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B731978DB078C8C8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_50D14C0466C96D73(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint& a3, ::Class_1_70CCABA9DB985F52* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint&, ::Class_1_70CCABA9DB985F52*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_50D14C0466C96D73_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_C890576EF570960F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_C890576EF570960F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_8669729BE172AF96(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_8669729BE172AF96_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1144B1401066F478(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_1144B1401066F478_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5EC5E0A7A2606816(::Class_1_70CCABA9DB985F52*& a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_5EC5E0A7A2606816_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_3A335394524C9E44 Method_1_5FD3A4BF0C3603E6(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::RtAttackData* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::Struct_2_3A335394524C9E44(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_5FD3A4BF0C3603E6_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::GameCore::DamageDisplayData* Method_1_EE43EC6BD4B1164B(::RPG::GameCore::DamageDisplayData* a1, ::RPG::GameCore::DamageDisplayData* a2)
	{
		return ((::RPG::GameCore::DamageDisplayData*(*)(::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::DamageDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_EE43EC6BD4B1164B_OFFSET))(a1, a2);
	}

	static ::RPG::MVector3 Method_1_A2DE7561CE71F368(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_A2DE7561CE71F368_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F2B6B817688B5CAF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_87C8F594A107C13B a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_F2B6B817688B5CAF_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_43BD383C98B4C0C5_128* Method_1_E257D56A6590325C(::Class_3_BB8B7764D3497776* a1, ::Class_3_BB8B7764D3497776* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::HealFormulaType a6, ::System::Boolean a7)
	{
		return ((::Class_1_43BD383C98B4C0C5_128*(*)(::Class_3_BB8B7764D3497776*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::HealFormulaType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_E257D56A6590325C_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::RPG::GameCore::FixPoint Method_1_5FD44241AE29C328(::Class_1_43BD383C98B4C0C5_128* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_43BD383C98B4C0C5_128*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_5FD44241AE29C328_OFFSET))(a1);
	}

	static ::System::Void Method_1_B856F3E5393A749C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Class_3_AC77597D4FE9B922* a3, ::Class_1_70CCABA9DB985F52* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_3_AC77597D4FE9B922*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B856F3E5393A749C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_05E08AC0DC749D20(::RPG::GameCore::TaskContext* a1, ::Class_3_3184742B87D05B9A* a2, ::Class_1_43BD383C98B4C0C5_128* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::Class_3_3184742B87D05B9A*, ::Class_1_43BD383C98B4C0C5_128*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_05E08AC0DC749D20_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2735B127A28991E6(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::DynamicFloat* a2, ::Class_3_BB8B7764D3497776* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::DynamicFloat*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2735B127A28991E6_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_2735B127A28991E6_1(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::DynamicFloat* a2, ::Class_3_BB8B7764D3497776* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::DynamicFloat*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2735B127A28991E6_1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_9500B53DE5A00E59(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::DynamicFloat* a2, ::Class_3_BB8B7764D3497776* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::DynamicFloat*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_9500B53DE5A00E59_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_445408D16791EC3B(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::RtAbilityProperty a3, ::System::String* a4, ::RPG::GameCore::TaskContext* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_445408D16791EC3B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_8160F73B7F579E4C(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::DynamicFloat* a2, ::Class_3_BB8B7764D3497776* a3, ::RPG::GameCore::RtAbilityProperty a4, ::System::String* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint&, ::RPG::GameCore::DynamicFloat*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAbilityProperty, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_8160F73B7F579E4C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_1F60BBFE32614795(::Class_1_70CCABA9DB985F52* a1, ::Class_3_C22B3EED69F1AB77* a2, ::Class_3_C22B3EED69F1AB77* a3, ::Class_3_C22B3EED69F1AB77* a4)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*, ::Class_3_C22B3EED69F1AB77*, ::Class_3_C22B3EED69F1AB77*, ::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_1F60BBFE32614795_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::AbilityExtraProperty Method_1_A2454A4781396FED(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityExtraProperty(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_A2454A4781396FED_OFFSET))(a1);
	}

	static ::Struct_2_B57FD4EDC70CAC4C Method_1_048A2D907400EAB5(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::Struct_2_B57FD4EDC70CAC4C(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_048A2D907400EAB5_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityLinearPropertyWithOverride Method_1_D6BB98944AF4EE67(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityLinearPropertyWithOverride(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_D6BB98944AF4EE67_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityLinearProperty Method_1_B6E6A6E26E0DA98A(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityLinearProperty(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B6E6A6E26E0DA98A_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityLinearProperty Method_1_B6E6A6E26E0DA98A_1(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityLinearProperty(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B6E6A6E26E0DA98A_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityLinearProperty Method_1_B6E6A6E26E0DA98A_2(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityLinearProperty(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_B6E6A6E26E0DA98A_2_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityLinearPropertyWithOverride Method_1_D6BB98944AF4EE67_1(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityLinearPropertyWithOverride(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_D6BB98944AF4EE67_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityExtraProperty Method_1_3E06E3797F2BEA84(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityExtraProperty(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_3E06E3797F2BEA84_OFFSET))(a1);
	}

	static ::RPG::GameCore::AbilityExtraProperty Method_1_3E06E3797F2BEA84_1(::Class_3_C22B3EED69F1AB77* a1)
	{
		return ((::RPG::GameCore::AbilityExtraProperty(*)(::Class_3_C22B3EED69F1AB77*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_3E06E3797F2BEA84_1_OFFSET))(a1);
	}

	static ::Il2CppArray<::Class_1_09994FA7935E2E36*>* Method_1_7F1E36E3DA9BDF9B(::RPG::GameCore::AbilityComponent* a1, ::System::Func_2<::Class_2_291F7DA21A504FC4*, ::System::Boolean>* a2)
	{
		return ((::Il2CppArray<::Class_1_09994FA7935E2E36*>*(*)(::RPG::GameCore::AbilityComponent*, ::System::Func_2<::Class_2_291F7DA21A504FC4*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_7F1E36E3DA9BDF9B_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Class_1_09994FA7935E2E36*>* Method_1_C63863CE30F75BE3(::RPG::GameCore::AbilityComponent* a1, ::System::Func_2<::Class_2_291F7DA21A504FC4*, ::System::Boolean>* a2)
	{
		return ((::Il2CppArray<::Class_1_09994FA7935E2E36*>*(*)(::RPG::GameCore::AbilityComponent*, ::System::Func_2<::Class_2_291F7DA21A504FC4*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_C63863CE30F75BE3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5C465E17D6483459(::RPG::GameCore::GameEntity* a1, ::Class_1_70CCABA9DB985F52* a2, ::RPG::GameCore::FixPoint& a3, ::Struct_2_87C8F594A107C13B a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_5C465E17D6483459_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1C44531D4D8B5F81(::Class_1_70CCABA9DB985F52*& a1, ::Class_3_BB8B7764D3497776* a2)
	{
		return ((::System::Void(*)(::Class_1_70CCABA9DB985F52*&, ::Class_3_BB8B7764D3497776*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_1C44531D4D8B5F81_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_18E1AF9A11DFCE75(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_18E1AF9A11DFCE75_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::FixPoint Method_1_CB5BDAD451B68A96(::Class_3_BB8B7764D3497776* a1, ::Il2CppArray<::Class_1_09994FA7935E2E36*>* a2, ::Struct_2_87C8F594A107C13B a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_3_BB8B7764D3497776*, ::Il2CppArray<::Class_1_09994FA7935E2E36*>*, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_CB5BDAD451B68A96_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8D2A4AEF1EE3E1CD(::Class_3_BB8B7764D3497776* a1, ::Il2CppArray<::Class_1_09994FA7935E2E36*>* a2)
	{
		return ((::System::Void(*)(::Class_3_BB8B7764D3497776*, ::Il2CppArray<::Class_1_09994FA7935E2E36*>*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_8D2A4AEF1EE3E1CD_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_CB5BDAD451B68A96_1(::Class_3_BB8B7764D3497776* a1, ::Il2CppArray<::Class_1_09994FA7935E2E36*>* a2, ::Struct_2_87C8F594A107C13B a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_3_BB8B7764D3497776*, ::Il2CppArray<::Class_1_09994FA7935E2E36*>*, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_CB5BDAD451B68A96_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C4A4326DA4C042C6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::AttackDamageType a3, ::System::Collections::Generic::List_1<::Class_1_09994FA7935E2E36*>* a4, ::RPG::GameCore::FixPoint& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::AttackDamageType, ::System::Collections::Generic::List_1<::Class_1_09994FA7935E2E36*>*, ::RPG::GameCore::FixPoint&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_C4A4326DA4C042C6_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_54986CE1ABF6DB46(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::RtAttackData* a2, ::Class_3_BB8B7764D3497776* a3, ::RPG::GameCore::TaskContext* a4, ::Class_1_70CCABA9DB985F52* a5, ::System::Boolean a6, ::RPG::GameCore::FixPoint& a7, ::RPG::GameCore::FixPoint& a8, ::RPG::GameCore::FixPoint& a9)
	{
		return ((::System::Void(*)(::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAttackData*, ::Class_3_BB8B7764D3497776*, ::RPG::GameCore::TaskContext*, ::Class_1_70CCABA9DB985F52*, ::System::Boolean, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_54986CE1ABF6DB46_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_C021F5E515B935E9(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::RtAttackData* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::Class_3_BB8B7764D3497776*, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_C021F5E515B935E9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4CBC65E3D904511D(::Struct_2_E1E5158E6D285224& a1, ::Struct_2_E03B78B927A9E70C& a2)
	{
		return ((::System::Void(*)(::Struct_2_E1E5158E6D285224&, ::Struct_2_E03B78B927A9E70C&))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_4CBC65E3D904511D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_09F426CAF820F26D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::RtAttackData* a3, ::System::Boolean a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::AttackDamageType a8)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_09F426CAF820F26D_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::RPG::GameCore::RtAbilityProperty Method_1_C87E353614BACBEF(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::RPG::GameCore::RtAbilityProperty(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_C87E353614BACBEF_OFFSET))(a1);
	}

	static ::RPG::GameCore::RtAbilityProperty Method_1_C87E353614BACBEF_1(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::RPG::GameCore::RtAbilityProperty(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_C87E353614BACBEF_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_2F5DFEDA6B325E1C(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2F5DFEDA6B325E1C_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_2A58533C49566012_5(::Class_1_70CCABA9DB985F52* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_622BB272F7158DF3_METHOD_1_2A58533C49566012_5_OFFSET))(a1, a2);
	}
};
