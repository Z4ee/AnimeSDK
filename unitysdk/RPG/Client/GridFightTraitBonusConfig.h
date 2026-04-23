#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightMazeBuffEnhanceConfigRow; }
namespace RPG::GameCore { class GridFightTraitBonusConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSDESC_OFFSET UNITYSDK_OFFSET(0xA5B1650)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSNAME_OFFSET UNITYSDK_OFFSET(0xA5B1A80)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA5B18A0)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA5B15B0)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_BONUSTYPE_OFFSET UNITYSDK_OFFSET(0xA5B1590)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_MAZEBUFFNAME_OFFSET UNITYSDK_OFFSET(0xA5B1BB0)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET_PARAM1_OFFSET UNITYSDK_OFFSET(0xA5B15D0)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG_GET__MAZEBUFFENHANCECONFIGROW_OFFSET UNITYSDK_OFFSET(0xA5B1830)
#define RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B1580)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitBonusConfig_TypeDefinitionIndex = 60213;

	class GridFightTraitBonusConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitBonusConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightTraitBonusConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBONUSCONFIG__CTOR_OFFSET))(this, row);
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
