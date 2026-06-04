#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3.h"
#include "unitysdk/Class_2_913EDB5071198DA2_EPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1BD9A352EF1010C8;
class Class_1_843EA87CD32A873D;
class Class_1_934E35F7460E7A49;
class Class_1_C42EE16F2550E26E;
class Class_1_C42EE16F2550E26E_Class_1_8781C9423B4D4C63;
class Class_1_C47576BEFCFAD595_Class_1_2A7A4E0304C55189;
class Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B;
class Class_1_F62015F84D3989AC;
class Class_2_19348DE77242334B;
class Class_2_55373297DA27393D;
class Class_2_913EDB5071198DA2;
class Class_2_F3F43255EC92B83B;
class Class_3_2BE5039CEA912003;
class Class_3_2C9EAA87767F46A5;
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

#define CLASS_1_C47576BEFCFAD595_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF34600)
#define CLASS_1_C47576BEFCFAD595_GET_FIRETARGETDISTANCESCORE_OFFSET UNITYSDK_OFFSET(0xFF3B0F0)
#define CLASS_1_C47576BEFCFAD595_GET_FIRETARGETROADOFFSETSCORE_OFFSET UNITYSDK_OFFSET(0xFF3B100)
#define CLASS_1_C47576BEFCFAD595_GET_LAPMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xFF3B0E0)
#define CLASS_1_C47576BEFCFAD595_GET_LAPMINDISTANCE_OFFSET UNITYSDK_OFFSET(0xFF3B0D0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_0916C9279802403A_1_OFFSET UNITYSDK_OFFSET(0xFF3B010)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_0916C9279802403A_OFFSET UNITYSDK_OFFSET(0xFF339D0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_0DA0FCEA40E59CDB_OFFSET UNITYSDK_OFFSET(0xFF3AF10)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_12E71AEB380B5186_OFFSET UNITYSDK_OFFSET(0xFF39C20)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_181B9D257D026A3E_OFFSET UNITYSDK_OFFSET(0xFF39A70)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_1DAC593F2BE1A638_OFFSET UNITYSDK_OFFSET(0xFF37EE0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_27822ECE8C4846CC_OFFSET UNITYSDK_OFFSET(0xFF37720)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0xFF365F0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_2BFF6E945E070141_OFFSET UNITYSDK_OFFSET(0xFF38F40)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_360086A416BAEEC6_OFFSET UNITYSDK_OFFSET(0xFF394F0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_363217C7DC5B3A13_OFFSET UNITYSDK_OFFSET(0xFF38D10)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xFF345B0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_3FE8E6950D654AAE_OFFSET UNITYSDK_OFFSET(0xFF38C70)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_4003811CA3DF9873_OFFSET UNITYSDK_OFFSET(0xFF389E0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0xFF3B090)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xFF35C00)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xFF34AC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_4DC99A0E8033A1A2_OFFSET UNITYSDK_OFFSET(0xFF35A40)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_4FBFC3627604BE2B_OFFSET UNITYSDK_OFFSET(0xFF3A1F0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_54B9FF9BFDD6A9A3_OFFSET UNITYSDK_OFFSET(0xFF375D0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_61CE3DA6BF4DCF1C_OFFSET UNITYSDK_OFFSET(0xFF3AD50)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_6CC538194602C49B_OFFSET UNITYSDK_OFFSET(0xFF38180)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_6E63E775FFA53AF2_OFFSET UNITYSDK_OFFSET(0xFF39200)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_7E2C7E42A55D11C6_1_OFFSET UNITYSDK_OFFSET(0xFF39130)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_7E2C7E42A55D11C6_OFFSET UNITYSDK_OFFSET(0xFF39060)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_84106D9ED3DBF9FE_OFFSET UNITYSDK_OFFSET(0xFF37520)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_858E258383F7B7D8_OFFSET UNITYSDK_OFFSET(0xFF3B0A0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_8B0ADBF988AFFBC5_OFFSET UNITYSDK_OFFSET(0xFF38860)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_8B99C0FBEE61C32E_OFFSET UNITYSDK_OFFSET(0xFF38DC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_8D7AF529D633A451_OFFSET UNITYSDK_OFFSET(0xFF39DB0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_92DA7880E9C9F1B5_OFFSET UNITYSDK_OFFSET(0xFF373B0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xFF34DC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_99207B2B480EDCF6_1_OFFSET UNITYSDK_OFFSET(0xFF38330)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_99207B2B480EDCF6_OFFSET UNITYSDK_OFFSET(0xFF382A0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0xFF38220)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A61F5B8771F2C1A5_1_OFFSET UNITYSDK_OFFSET(0xFF383C0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A61F5B8771F2C1A5_OFFSET UNITYSDK_OFFSET(0xFF33840)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_A6270B1CFFE8DA9C_OFFSET UNITYSDK_OFFSET(0xFF3ADF0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BA65EA2903289C12_OFFSET UNITYSDK_OFFSET(0xFF38710)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BCDC89540B62B014_OFFSET UNITYSDK_OFFSET(0xFF38430)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BEF1DE9624B24370_OFFSET UNITYSDK_OFFSET(0xFF337D0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_BF5FD7A12CED80BE_OFFSET UNITYSDK_OFFSET(0xFF34E40)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_C05E43FC8244DE59_1_OFFSET UNITYSDK_OFFSET(0xFF33E50)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_C05E43FC8244DE59_OFFSET UNITYSDK_OFFSET(0xFF33A50)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_C27F09B189CA5FB9_OFFSET UNITYSDK_OFFSET(0xFF37FD0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_C6A0E4C388CEE52E_OFFSET UNITYSDK_OFFSET(0xFF38580)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_D7BACEF5ABBACB42_OFFSET UNITYSDK_OFFSET(0xFF38B60)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_E271A817FE4C55E9_OFFSET UNITYSDK_OFFSET(0xFF34250)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_EA0E179F4F4E9BE3_OFFSET UNITYSDK_OFFSET(0xFF34CB0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_EEDB52411314C286_OFFSET UNITYSDK_OFFSET(0xFF39EE0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xFF33780)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_F74C24A866E017D4_OFFSET UNITYSDK_OFFSET(0xFF33950)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FAED997991B81C39_OFFSET UNITYSDK_OFFSET(0xFF38FC0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xFF3B0B0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xFF337A0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FDF3FD3EF898CEA4_OFFSET UNITYSDK_OFFSET(0xFF338C0)
#define CLASS_1_C47576BEFCFAD595_METHOD_1_FE1F549DCAE48701_OFFSET UNITYSDK_OFFSET(0xFF398A0)
#define CLASS_1_C47576BEFCFAD595__CTOR_OFFSET UNITYSDK_OFFSET(0xFF32310)

