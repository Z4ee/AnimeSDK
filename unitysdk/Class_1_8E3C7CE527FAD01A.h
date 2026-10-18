#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/RPG/GameCore/StageMonsterInvasionParamType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/Struct_2_7FA0A7029F37B727.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_547;
class Class_1_4EA1942B65BA5BD4;
class Class_1_6EDF1562E8B73DA4;
class Class_2_AC65A8C362F818F7;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageInvasionBuffRow; }
namespace RPG::GameCore { class StageInvasionRogueMonsterRow; }
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }
namespace RPG::GameCore { class StatisticsComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xB5D24A0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0xB5D2990)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_0F2E97B4A56C8EB3_OFFSET UNITYSDK_OFFSET(0xB5D2100)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_124E416C70F19FF7_OFFSET UNITYSDK_OFFSET(0xB5D1CB0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_1C6AE756A85545EC_OFFSET UNITYSDK_OFFSET(0xB5D3AC0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xB5D1D30)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_267A0BF471A986CA_OFFSET UNITYSDK_OFFSET(0xB5D3C90)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_27B00EC03E4C55AE_OFFSET UNITYSDK_OFFSET(0xB5D2020)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_27FB90702A0EB0B7_OFFSET UNITYSDK_OFFSET(0xB5D1F00)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_35594C5E6670CE11_OFFSET UNITYSDK_OFFSET(0xB5D2200)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_376E493B62EC0CAE_OFFSET UNITYSDK_OFFSET(0xB5D3900)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xB5D1E60)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_41ACF4F4695791DB_OFFSET UNITYSDK_OFFSET(0xB5D35B0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_41C0EF1B2E895C3D_OFFSET UNITYSDK_OFFSET(0xB5D3350)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB5D3520)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_5E1FBA3144D5777D_OFFSET UNITYSDK_OFFSET(0xB5D2B20)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_5FE50B1077156C0F_OFFSET UNITYSDK_OFFSET(0xB5D2D00)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_6321E2D55840E1ED_OFFSET UNITYSDK_OFFSET(0xB5D2DB0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_674E48DE680F37EE_OFFSET UNITYSDK_OFFSET(0xB5D2430)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_86D55F79EA296C22_OFFSET UNITYSDK_OFFSET(0xB5D2BF0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_878EA953B73E6E80_OFFSET UNITYSDK_OFFSET(0xB5D3190)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_8E7E4D966A3D3048_OFFSET UNITYSDK_OFFSET(0xB5D3CA0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0xB5D2B90)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_99D5CA958F67E07B_OFFSET UNITYSDK_OFFSET(0xB5D36C0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_A256783BB3FB254A_OFFSET UNITYSDK_OFFSET(0xB5D29F0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB5D3140)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_BC7552B0069606ED_OFFSET UNITYSDK_OFFSET(0xB5D32C0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_C980F30C1DA81B6D_OFFSET UNITYSDK_OFFSET(0xB5D1C00)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_E30A0CB4AE5808EA_OFFSET UNITYSDK_OFFSET(0xB5D3980)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_E6845D8661E7D6CC_OFFSET UNITYSDK_OFFSET(0xB5D3220)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_E83BE5DF9039F827_OFFSET UNITYSDK_OFFSET(0xB5D22C0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0xB5D37D0)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB5D3C80)
#define CLASS_1_8E3C7CE527FAD01A_METHOD_1_F5076032827274CE_OFFSET UNITYSDK_OFFSET(0xB5D3BF0)
#define CLASS_1_8E3C7CE527FAD01A__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D1870)

inline static constexpr unsigned int Class_1_8E3C7CE527FAD01A_TypeDefinitionIndex = 56177;

class Class_1_8E3C7CE527FAD01A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6EDF1562E8B73DA4*>* MINMNJGAGOM; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* DONPAEODKCC; // 0x18
	::RPG::GameCore::StatisticsComponent* BCBGNBGMBAL; // 0x20
	::Il2CppArray<::System::Int32>* HHCJCOEAGGI; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DLKBMJMOMEB; // 0x30
	::RPG::GameCore::StageInvasionBuffRow* HAENOCFNAMF; // 0x38
	::System::Collections::BitArray* PIJBEDOOEGF; // 0x40
	::Il2CppArray<::Class_1_4EA1942B65BA5BD4*>* OCAMDFDEFMJ; // 0x48
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x50
	::RPG::GameCore::StageType DPGFBAIAIFO; // 0x58
	::System::Boolean HOACEHGKIKI; // 0x5C
	::System::Int32 JJBGALIHHAG; // 0x60

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_124E416C70F19FF7(::RPG::GameCore::BattleLineupData* a1, ::RPG::GameCore::StageType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_124E416C70F19FF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::RPG::GameCore::GridFightPenaltyRuleConfigRow* Method_1_0F2E97B4A56C8EB3(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
	{
		return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::PVOID, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_0F2E97B4A56C8EB3_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::GridFightPenaltyRuleConfigRow* Method_1_35594C5E6670CE11(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
	{
		return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_35594C5E6670CE11_OFFSET))(a1);
	}

	::System::Void Method_1_27FB90702A0EB0B7(::RPG::GameCore::BattleLineupData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_27FB90702A0EB0B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_27B00EC03E4C55AE(::RPG::GameCore::BattleLineupData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_27B00EC03E4C55AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_674E48DE680F37EE(::Il2CppArray<::Class_1_4EA1942B65BA5BD4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_4EA1942B65BA5BD4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_674E48DE680F37EE_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::StageInvasionRogueMonsterRow* Method_1_E83BE5DF9039F827(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::StageInvasionRogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_E83BE5DF9039F827_OFFSET))(a1);
	}

	::System::Void Method_1_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_0960CAEE01038065_OFFSET))(this);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_5E1FBA3144D5777D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_99A5531F4A7DF520(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_99A5531F4A7DF520_OFFSET))(this, a1);
	}

	::System::Void Method_1_86D55F79EA296C22(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageInvasionMonsterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageInvasionMonsterState))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_86D55F79EA296C22_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5FE50B1077156C0F(::System::UInt32 a1, ::RPG::GameCore::StageInvasionMonsterUIData& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageInvasionMonsterUIData&))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_5FE50B1077156C0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6321E2D55840E1ED(::System::UInt32 a1, ::Class_2_AC65A8C362F818F7* a2, ::Struct_2_7FA0A7029F37B727& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_AC65A8C362F818F7*, ::Struct_2_7FA0A7029F37B727&))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_6321E2D55840E1ED_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_878EA953B73E6E80(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageMonsterInvasionParamType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageMonsterInvasionParamType))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_878EA953B73E6E80_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::StageMonsterInvasionParamRow* Method_1_E6845D8661E7D6CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::StageMonsterInvasionParamRow*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_E6845D8661E7D6CC_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::StageMonsterInvasionParamRow* Method_1_BC7552B0069606ED(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::StageMonsterInvasionParamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_BC7552B0069606ED_OFFSET))(a1, a2);
	}

	::System::Void Method_1_41C0EF1B2E895C3D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_41C0EF1B2E895C3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_A256783BB3FB254A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_A256783BB3FB254A_OFFSET))(this);
	}

	static ::System::Boolean Method_1_C980F30C1DA81B6D(::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_C980F30C1DA81B6D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_41ACF4F4695791DB(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_41ACF4F4695791DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_376E493B62EC0CAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_376E493B62EC0CAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_EA9B142E5A847C05_OFFSET))(this, a1);
	}

	::System::Void Method_1_E30A0CB4AE5808EA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_E30A0CB4AE5808EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D5CA958F67E07B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_99D5CA958F67E07B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5076032827274CE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_F5076032827274CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C6AE756A85545EC(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_1C6AE756A85545EC_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::StageInvasionBuffRow* Method_1_267A0BF471A986CA()
	{
		return ((::RPG::GameCore::StageInvasionBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_267A0BF471A986CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_8E7E4D966A3D3048()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E3C7CE527FAD01A_METHOD_1_8E7E4D966A3D3048_OFFSET))(this);
	}
};
