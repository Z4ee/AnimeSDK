#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightMazeBuffEnhanceConfigRow; }
namespace RPG::GameCore { class GridFightTraitBonusConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSDESC_OFFSET UNITYSDK_OFFSET(0xD353A20)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSNAME_OFFSET UNITYSDK_OFFSET(0xD353D50)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xD353C20)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD353960)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSTYPE_OFFSET UNITYSDK_OFFSET(0xD353910)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_MAZEBUFFNAME_OFFSET UNITYSDK_OFFSET(0xD353E40)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_PARAM1_OFFSET UNITYSDK_OFFSET(0xD3539B0)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET__MAZEBUFFENHANCECONFIGROW_OFFSET UNITYSDK_OFFSET(0xD353B50)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD353900)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitBonusConfig_TypeDefinitionIndex = 65462;

	class GridFightTraitBonusConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitBonusConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightTraitBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitBonusType get_BonusType()
		{
			return ((::RPG::GameCore::GridFightTraitBonusType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSTYPE_OFFSET))(this);
		}

		::System::UInt32 get_BonusThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSTHRESHOLD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Param1()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_PARAM1_OFFSET))(this);
		}

		::System::String* get_BonusDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSDESC_OFFSET))(this);
		}

		::System::String* get_BonusSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSSIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_BonusName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSNAME_OFFSET))(this);
		}

		::System::String* get_MazeBuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_MAZEBUFFNAME_OFFSET))(this);
		}

		::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow* get__MazeBuffEnhanceConfigRow()
		{
			return ((::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET__MAZEBUFFENHANCECONFIGROW_OFFSET))(this);
		}
	};
}
