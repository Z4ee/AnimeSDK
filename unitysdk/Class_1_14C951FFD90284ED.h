#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_656B4378A6148CC6;
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapTeleportData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_14C951FFD90284ED_METHOD_1_092B48FCD99BC3AD_OFFSET UNITYSDK_OFFSET(0x8C2F520)
#define CLASS_1_14C951FFD90284ED_METHOD_1_1EBE673CC8F565B9_OFFSET UNITYSDK_OFFSET(0x8C2F660)
#define CLASS_1_14C951FFD90284ED_METHOD_1_27C42FC0F4F0DF73_OFFSET UNITYSDK_OFFSET(0x8C2F7E0)
#define CLASS_1_14C951FFD90284ED_METHOD_1_34E07BFE85BAB363_OFFSET UNITYSDK_OFFSET(0x8C2F9C0)
#define CLASS_1_14C951FFD90284ED_METHOD_1_425E594751911F8E_OFFSET UNITYSDK_OFFSET(0x8C2FC40)
#define CLASS_1_14C951FFD90284ED_METHOD_1_46016015F2B6F8E7_OFFSET UNITYSDK_OFFSET(0x8C2F870)
#define CLASS_1_14C951FFD90284ED_METHOD_1_474BCA46912BF34B_OFFSET UNITYSDK_OFFSET(0x8C2FCD0)
#define CLASS_1_14C951FFD90284ED_METHOD_1_4DF313FF84519AF8_OFFSET UNITYSDK_OFFSET(0x8C2FB40)
#define CLASS_1_14C951FFD90284ED_METHOD_1_6B192F98A4BD557F_OFFSET UNITYSDK_OFFSET(0x8C2FA80)
#define CLASS_1_14C951FFD90284ED_METHOD_1_75CCD5874DDE296B_OFFSET UNITYSDK_OFFSET(0x8C2F900)
#define CLASS_1_14C951FFD90284ED_METHOD_1_84BC8F8CE7872F39_OFFSET UNITYSDK_OFFSET(0x8C2F5B0)
#define CLASS_1_14C951FFD90284ED_METHOD_1_98B4083071ED6C52_OFFSET UNITYSDK_OFFSET(0x8C2F720)
#define CLASS_1_14C951FFD90284ED_METHOD_1_9A3E1C173079057E_OFFSET UNITYSDK_OFFSET(0x8C2F4C0)
#define CLASS_1_14C951FFD90284ED_METHOD_1_D7FBE8F46D7F3CB8_OFFSET UNITYSDK_OFFSET(0x8C2FDB0)

inline static constexpr unsigned int Class_1_14C951FFD90284ED_TypeDefinitionIndex = 61260;

class Class_1_14C951FFD90284ED : public ::System::Object
{
public:
	static ::System::Boolean Method_1_9A3E1C173079057E(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_9A3E1C173079057E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_092B48FCD99BC3AD(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_092B48FCD99BC3AD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_84BC8F8CE7872F39(::RPG::Client::MapEntityDef* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_84BC8F8CE7872F39_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1EBE673CC8F565B9(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_1EBE673CC8F565B9_OFFSET))(a1);
	}

	static ::RPG::Client::MapTeleportData* Method_1_98B4083071ED6C52(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapPropDef* a5)
	{
		return ((::RPG::Client::MapTeleportData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_98B4083071ED6C52_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_27C42FC0F4F0DF73(::RPG::Client::MapTeleportData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MapTeleportData*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_27C42FC0F4F0DF73_OFFSET))(a1);
	}

	static ::System::Void Method_1_46016015F2B6F8E7(::RPG::Client::MapTrackMonsterData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_46016015F2B6F8E7_OFFSET))(a1);
	}

	static ::RPG::Client::MapMappingInfoData* Method_1_75CCD5874DDE296B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapPropDef* a5)
	{
		return ((::RPG::Client::MapMappingInfoData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_75CCD5874DDE296B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::MapMappingInfoData* Method_1_34E07BFE85BAB363(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapNpcDef* a5)
	{
		return ((::RPG::Client::MapMappingInfoData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_34E07BFE85BAB363_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::MapMappingInfoData* Method_1_6B192F98A4BD557F(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Class_1_656B4378A6148CC6* a5)
	{
		return ((::RPG::Client::MapMappingInfoData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_6B192F98A4BD557F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::MapMappingInfoData* Method_1_4DF313FF84519AF8(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::MapPropDef* a5, ::RPG::Client::FindChestData* a6, ::System::UInt32 a7)
	{
		return ((::RPG::Client::MapMappingInfoData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_4DF313FF84519AF8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_425E594751911F8E(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_425E594751911F8E_OFFSET))(a1);
	}

	static ::RPG::Client::MapMissionData* Method_1_474BCA46912BF34B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::SubMissionData* a5, ::Class_1_656B4378A6148CC6* a6)
	{
		return ((::RPG::Client::MapMissionData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::SubMissionData*, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_474BCA46912BF34B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::RPG::Client::MapTrackMonsterData* Method_1_D7FBE8F46D7F3CB8(::System::UInt32 a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::RPG::Client::MapTrackMonsterData*(*)(::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_14C951FFD90284ED_METHOD_1_D7FBE8F46D7F3CB8_OFFSET))(a1, a2);
	}
};
