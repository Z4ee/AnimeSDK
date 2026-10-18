#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2CDF619C23140440;
class Class_1_9E057D19FDD4E61D_Class_3_C0D189AA62C8FC80_1;
class Class_1_BEFFF38E22C3198D;
class Class_1_C370D91670DF0B16;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelProgressTipsData; }
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelGuideHintBillboardConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelVarCondition; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E057D19FDD4E61D_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB93F620)
#define CLASS_1_9E057D19FDD4E61D_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB93E540)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xB9403D0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xB93F450)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0xB941F00)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1615E74BDA0D0348_OFFSET UNITYSDK_OFFSET(0xB93D9C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_168CDBBDB08BE45E_OFFSET UNITYSDK_OFFSET(0xB93DDB0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB93F3B0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1F3C089EF22BC042_1_OFFSET UNITYSDK_OFFSET(0xB93D2A0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1F3C089EF22BC042_OFFSET UNITYSDK_OFFSET(0xB93D0E0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_1F4475A895EDB299_OFFSET UNITYSDK_OFFSET(0xB9406C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_212B74B8F8B47E36_OFFSET UNITYSDK_OFFSET(0xB9425C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xB93EB60)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0xB93D3C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_2CB47B49FAA2B217_OFFSET UNITYSDK_OFFSET(0xB941A90)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB941260)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_65659F3801D67FF3_OFFSET UNITYSDK_OFFSET(0xB941FA0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_6A664DCBFEADE56F_OFFSET UNITYSDK_OFFSET(0xB941C60)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_7180D11BD8FDADB6_OFFSET UNITYSDK_OFFSET(0xB93C230)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_7A8B1E4B766700EE_OFFSET UNITYSDK_OFFSET(0xB9412A0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_83BE0299944D0F77_OFFSET UNITYSDK_OFFSET(0xB940B20)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_897A2DF182484532_OFFSET UNITYSDK_OFFSET(0xB942D30)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_8ACE1680BE38025A_OFFSET UNITYSDK_OFFSET(0xB9409A0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_926DA1DD56014091_OFFSET UNITYSDK_OFFSET(0xB93E0C0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_939CDD7469521ADD_OFFSET UNITYSDK_OFFSET(0xB942760)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_994E4C7A737EDD8A_OFFSET UNITYSDK_OFFSET(0xB941760)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB93FFA0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB93F0F0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xB940AC0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xB93DBF0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_C37D43A356DCF315_OFFSET UNITYSDK_OFFSET(0xB941430)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_C738B9F39A7B54B7_OFFSET UNITYSDK_OFFSET(0xB942B50)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_C73E9342C586B3BF_OFFSET UNITYSDK_OFFSET(0xB942370)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0xB93DEC0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_DB8224B2664126AA_OFFSET UNITYSDK_OFFSET(0xB93EDD0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xB93EEB0)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0xB940940)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_E0661AD7C15CBAB0_OFFSET UNITYSDK_OFFSET(0xB93C000)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB93F540)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_F91BD1BF35E1F1A9_OFFSET UNITYSDK_OFFSET(0xB93C150)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_FC15BAFC5717F4C6_OFFSET UNITYSDK_OFFSET(0xB93CC10)
#define CLASS_1_9E057D19FDD4E61D_METHOD_1_FD8DFECF25281CF4_OFFSET UNITYSDK_OFFSET(0xB93D220)
#define CLASS_1_9E057D19FDD4E61D_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB940CF0)
#define CLASS_1_9E057D19FDD4E61D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB942F40)
#define CLASS_1_9E057D19FDD4E61D__CTOR_OFFSET UNITYSDK_OFFSET(0xB93BA30)
#define CLASS_1_9E057D19FDD4E61D___TRYFINISHGAMEAFTERREWARD_B__15_0_OFFSET UNITYSDK_OFFSET(0xB942FC0)

inline static constexpr unsigned int Class_1_9E057D19FDD4E61D_TypeDefinitionIndex = 76776;

