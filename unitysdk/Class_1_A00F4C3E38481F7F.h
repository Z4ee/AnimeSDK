#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/Struct_2_F1DDB6E36FBC609F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_63F17A19771E3B47;
class Class_1_C06752CD2A701BDD;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelDimensionBakedInfo; }
namespace RPG::GameCore { class LevelDimensionCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
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

#define CLASS_1_A00F4C3E38481F7F_GET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x9A4DF80)
#define CLASS_1_A00F4C3E38481F7F_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9A4E0B0)
#define CLASS_1_A00F4C3E38481F7F_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x9A4E100)
#define CLASS_1_A00F4C3E38481F7F_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x9A4DFE0)
#define CLASS_1_A00F4C3E38481F7F_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x9A4DFC0)
#define CLASS_1_A00F4C3E38481F7F_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x9A4E0C0)
#define CLASS_1_A00F4C3E38481F7F_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x9A4DF60)
#define CLASS_1_A00F4C3E38481F7F_GET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x9A4E050)
#define CLASS_1_A00F4C3E38481F7F_GET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x9A4E020)
#define CLASS_1_A00F4C3E38481F7F_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x9A4E000)
#define CLASS_1_A00F4C3E38481F7F_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x9A4DFA0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x9A4BF80)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_00F69ACA1AF68B42_OFFSET UNITYSDK_OFFSET(0x9A49D80)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_0D1CE77C2D731696_OFFSET UNITYSDK_OFFSET(0x9A4DBA0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_0D58F40F720F91C0_OFFSET UNITYSDK_OFFSET(0x9A4D610)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_2A7F0BD4A5C44AFA_OFFSET UNITYSDK_OFFSET(0x9A4D8D0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9A4AD30)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_31FC8552DE7857A2_OFFSET UNITYSDK_OFFSET(0x9A4D550)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_384A952E81BD95C6_OFFSET UNITYSDK_OFFSET(0x9A4D750)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_3C29C2F0B4E2C894_OFFSET UNITYSDK_OFFSET(0x9A4E120)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_486E62A68E7F379E_OFFSET UNITYSDK_OFFSET(0x9A4E090)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x9A497C0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_5DA82BCB244B8BCC_OFFSET UNITYSDK_OFFSET(0x9A4D060)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_5F92F94B373BFDF0_OFFSET UNITYSDK_OFFSET(0x9A4E080)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_6FA534480ABD7781_OFFSET UNITYSDK_OFFSET(0x9A4D0F0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_7217040CE08635A4_OFFSET UNITYSDK_OFFSET(0x9A4ADF0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_7299E1B16BDE8F93_OFFSET UNITYSDK_OFFSET(0x9A4D7F0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_77F1D81FEA38965A_OFFSET UNITYSDK_OFFSET(0x9A4E070)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x9A49500)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_8BCB3191E6BEE7CB_1_OFFSET UNITYSDK_OFFSET(0x9A4CBE0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x9A4A490)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_924160ACC90F4A8F_OFFSET UNITYSDK_OFFSET(0x9A4E0E0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_93F582E578D1BB08_OFFSET UNITYSDK_OFFSET(0x9A4DAF0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_A44AB0BF69D3EF98_OFFSET UNITYSDK_OFFSET(0x9A4D940)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_B020D13B8F12A13B_OFFSET UNITYSDK_OFFSET(0x9A4D410)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x9A4B100)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_C93EBD7B6B94F61E_OFFSET UNITYSDK_OFFSET(0x9A4DD70)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x9A495F0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_CE6B0E8F4BC0C812_OFFSET UNITYSDK_OFFSET(0x9A4D2D0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_D119805248BD60FC_OFFSET UNITYSDK_OFFSET(0x9A48E90)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x9A4A3B0)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_DA55ED8932B0AEC4_OFFSET UNITYSDK_OFFSET(0x9A4CF80)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x9A49440)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_E2C50A34F75A039D_OFFSET UNITYSDK_OFFSET(0x9A4D860)
#define CLASS_1_A00F4C3E38481F7F_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x9A4A850)
#define CLASS_1_A00F4C3E38481F7F_SET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x9A4DF90)
#define CLASS_1_A00F4C3E38481F7F_SET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x9A4E110)
#define CLASS_1_A00F4C3E38481F7F_SET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x9A4DFF0)
#define CLASS_1_A00F4C3E38481F7F_SET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x9A4DFD0)
#define CLASS_1_A00F4C3E38481F7F_SET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x9A4E0D0)
#define CLASS_1_A00F4C3E38481F7F_SET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x9A4DF70)
#define CLASS_1_A00F4C3E38481F7F_SET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x9A4E060)
#define CLASS_1_A00F4C3E38481F7F_SET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x9A4E040)
#define CLASS_1_A00F4C3E38481F7F_SET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x9A4E010)
#define CLASS_1_A00F4C3E38481F7F_SET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x9A4DFB0)
#define CLASS_1_A00F4C3E38481F7F__CTOR_OFFSET UNITYSDK_OFFSET(0x9A49100)

inline static constexpr unsigned int Class_1_A00F4C3E38481F7F_TypeDefinitionIndex = 68851;

class Class_1_A00F4C3E38481F7F : public ::System::Object
{
public:
	::Struct_2_F1DDB6E36FBC609F _MapFiveDimInfo_k__BackingField; // 0x10
	::RPG::GameCore::LevelFloorBakedInfo* _FloorBakedInfoConfig_k__BackingField; // 0x28
	::RPG::Client::FloorSavedData* _FloorSavedValues_k__BackingField; // 0x30
	::RPG::Client::MapRotationInfo* _MapRotationInfo_k__BackingField; // 0x38
	::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* Field_1_19; // 0x40
	::RPG::GameCore::EraFlipperConfig* _EraFlipConfig_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Int16>* Field_1_20; // 0x50
	::Class_1_63F17A19771E3B47* Field_1_21; // 0x58
	::Class_1_C06752CD2A701BDD* _FloorConstValues_k__BackingField; // 0x60
	::RPG::GameCore::LevelDimensionBakedInfo* _DimensionBakedInfo_k__BackingField; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Field_1_11; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Field_1_10; // 0x78
	::RPG::GameCore::LevelFloorCrossMapBriefInfo* Field_1_17; // 0x80
	::RPG::GameCore::LevelNavmapConfig* _NavmapConfig_k__BackingField; // 0x88
	::System::String* _EnvironmentProfilePath_k__BackingField; // 0x90
	::RPG::GameCore::LevelDimensionCrossMapBriefInfo* Field_1_18; // 0x98
	::System::UInt32 _DimensionID_k__BackingField; // 0xA0
	::System::UInt32 Field_1_16; // 0xA4
	::System::UInt32 Field_1_13; // 0xA8
	::System::Boolean _HasLevelLittleGame_k__BackingField; // 0xAC
	::System::UInt32 Field_1_15; // 0xB0
	::System::UInt32 Field_1_14; // 0xB4

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_1_A00F4C3E38481F7F* Method_1_D119805248BD60FC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Class_1_A00F4C3E38481F7F*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_D119805248BD60FC_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_DA55ED8932B0AEC4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_DA55ED8932B0AEC4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5DA82BCB244B8BCC(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_5DA82BCB244B8BCC_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapAnchorDef* Method_1_6FA534480ABD7781()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_6FA534480ABD7781_OFFSET))(this);
	}

	::RPG::Client::MapPropDef* Method_1_CE6B0E8F4BC0C812(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_CE6B0E8F4BC0C812_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapDistrictDef* Method_1_B020D13B8F12A13B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_B020D13B8F12A13B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_31FC8552DE7857A2(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_31FC8552DE7857A2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::RPG::GameCore::RtLevelGroupInstanceCommonInfo* Method_1_0D58F40F720F91C0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RtLevelGroupInstanceCommonInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_0D58F40F720F91C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_384A952E81BD95C6(::RPG::GameCore::LevelFeatureType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelFeatureType))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_384A952E81BD95C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_00F69ACA1AF68B42(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_00F69ACA1AF68B42_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_7217040CE08635A4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_7217040CE08635A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_8BCB3191E6BEE7CB_1_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_2A7F0BD4A5C44AFA(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_2A7F0BD4A5C44AFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2C50A34F75A039D(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_E2C50A34F75A039D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7299E1B16BDE8F93(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_7299E1B16BDE8F93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93F582E578D1BB08(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_93F582E578D1BB08_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_A44AB0BF69D3EF98(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_A44AB0BF69D3EF98_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_0D1CE77C2D731696(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_0D1CE77C2D731696_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapPropDef* Method_1_C93EBD7B6B94F61E(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_C93EBD7B6B94F61E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FloorSavedData* get_FloorSavedValues()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_FLOORSAVEDVALUES_OFFSET))(this);
	}

	::System::Void set_FloorSavedValues(::RPG::Client::FloorSavedData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FloorSavedData*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_FLOORSAVEDVALUES_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelDimensionBakedInfo* get_DimensionBakedInfo()
	{
		return ((::RPG::GameCore::LevelDimensionBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_DIMENSIONBAKEDINFO_OFFSET))(this);
	}

	::System::Void set_DimensionBakedInfo(::RPG::GameCore::LevelDimensionBakedInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDimensionBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_DIMENSIONBAKEDINFO_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_NAVMAPCONFIG_OFFSET))(this);
	}

	::System::Void set_NavmapConfig(::RPG::GameCore::LevelNavmapConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_NAVMAPCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelFloorBakedInfo* get_FloorBakedInfoConfig()
	{
		return ((::RPG::GameCore::LevelFloorBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
	}

	::System::Void set_FloorBakedInfoConfig(::RPG::GameCore::LevelFloorBakedInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_FLOORBAKEDINFOCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::EraFlipperConfig* get_EraFlipConfig()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_ERAFLIPCONFIG_OFFSET))(this);
	}

	::System::Void set_EraFlipConfig(::RPG::GameCore::EraFlipperConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_ERAFLIPCONFIG_OFFSET))(this, value);
	}

	::RPG::Client::MapRotationInfo* get_MapRotationInfo()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_MAPROTATIONINFO_OFFSET))(this);
	}

	::System::Void set_MapRotationInfo(::RPG::Client::MapRotationInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_MAPROTATIONINFO_OFFSET))(this, value);
	}

	::Struct_2_F1DDB6E36FBC609F get_MapFiveDimInfo()
	{
		return ((::Struct_2_F1DDB6E36FBC609F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_MAPFIVEDIMINFO_OFFSET))(this);
	}

	::System::Void set_MapFiveDimInfo(::Struct_2_F1DDB6E36FBC609F value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F1DDB6E36FBC609F))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_MAPFIVEDIMINFO_OFFSET))(this, value);
	}

	::System::Boolean get_HasLevelLittleGame()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_HASLEVELLITTLEGAME_OFFSET))(this);
	}

	::System::Void set_HasLevelLittleGame(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_HASLEVELLITTLEGAME_OFFSET))(this, value);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Method_1_77F1D81FEA38965A()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_77F1D81FEA38965A_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_5F92F94B373BFDF0()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_5F92F94B373BFDF0_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_486E62A68E7F379E()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_486E62A68E7F379E_OFFSET))(this);
	}

	::System::UInt32 get_DimensionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_DIMENSIONID_OFFSET))(this);
	}

	::Class_1_C06752CD2A701BDD* get_FloorConstValues()
	{
		return ((::Class_1_C06752CD2A701BDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_FLOORCONSTVALUES_OFFSET))(this);
	}

	::System::Void set_FloorConstValues(::Class_1_C06752CD2A701BDD* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C06752CD2A701BDD*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_FLOORCONSTVALUES_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_924160ACC90F4A8F()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_924160ACC90F4A8F_OFFSET))(this);
	}

	::System::String* get_EnvironmentProfilePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
	}

	::System::Void set_EnvironmentProfilePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_SET_ENVIRONMENTPROFILEPATH_OFFSET))(this, value);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_3C29C2F0B4E2C894()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00F4C3E38481F7F_METHOD_1_3C29C2F0B4E2C894_OFFSET))(this);
	}
};
