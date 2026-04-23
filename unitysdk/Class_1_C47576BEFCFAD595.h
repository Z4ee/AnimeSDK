#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3.h"
#include "unitysdk/Class_2_6909BB516E50EA23_EPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1BD9A352EF1010C8;
class Class_1_843EA87CD32A873D;
class Class_1_934E35F7460E7A49;
class Class_1_C47576BEFCFAD595_Class_1_2A7A4E0304C55189;
class Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B;
class Class_1_D51E0D8CFAC4DCF1;
class Class_1_D94C90B243424267;
class Class_1_D94C90B243424267_Class_1_8781C9423B4D4C63;
class Class_2_19348DE77242334B;
class Class_2_55373297DA27393D;
class Class_2_6909BB516E50EA23;
class Class_2_F3F43255EC92B83B;
class Class_3_2BE5039CEA912003;
class Class_3_691800AA19128C85;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class MonoParkourRoadMap; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_HorizontalConnectionInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_VerticalConnectionInfo; }
namespace RPG::Client::ParkourGame { class ParkourGameLevelConfigAsset; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C47576BEFCFAD595_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124B7440)
#define CLASS_1_C47576BEFCFAD595_GET_FIRETARGETDISTANCESCORE_OFFSET UNITYSDK_OFFSET(0x124BE0A0)
#define CLASS_1_C47576BEFCFAD595_GET_FIRETARGETROADOFFSETSCORE_OFFSET UNITYSDK_OFFSET(0x124BE0B0)
#define CLASS_1_C47576BEFCFAD595_GET_LAPMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x124BE090)
#define CLASS_1_C47576BEFCFAD595_GET_LAPMINDISTANCE_OFFSET UNITYSDK_OFFSET(0x124BE080)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_07DA0955DFDDC9C4_OFFSET UNITYSDK_OFFSET(0x124BAFB0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_0916C9279802403A_1_OFFSET UNITYSDK_OFFSET(0x124BDFC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_0916C9279802403A_OFFSET UNITYSDK_OFFSET(0x124B6960)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_0DA0FCEA40E59CDB_OFFSET UNITYSDK_OFFSET(0x124BDEC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_12E71AEB380B5186_OFFSET UNITYSDK_OFFSET(0x124BCC90)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_2BFF6E945E070141_OFFSET UNITYSDK_OFFSET(0x124BBFB0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_2C9F9D02731F6619_OFFSET UNITYSDK_OFFSET(0x124BCEE0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_33738D590602EB38_1_OFFSET UNITYSDK_OFFSET(0x124B6D30)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_33738D590602EB38_OFFSET UNITYSDK_OFFSET(0x124B69E0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_34995D340264E435_OFFSET UNITYSDK_OFFSET(0x124BA680)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_360086A416BAEEC6_OFFSET UNITYSDK_OFFSET(0x124BC590)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_363217C7DC5B3A13_OFFSET UNITYSDK_OFFSET(0x124BBD70)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x124B73E0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_3FE8E6950D654AAE_OFFSET UNITYSDK_OFFSET(0x124BBCC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_4003811CA3DF9873_OFFSET UNITYSDK_OFFSET(0x124BBA00)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_432A3BA469E48577_OFFSET UNITYSDK_OFFSET(0x124BB870)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x124BE040)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_45D3708C24EAFFD6_OFFSET UNITYSDK_OFFSET(0x124BDD70)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_4DE15A3DBF3CE788_OFFSET UNITYSDK_OFFSET(0x124BA770)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_56AAF22972BD1A66_OFFSET UNITYSDK_OFFSET(0x124B9770)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_56FE2EA783DDD2BA_OFFSET UNITYSDK_OFFSET(0x124BA520)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_61CE3DA6BF4DCF1C_OFFSET UNITYSDK_OFFSET(0x124BDCD0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_63C3A60AE6BB3F14_OFFSET UNITYSDK_OFFSET(0x124BD140)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x124B7BE0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_6CC538194602C49B_OFFSET UNITYSDK_OFFSET(0x124BB1A0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_6E63E775FFA53AF2_OFFSET UNITYSDK_OFFSET(0x124BC2A0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_7E2C7E42A55D11C6_1_OFFSET UNITYSDK_OFFSET(0x124BC1C0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_7E2C7E42A55D11C6_OFFSET UNITYSDK_OFFSET(0x124BC0E0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_833766DAF4FBCF0A_OFFSET UNITYSDK_OFFSET(0x124BB050)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_84106D9ED3DBF9FE_OFFSET UNITYSDK_OFFSET(0x124BA5D0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_858E258383F7B7D8_OFFSET UNITYSDK_OFFSET(0x124BE050)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_89F2F7D540E8A018_OFFSET UNITYSDK_OFFSET(0x124BBE20)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_99207B2B480EDCF6_1_OFFSET UNITYSDK_OFFSET(0x124BB380)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_99207B2B480EDCF6_OFFSET UNITYSDK_OFFSET(0x124BB2E0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0x124BB260)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A61F5B8771F2C1A5_1_OFFSET UNITYSDK_OFFSET(0x124BB420)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A61F5B8771F2C1A5_OFFSET UNITYSDK_OFFSET(0x124B67C0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A6277B319DC5B195_OFFSET UNITYSDK_OFFSET(0x124BCB30)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x124B8D20)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BA65EA2903289C12_OFFSET UNITYSDK_OFFSET(0x124BB720)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BD8BC8F0ED711A30_OFFSET UNITYSDK_OFFSET(0x124B7B10)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BEF1DE9624B24370_OFFSET UNITYSDK_OFFSET(0x124B6750)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_C2D94B542F8BDBB0_OFFSET UNITYSDK_OFFSET(0x124BCE30)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_D7BACEF5ABBACB42_OFFSET UNITYSDK_OFFSET(0x124BBB90)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_DA7C38D012CC3555_OFFSET UNITYSDK_OFFSET(0x124B7C50)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x124B7940)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_E271A817FE4C55E9_OFFSET UNITYSDK_OFFSET(0x124B7080)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_E3E6EECF0E3CE5CC_OFFSET UNITYSDK_OFFSET(0x124BB490)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_E9D554921F6C8B3C_OFFSET UNITYSDK_OFFSET(0x124BC960)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x124B6700)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_F74C24A866E017D4_OFFSET UNITYSDK_OFFSET(0x124B68D0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FAED997991B81C39_OFFSET UNITYSDK_OFFSET(0x124BC030)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FB04B9D7AFC443C6_OFFSET UNITYSDK_OFFSET(0x124BB5E0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x124BE060)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x124B6720)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x124B8B80)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FDF3FD3EF898CEA4_OFFSET UNITYSDK_OFFSET(0x124B6840)
#define CLASS_1_C47576BEFCFAD595__CTOR_OFFSET UNITYSDK_OFFSET(0x124B5270)

