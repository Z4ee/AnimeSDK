#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDimensionBakedInfo.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/Struct_2_F1DDB6E36FBC609F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_301C5A497102AC7F;
class Class_1_B0E42F8E6665A371;
class Class_1_B27A28B5F94F6BD2;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelDimensionCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelFloorCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x1D8C3E30)
#define CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1D8C3F70)
#define CLASS_1_C4D1F4932C690DC4_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1D8C3FF0)
#define CLASS_1_C4D1F4932C690DC4_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D8C3E90)
#define CLASS_1_C4D1F4932C690DC4_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x1D8C3E70)
#define CLASS_1_C4D1F4932C690DC4_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1D8C3F80)
#define CLASS_1_C4D1F4932C690DC4_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x1D8C3E10)
#define CLASS_1_C4D1F4932C690DC4_GET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x1D8C3F00)
#define CLASS_1_C4D1F4932C690DC4_GET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x1D8C3ED0)
#define CLASS_1_C4D1F4932C690DC4_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x1D8C3EB0)
#define CLASS_1_C4D1F4932C690DC4_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D8C3E50)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_00F69ACA1AF68B42_OFFSET UNITYSDK_OFFSET(0x1D8BF2F0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_0D1CE77C2D731696_OFFSET UNITYSDK_OFFSET(0x1D8C3A50)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1D8BFDA0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_2A7F0BD4A5C44AFA_OFFSET UNITYSDK_OFFSET(0x1D8C3780)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_2C58A78F73B27804_OFFSET UNITYSDK_OFFSET(0x1D8C0400)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D8C0340)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_31FC8552DE7857A2_OFFSET UNITYSDK_OFFSET(0x1D8C3440)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_3583AE42D2D70389_OFFSET UNITYSDK_OFFSET(0x1D8C3500)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_384A952E81BD95C6_OFFSET UNITYSDK_OFFSET(0x1D8C3610)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_41F62958F16FC489_OFFSET UNITYSDK_OFFSET(0x1D8BE440)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_4BD2E938BE540A2F_OFFSET UNITYSDK_OFFSET(0x1D8C3040)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1D8BEC30)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_544F3731CA7A73F4_OFFSET UNITYSDK_OFFSET(0x1D8C2FF0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_6ABA6A7D3FD8E04E_OFFSET UNITYSDK_OFFSET(0x1D8C4010)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_7299E1B16BDE8F93_OFFSET UNITYSDK_OFFSET(0x1D8C36A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1D8BE9A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_8E96BC2E0FCCB6E9_OFFSET UNITYSDK_OFFSET(0x1D8C2C50)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_91AD3765C6147536_OFFSET UNITYSDK_OFFSET(0x1D8C2D40)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_93F582E578D1BB08_OFFSET UNITYSDK_OFFSET(0x1D8C39A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_A44AB0BF69D3EF98_OFFSET UNITYSDK_OFFSET(0x1D8C37F0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_B917C58B4E14AC1B_1_OFFSET UNITYSDK_OFFSET(0x1D8C2770)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x1D8BF930)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x1D8C09F0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_C0C90F8901683665_OFFSET UNITYSDK_OFFSET(0x1D8C3FA0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_C82F36068060921E_OFFSET UNITYSDK_OFFSET(0x1D8C3220)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_C93EBD7B6B94F61E_OFFSET UNITYSDK_OFFSET(0x1D8C3C20)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_CD9F3CEFB366C27A_1_OFFSET UNITYSDK_OFFSET(0x1D8BEA80)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x1D8C19E0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_CF0A5858543BB3A4_OFFSET UNITYSDK_OFFSET(0x1D8C3260)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_D65D6257FB73E1EC_OFFSET UNITYSDK_OFFSET(0x1D8C3F20)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x1D8BF850)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x1D8BE8E0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_E2C50A34F75A039D_OFFSET UNITYSDK_OFFSET(0x1D8C3710)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_EA9020CE6798B31D_OFFSET UNITYSDK_OFFSET(0x1D8C2BD0)
#define CLASS_1_C4D1F4932C690DC4_SET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x1D8C3E40)
#define CLASS_1_C4D1F4932C690DC4_SET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1D8C4000)
#define CLASS_1_C4D1F4932C690DC4_SET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D8C3EA0)
#define CLASS_1_C4D1F4932C690DC4_SET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x1D8C3E80)
#define CLASS_1_C4D1F4932C690DC4_SET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1D8C3F90)
#define CLASS_1_C4D1F4932C690DC4_SET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x1D8C3E20)
#define CLASS_1_C4D1F4932C690DC4_SET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x1D8C3F10)
#define CLASS_1_C4D1F4932C690DC4_SET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x1D8C3EF0)
#define CLASS_1_C4D1F4932C690DC4_SET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x1D8C3EC0)
#define CLASS_1_C4D1F4932C690DC4_SET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D8C3E60)
#define CLASS_1_C4D1F4932C690DC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BE600)

