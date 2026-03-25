#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumItemSkillType.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumAreaData; }
namespace RPG::GameCore { class MuseumItemSkillConfigRow; }

#define RPG_CLIENT_MUSEUMSKILLDATA_GETBASESTATSINCPERCENT_OFFSET UNITYSDK_OFFSET(0x9DC6D70)
#define RPG_CLIENT_MUSEUMSKILLDATA_GETGAINFUNDS_OFFSET UNITYSDK_OFFSET(0x9DC64A0)
#define RPG_CLIENT_MUSEUMSKILLDATA_GETSTATSNEEDVALUE_OFFSET UNITYSDK_OFFSET(0x9DC69D0)
#define RPG_CLIENT_MUSEUMSKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DC6EF0)
#define RPG_CLIENT_MUSEUMSKILLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DC6440)
#define RPG_CLIENT_MUSEUMSKILLDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DC6F00)
#define RPG_CLIENT_MUSEUMSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB8900)
#define RPG_CLIENT_MUSEUMSKILLDATA__ISSTATNEEDSKILL_OFFSET UNITYSDK_OFFSET(0x9DC6D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumSkillData_TypeDefinitionIndex = 53968;

	class MuseumSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::MuseumItemSkillType Type; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA__CTOR_OFFSET))(this, id);
		}

		::System::UInt32 GetGainFunds(::RPG::Client::MuseumAreaData* museumAreaData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GETGAINFUNDS_OFFSET))(this, museumAreaData);
		}

		::System::UInt32 GetStatsNeedValue(::RPG::GameCore::MuseumItemSkillType skillType, ::RPG::GameCore::StuffStats statType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumItemSkillType, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GETSTATSNEEDVALUE_OFFSET))(this, skillType, statType);
		}

		::System::UInt32 GetBaseStatsIncPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GETBASESTATSINCPERCENT_OFFSET))(this);
		}

		::System::Boolean _IsStatNeedSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA__ISSTATNEEDSKILL_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumItemSkillConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumItemSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GET_ROW_OFFSET))(this);
		}
	};
}
