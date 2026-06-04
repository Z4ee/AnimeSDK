#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumItemSkillType.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumAreaData; }
namespace RPG::GameCore { class MuseumItemSkillConfigRow; }

#define RPG_CLIENT_MUSEUMSKILLDATA_GETBASESTATSINCPERCENT_OFFSET UNITYSDK_OFFSET(0xC21AC10)
#define RPG_CLIENT_MUSEUMSKILLDATA_GETGAINFUNDS_OFFSET UNITYSDK_OFFSET(0xC21A330)
#define RPG_CLIENT_MUSEUMSKILLDATA_GETSTATSNEEDVALUE_OFFSET UNITYSDK_OFFSET(0xC21A8A0)
#define RPG_CLIENT_MUSEUMSKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC21AD80)
#define RPG_CLIENT_MUSEUMSKILLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC21A2D0)
#define RPG_CLIENT_MUSEUMSKILLDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC21AD90)
#define RPG_CLIENT_MUSEUMSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC20B500)
#define RPG_CLIENT_MUSEUMSKILLDATA__ISSTATNEEDSKILL_OFFSET UNITYSDK_OFFSET(0xC21ABC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumSkillData_TypeDefinitionIndex = 62037;

	class MuseumSkillData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::RPG::GameCore::MuseumItemSkillType Type; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetGainFunds(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GETGAINFUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 GetStatsNeedValue(::RPG::GameCore::MuseumItemSkillType a1, ::RPG::GameCore::StuffStats a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumItemSkillType, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GETSTATSNEEDVALUE_OFFSET))(this, a1, a2);
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

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumItemSkillConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumItemSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMSKILLDATA_GET_ROW_OFFSET))(this);
		}
	};
}