inline static constexpr unsigned int Class_1_C4D1F4932C690DC4_TypeDefinitionIndex = 74485;

class Class_1_C4D1F4932C690DC4 : public ::System::Object
{
public:
	::RPG::GameCore::EraFlipperConfig* _EraFlipConfig_k__BackingField; // 0x10
	::RPG::GameCore::LevelDimensionCrossMapBriefInfo* LOLKILMMFIP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Int16>* HLDNJHMALDF; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* IMFCHFJFAMA; // 0x28
	::RPG::Client::MapRotationInfo* _MapRotationInfo_k__BackingField; // 0x30
	::System::String* _EnvironmentProfilePath_k__BackingField; // 0x38
	::Class_1_301C5A497102AC7F* _FloorConstValues_k__BackingField; // 0x40
	::Class_1_B0E42F8E6665A371* KCFLGALPFOC; // 0x48
	::Struct_2_F1DDB6E36FBC609F _MapFiveDimInfo_k__BackingField; // 0x50
	::Class_1_B27A28B5F94F6BD2* _FloorBakedInfoConfig_k__BackingField; // 0x68
	::RPG::GameCore::LevelFloorCrossMapBriefInfo* MBGFIIKDDOG; // 0x70
	::RPG::GameCore::LevelDimensionBakedInfo _DimensionBakedInfo_k__BackingField; // 0x78
	::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* OFPPBAAEEFK; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* AFMLPKBINBC; // 0x90
	::RPG::Client::FloorSavedData* _FloorSavedValues_k__BackingField; // 0x98
	::RPG::GameCore::LevelNavmapConfig* _NavmapConfig_k__BackingField; // 0xA0
	::System::UInt32 ILHNIKNFFPN; // 0xA8
	::System::Boolean _HasLevelLittleGame_k__BackingField; // 0xAC
	::System::UInt32 _DimensionID_k__BackingField; // 0xB0
	::System::UInt32 GAPNANDKMHM; // 0xB4
	::System::UInt32 DLHOKIMOHFG; // 0xB8
	::System::UInt32 JBMOIEJNEFD; // 0xBC

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_1_C4D1F4932C690DC4* Method_1_41F62958F16FC489(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Class_1_C4D1F4932C690DC4*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_41F62958F16FC489_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_EA9020CE6798B31D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_EA9020CE6798B31D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8E96BC2E0FCCB6E9(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_8E96BC2E0FCCB6E9_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapAnchorDef* Method_1_91AD3765C6147536()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_91AD3765C6147536_OFFSET))(this);
	}

	::RPG::Client::MapPropDef* Method_1_4BD2E938BE540A2F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_4BD2E938BE540A2F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapDistrictDef* Method_1_CF0A5858543BB3A4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_CF0A5858543BB3A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_31FC8552DE7857A2(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_31FC8552DE7857A2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_CD9F3CEFB366C27A_1_OFFSET))(this);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::RPG::GameCore::RtLevelGroupInstanceCommonInfo* Method_1_3583AE42D2D70389(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RtLevelGroupInstanceCommonInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_3583AE42D2D70389_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_384A952E81BD95C6(::RPG::GameCore::LevelFeatureType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelFeatureType))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_384A952E81BD95C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_00F69ACA1AF68B42(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_00F69ACA1AF68B42_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_2C58A78F73B27804(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_2C58A78F73B27804_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_B917C58B4E14AC1B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_B917C58B4E14AC1B_1_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_2A7F0BD4A5C44AFA(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_2A7F0BD4A5C44AFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2C50A34F75A039D(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_E2C50A34F75A039D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7299E1B16BDE8F93(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_7299E1B16BDE8F93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93F582E578D1BB08(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_93F582E578D1BB08_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_A44AB0BF69D3EF98(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_A44AB0BF69D3EF98_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_0D1CE77C2D731696(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_0D1CE77C2D731696_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapPropDef* Method_1_C93EBD7B6B94F61E(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_C93EBD7B6B94F61E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FloorSavedData* get_FloorSavedValues()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_FLOORSAVEDVALUES_OFFSET))(this);
	}

	::System::Void set_FloorSavedValues(::RPG::Client::FloorSavedData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FloorSavedData*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_FLOORSAVEDVALUES_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelDimensionBakedInfo get_DimensionBakedInfo()
	{
		return ((::RPG::GameCore::LevelDimensionBakedInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONBAKEDINFO_OFFSET))(this);
	}

	::System::Void set_DimensionBakedInfo(::RPG::GameCore::LevelDimensionBakedInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_DIMENSIONBAKEDINFO_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_NAVMAPCONFIG_OFFSET))(this);
	}

	::System::Void set_NavmapConfig(::RPG::GameCore::LevelNavmapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_NAVMAPCONFIG_OFFSET))(this, a1);
	}

	::Class_1_B27A28B5F94F6BD2* get_FloorBakedInfoConfig()
	{
		return ((::Class_1_B27A28B5F94F6BD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
	}

	::System::Void set_FloorBakedInfoConfig(::Class_1_B27A28B5F94F6BD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B27A28B5F94F6BD2*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_FLOORBAKEDINFOCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::EraFlipperConfig* get_EraFlipConfig()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_ERAFLIPCONFIG_OFFSET))(this);
	}

	::System::Void set_EraFlipConfig(::RPG::GameCore::EraFlipperConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_ERAFLIPCONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::MapRotationInfo* get_MapRotationInfo()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_MAPROTATIONINFO_OFFSET))(this);
	}

	::System::Void set_MapRotationInfo(::RPG::Client::MapRotationInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_MAPROTATIONINFO_OFFSET))(this, a1);
	}

	::Struct_2_F1DDB6E36FBC609F get_MapFiveDimInfo()
	{
		return ((::Struct_2_F1DDB6E36FBC609F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_MAPFIVEDIMINFO_OFFSET))(this);
	}

	::System::Void set_MapFiveDimInfo(::Struct_2_F1DDB6E36FBC609F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F1DDB6E36FBC609F))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_MAPFIVEDIMINFO_OFFSET))(this, a1);
	}

	::System::Boolean get_HasLevelLittleGame()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_HASLEVELLITTLEGAME_OFFSET))(this);
	}

	::System::Void set_HasLevelLittleGame(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_HASLEVELLITTLEGAME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Method_1_C82F36068060921E()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_C82F36068060921E_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_544F3731CA7A73F4()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_544F3731CA7A73F4_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_D65D6257FB73E1EC()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_D65D6257FB73E1EC_OFFSET))(this);
	}

	::System::UInt32 get_DimensionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONID_OFFSET))(this);
	}

	::Class_1_301C5A497102AC7F* get_FloorConstValues()
	{
		return ((::Class_1_301C5A497102AC7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_FLOORCONSTVALUES_OFFSET))(this);
	}

	::System::Void set_FloorConstValues(::Class_1_301C5A497102AC7F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_301C5A497102AC7F*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_FLOORCONSTVALUES_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_C0C90F8901683665()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_C0C90F8901683665_OFFSET))(this);
	}

	::System::String* get_EnvironmentProfilePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
	}

	::System::Void set_EnvironmentProfilePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_ENVIRONMENTPROFILEPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6ABA6A7D3FD8E04E()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_6ABA6A7D3FD8E04E_OFFSET))(this);
	}
};