inline static constexpr unsigned int Class_1_C47576BEFCFAD595_TypeDefinitionIndex = 68326;

class Class_1_C47576BEFCFAD595 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	::System::Collections::Generic::List_1<::Class_1_843EA87CD32A873D*>* Field_1_22; // 0x10
	::Class_2_6909BB516E50EA23* Field_1_15; // 0x18
	::System::Collections::Generic::List_1<::Class_2_F3F43255EC92B83B*>* Field_1_20; // 0x20
	::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* Field_1_16; // 0x28
	::System::Collections::Generic::List_1<::Class_2_55373297DA27393D*>* Field_1_23; // 0x30
	::System::Collections::Generic::List_1<::Class_1_D51E0D8CFAC4DCF1*>* Field_1_24; // 0x38
	::System::Comparison_1<::Class_2_F3F43255EC92B83B*>* Field_1_26; // 0x40
	::System::Action* Field_1_13; // 0x48
	::System::Action* Field_1_12; // 0x50
	::System::Action* Field_1_14; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Single>* Field_1_28; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int64>* Field_1_27; // 0x68
	::Class_1_C47576BEFCFAD595_Class_1_2A7A4E0304C55189* Field_1_29; // 0x70
	::Il2CppArray<::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*>* Field_1_18; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*>* Field_1_19; // 0x80
	::RPG::Client::ParkourGame::MonoParkourRoadMap* Field_1_17; // 0x88
	::System::Collections::Generic::List_1<::Class_2_F3F43255EC92B83B*>* Field_1_21; // 0x90
	::Class_1_934E35F7460E7A49* Field_1_30; // 0x98
	::Class_2_19348DE77242334B* Field_1_25; // 0xA0
	::System::UInt32 Field_1_4; // 0xA8
	::System::Single _FireTargetDistanceScore_k__BackingField; // 0xAC
	::System::Single _LapMaxDistance_k__BackingField; // 0xB0
	::System::UInt32 Field_1_3; // 0xB4
	::System::UInt32 Field_1_2; // 0xB8
	::System::UInt32 Field_1_5; // 0xBC
	::System::Single _LapMinDistance_k__BackingField; // 0xC0
	::System::Single _FireTargetRoadOffsetScore_k__BackingField; // 0xC4

	::System::Void _ctor(::RPG::Client::ParkourGame::MonoParkourRoadMap* a1, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* a2, ::Class_2_6909BB516E50EA23* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoadMap*, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*, ::Class_2_6909BB516E50EA23*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_1_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_1_DA7C38D012CC3555(::Class_2_6909BB516E50EA23_EPhase a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6909BB516E50EA23_EPhase, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_DA7C38D012CC3555_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_56FE2EA783DDD2BA(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_56FE2EA783DDD2BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_84106D9ED3DBF9FE(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_84106D9ED3DBF9FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_34995D340264E435(::Class_3_691800AA19128C85* a1, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_691800AA19128C85*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_34995D340264E435_OFFSET))(this, a1, a2);
	}

	::Class_1_1BD9A352EF1010C8* Method_1_4DE15A3DBF3CE788(::Class_3_691800AA19128C85* a1, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a2)
	{
		return ((::Class_1_1BD9A352EF1010C8*(*)(::PVOID, ::Class_3_691800AA19128C85*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_4DE15A3DBF3CE788_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_07DA0955DFDDC9C4(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_07DA0955DFDDC9C4_OFFSET))(this, a1);
	}

	::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 Method_1_833766DAF4FBCF0A(::System::Int32 a1)
	{
		return ((::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_833766DAF4FBCF0A_OFFSET))(this, a1);
	}

	::System::Single Method_1_6CC538194602C49B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_6CC538194602C49B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_F74C24A866E017D4(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_F74C24A866E017D4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_BEF1DE9624B24370(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_BEF1DE9624B24370_OFFSET))(this, a1);
	}

	::System::Single Method_1_A17B38030E623502(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_A17B38030E623502_OFFSET))(this, a1);
	}

	::System::Single Method_1_99207B2B480EDCF6(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_99207B2B480EDCF6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_99207B2B480EDCF6_1(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_99207B2B480EDCF6_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A61F5B8771F2C1A5(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_A61F5B8771F2C1A5_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A61F5B8771F2C1A5_1(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_A61F5B8771F2C1A5_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FDF3FD3EF898CEA4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FDF3FD3EF898CEA4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E3E6EECF0E3CE5CC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_E3E6EECF0E3CE5CC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_BA65EA2903289C12(::RPG::Client::ParkourGame::MonoParkourCharacter* a1, ::RPG::Client::ParkourGame::MonoParkourCharacter* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_BA65EA2903289C12_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4003811CA3DF9873(::RPG::Client::ParkourGame::MonoParkourCharacter* a1, ::RPG::Client::ParkourGame::MonoParkourCharacter* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_4003811CA3DF9873_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D7BACEF5ABBACB42(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_D7BACEF5ABBACB42_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_3FE8E6950D654AAE(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_3FE8E6950D654AAE_OFFSET))(this, a1, a2);
	}

	::Class_2_F3F43255EC92B83B* Method_1_432A3BA469E48577(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
	{
		return ((::Class_2_F3F43255EC92B83B*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_432A3BA469E48577_OFFSET))(this, a1);
	}

	::Class_3_691800AA19128C85* Method_1_BD8BC8F0ED711A30()
	{
		return ((::Class_3_691800AA19128C85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_BD8BC8F0ED711A30_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_3_2BE5039CEA912003*>* Method_1_363217C7DC5B3A13()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_2BE5039CEA912003*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_363217C7DC5B3A13_OFFSET))(this);
	}

	::Class_1_1BD9A352EF1010C8* Method_1_89F2F7D540E8A018(::RPG::Client::ParkourGame::MonoParkourItem* a1)
	{
		return ((::Class_1_1BD9A352EF1010C8*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourItem*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_89F2F7D540E8A018_OFFSET))(this, a1);
	}

	::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* Method_1_2BFF6E945E070141(::System::Int32 a1)
	{
		return ((::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_2BFF6E945E070141_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAED997991B81C39(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FAED997991B81C39_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7E2C7E42A55D11C6(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Quaternion& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_7E2C7E42A55D11C6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_7E2C7E42A55D11C6_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Quaternion& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_7E2C7E42A55D11C6_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_1_360086A416BAEEC6(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_360086A416BAEEC6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_E9D554921F6C8B3C(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_E9D554921F6C8B3C_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_12E71AEB380B5186(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_12E71AEB380B5186_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2D94B542F8BDBB0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_C2D94B542F8BDBB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Method_1_56AAF22972BD1A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_56AAF22972BD1A66_OFFSET))(this);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Boolean Method_1_2C9F9D02731F6619(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_2C9F9D02731F6619_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_63C3A60AE6BB3F14(::Class_1_D94C90B243424267* a1, ::Class_1_D94C90B243424267_Class_1_8781C9423B4D4C63* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D94C90B243424267*, ::Class_1_D94C90B243424267_Class_1_8781C9423B4D4C63*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_63C3A60AE6BB3F14_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_61CE3DA6BF4DCF1C(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_61CE3DA6BF4DCF1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_45D3708C24EAFFD6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_45D3708C24EAFFD6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0DA0FCEA40E59CDB(::Class_2_F3F43255EC92B83B* a1, ::Class_2_F3F43255EC92B83B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_F3F43255EC92B83B*, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_0DA0FCEA40E59CDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0916C9279802403A(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_0916C9279802403A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0916C9279802403A_1(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_0916C9279802403A_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_33738D590602EB38(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_33738D590602EB38_OFFSET))(this, a1);
	}

	::System::Single Method_1_33738D590602EB38_1(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_33738D590602EB38_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E271A817FE4C55E9(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_E271A817FE4C55E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6E63E775FFA53AF2(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_6E63E775FFA53AF2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* Method_1_FB04B9D7AFC443C6(::RPG::Client::ParkourGame::MonoParkourRoad_HorizontalConnectionInfo* a1, ::System::Int32 a2)
	{
		return ((::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_HorizontalConnectionInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FB04B9D7AFC443C6_OFFSET))(this, a1, a2);
	}

	::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* Method_1_A6277B319DC5B195(::RPG::Client::ParkourGame::MonoParkourRoad_VerticalConnectionInfo* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_VerticalConnectionInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_A6277B319DC5B195_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_6909BB516E50EA23* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_6909BB516E50EA23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* Method_1_858E258383F7B7D8()
	{
		return ((::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_858E258383F7B7D8_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Single get_LapMinDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_GET_LAPMINDISTANCE_OFFSET))(this);
	}

	::System::Single get_LapMaxDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_GET_LAPMAXDISTANCE_OFFSET))(this);
	}

	::System::Single get_FireTargetDistanceScore()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_GET_FIRETARGETDISTANCESCORE_OFFSET))(this);
	}

	::System::Single get_FireTargetRoadOffsetScore()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_GET_FIRETARGETROADOFFSETSCORE_OFFSET))(this);
	}
};