class Class_1_9E057D19FDD4E61D : public ::System::Object
{
public:
	static ::System::String** StaticGet_FJOJCABLAFI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D_TypeDefinitionIndex)->GetStaticField(0x6FB70);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_DJIIBGMFPPJ()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E057D19FDD4E61D_TypeDefinitionIndex)->GetStaticField(0x6FB78);
	}
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* KJJHDDDIPJN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_B8E38BF47138A2E5*>* GLFODDENPOF; // 0x20
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* MOFKEHBPAEF; // 0x30
	::System::Collections::Generic::Dictionary_2<::Class_2_B8E38BF47138A2E5*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelProgressTipsData*>* OGDNCPGCFEP; // 0x38
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* HNGMCHOLELK; // 0x40
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* BJLLMDGBGKL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_9E057D19FDD4E61D_Class_3_C0D189AA62C8FC80_1*>* GFIPFGJPHHI; // 0x50
	::RPG::GameCore::FourRotateVoxelPortalConfig* BGAOAGMGJKI; // 0x58
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* NJJIHFCPPBF; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::Class_1_9E057D19FDD4E61D_Class_3_C0D189AA62C8FC80_1*>>*>* IKBEHONCHMM; // 0x68
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x70
	::System::Collections::Generic::List_1<::Class_2_B8E38BF47138A2E5*>* MBCFFPGIIME; // 0x78
	::System::Single ANFKIKEFGAN; // 0x80
	::System::UInt32 EHCPMCOCODB; // 0x84
	::System::Boolean KDBFJBKPBJP; // 0x88
	::System::Int32 ADJMAIEKHGD; // 0x8C
	::System::Int32 EACONPIEIBO; // 0x90
	::System::Single LECBDFEEAMI; // 0x94
	::System::Boolean EDHFBDOGOLO; // 0x98
	::System::Boolean PFEMHADNCKP; // 0x99
	::System::Boolean JHFJHMMFBNL; // 0x9A
	::System::Boolean LJCCDOMODCP; // 0x9B
	::System::Boolean KAKFPBFBKGG; // 0x9C
	::System::Boolean GPFFNLIFHBC; // 0x9D
	::System::Boolean FGMEGPMHJLG; // 0x9E
	::System::Boolean BFPOBJEBCEN; // 0x9F

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E0661AD7C15CBAB0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_E0661AD7C15CBAB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7180D11BD8FDADB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_7180D11BD8FDADB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_1615E74BDA0D0348(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1615E74BDA0D0348_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_168CDBBDB08BE45E(::RPG::GameCore::FourRotateVoxelEntranceConfig* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelEntranceConfig*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_168CDBBDB08BE45E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FC15BAFC5717F4C6(::Class_2_B8E38BF47138A2E5* a1, ::RPG::Client::QuestData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_FC15BAFC5717F4C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_BEFFF38E22C3198D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEFFF38E22C3198D*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_F91BD1BF35E1F1A9(::Class_2_B8E38BF47138A2E5* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_F91BD1BF35E1F1A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_926DA1DD56014091(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_926DA1DD56014091_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_1_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_83BE0299944D0F77()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_83BE0299944D0F77_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_C370D91670DF0B16* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C370D91670DF0B16*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::Class_2_B8E38BF47138A2E5* Method_1_1F4475A895EDB299()
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1F4475A895EDB299_OFFSET))(this);
	}

	::System::Void Method_1_8ACE1680BE38025A(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_8ACE1680BE38025A_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_TEARDOWN_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_7A8B1E4B766700EE(::RPG::GameCore::FourRotateVoxelPortalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_7A8B1E4B766700EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DB8224B2664126AA(::RPG::GameCore::FourRotateVoxelPortalConfig* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelPortalConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_DB8224B2664126AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Boolean Method_1_1F3C089EF22BC042(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1F3C089EF22BC042_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1F3C089EF22BC042_1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_1F3C089EF22BC042_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CB47B49FAA2B217(::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_2CB47B49FAA2B217_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_B8E38BF47138A2E5* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FD8DFECF25281CF4(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_FD8DFECF25281CF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_65659F3801D67FF3(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_65659F3801D67FF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A664DCBFEADE56F(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_6A664DCBFEADE56F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C73E9342C586B3BF(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_C73E9342C586B3BF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C37D43A356DCF315(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_C37D43A356DCF315_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_212B74B8F8B47E36(::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* a1, ::Class_2_B8E38BF47138A2E5* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>*, ::Class_2_B8E38BF47138A2E5*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_212B74B8F8B47E36_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_994E4C7A737EDD8A(::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_994E4C7A737EDD8A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C738B9F39A7B54B7(::RPG::GameCore::FourRotateVoxelLevelVarCondition* a1, ::System::Int16 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelVarCondition*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_C738B9F39A7B54B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C1C2A8E63DB0F10(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_2C1C2A8E63DB0F10_OFFSET))(this, a1);
	}

	::System::Void Method_1_939CDD7469521ADD(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_939CDD7469521ADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_897A2DF182484532(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D_METHOD_1_897A2DF182484532_OFFSET))(this, a1, a2);
	}

	::System::Void __TryFinishGameAfterReward_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E057D19FDD4E61D___TRYFINISHGAMEAFTERREWARD_B__15_0_OFFSET))(this);
	}
};