inline static constexpr unsigned int Class_1_C47576BEFCFAD595_TypeDefinitionIndex = 69300;

class Class_1_C47576BEFCFAD595 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Single>* Field_1_4; // 0x10
	::Class_1_C47576BEFCFAD595_Class_1_2A7A4E0304C55189* Field_1_5; // 0x18
	::Class_2_19348DE77242334B* Field_1_6; // 0x20
	::System::Action* Field_1_7; // 0x28
	::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::Class_2_F3F43255EC92B83B*>* Field_1_9; // 0x38
	::Class_1_934E35F7460E7A49* Field_1_10; // 0x40
	::System::Action* Field_1_11; // 0x48
	::Class_2_913EDB5071198DA2* Field_1_12; // 0x50
	::Il2CppArray<::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*>* Field_1_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*>* Field_1_14; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int64>* Field_1_15; // 0x68
	::RPG::Client::ParkourGame::MonoParkourRoadMap* Field_1_16; // 0x70
	::System::Collections::Generic::List_1<::Class_2_F3F43255EC92B83B*>* Field_1_17; // 0x78
	::System::Collections::Generic::List_1<::Class_1_F62015F84D3989AC*>* Field_1_18; // 0x80
	::System::Collections::Generic::List_1<::Class_1_843EA87CD32A873D*>* Field_1_19; // 0x88
	::System::Collections::Generic::List_1<::Class_2_55373297DA27393D*>* Field_1_20; // 0x90
	::System::Action* Field_1_21; // 0x98
	::System::Comparison_1<::Class_2_F3F43255EC92B83B*>* Field_1_22; // 0xA0
	::System::Single _FireTargetRoadOffsetScore_k__BackingField; // 0xA8
	::System::UInt32 Field_1_24; // 0xAC
	::System::Single _LapMinDistance_k__BackingField; // 0xB0
	::System::UInt32 Field_1_26; // 0xB4
	::System::Single _FireTargetDistanceScore_k__BackingField; // 0xB8
	::System::Single _LapMaxDistance_k__BackingField; // 0xBC
	::System::UInt32 Field_1_29; // 0xC0
	::System::UInt32 Field_1_30; // 0xC4

	::System::Void _ctor(::RPG::Client::ParkourGame::MonoParkourRoadMap* a1, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset* a2, ::Class_2_913EDB5071198DA2* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoadMap*, ::RPG::Client::ParkourGame::ParkourGameLevelConfigAsset*, ::Class_2_913EDB5071198DA2*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_BF5FD7A12CED80BE(::Class_2_913EDB5071198DA2_EPhase a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_913EDB5071198DA2_EPhase, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_BF5FD7A12CED80BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_92DA7880E9C9F1B5(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_92DA7880E9C9F1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_84106D9ED3DBF9FE(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_84106D9ED3DBF9FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_54B9FF9BFDD6A9A3(::Class_3_2C9EAA87767F46A5* a1, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_2C9EAA87767F46A5*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_54B9FF9BFDD6A9A3_OFFSET))(this, a1, a2);
	}

	::Class_1_1BD9A352EF1010C8* Method_1_27822ECE8C4846CC(::Class_3_2C9EAA87767F46A5* a1, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a2)
	{
		return ((::Class_1_1BD9A352EF1010C8*(*)(::PVOID, ::Class_3_2C9EAA87767F46A5*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_27822ECE8C4846CC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_1DAC593F2BE1A638(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_1DAC593F2BE1A638_OFFSET))(this, a1);
	}

	::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 Method_1_C27F09B189CA5FB9(::System::Int32 a1)
	{
		return ((::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_C27F09B189CA5FB9_OFFSET))(this, a1);
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

	::System::Boolean Method_1_BCDC89540B62B014(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_BCDC89540B62B014_OFFSET))(this, a1, a2, a3, a4);
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

	::Class_2_F3F43255EC92B83B* Method_1_8B0ADBF988AFFBC5(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
	{
		return ((::Class_2_F3F43255EC92B83B*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_8B0ADBF988AFFBC5_OFFSET))(this, a1);
	}

	::Class_3_2C9EAA87767F46A5* Method_1_EA0E179F4F4E9BE3()
	{
		return ((::Class_3_2C9EAA87767F46A5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_EA0E179F4F4E9BE3_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_3_2BE5039CEA912003*>* Method_1_363217C7DC5B3A13()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_3_2BE5039CEA912003*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_363217C7DC5B3A13_OFFSET))(this);
	}

	::Class_1_1BD9A352EF1010C8* Method_1_8B99C0FBEE61C32E(::RPG::Client::ParkourGame::MonoParkourItem* a1)
	{
		return ((::Class_1_1BD9A352EF1010C8*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourItem*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_8B99C0FBEE61C32E_OFFSET))(this, a1);
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

	::System::Int32 Method_1_FE1F549DCAE48701(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_FE1F549DCAE48701_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_12E71AEB380B5186(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_12E71AEB380B5186_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8D7AF529D633A451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_8D7AF529D633A451_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DC99A0E8033A1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_4DC99A0E8033A1A2_OFFSET))(this);
	}

	::System::Void Method_1_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Boolean Method_1_EEDB52411314C286(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_EEDB52411314C286_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_4FBFC3627604BE2B(::Class_1_C42EE16F2550E26E* a1, ::Class_1_C42EE16F2550E26E_Class_1_8781C9423B4D4C63* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C42EE16F2550E26E*, ::Class_1_C42EE16F2550E26E_Class_1_8781C9423B4D4C63*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_4FBFC3627604BE2B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_61CE3DA6BF4DCF1C(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_61CE3DA6BF4DCF1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6270B1CFFE8DA9C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_A6270B1CFFE8DA9C_OFFSET))(this, a1);
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

	::System::Single Method_1_C05E43FC8244DE59(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_C05E43FC8244DE59_OFFSET))(this, a1);
	}

	::System::Single Method_1_C05E43FC8244DE59_1(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_C05E43FC8244DE59_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E271A817FE4C55E9(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_E271A817FE4C55E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6E63E775FFA53AF2(::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_6E63E775FFA53AF2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* Method_1_C6A0E4C388CEE52E(::RPG::Client::ParkourGame::MonoParkourRoad_HorizontalConnectionInfo* a1, ::System::Int32 a2)
	{
		return ((::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_HorizontalConnectionInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_C6A0E4C388CEE52E_OFFSET))(this, a1, a2);
	}

	::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B* Method_1_181B9D257D026A3E(::RPG::Client::ParkourGame::MonoParkourRoad_VerticalConnectionInfo* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_VerticalConnectionInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_181B9D257D026A3E_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_913EDB5071198DA2* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_913EDB5071198DA2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
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
