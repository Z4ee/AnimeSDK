#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"

#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_GET_RAIDCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x173A5EF0)
#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x173A5EA0)
#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x173A5CE0)
#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_SET_RAIDCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x173A5F00)
#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_SHOWCOLLECTIONNEW_OFFSET UNITYSDK_OFFSET(0x173A5E10)
#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173A5C40)
#define RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x173A5C50)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentRaidCollectionActivityData_TypeDefinitionIndex = 63784;

	class ResidentRaidCollectionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::GameCore::RaidCollectionType _RaidCollectionType_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean ShowCollectionNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_SHOWCOLLECTIONNEW_OFFSET))(this);
		}

		::RPG::GameCore::RaidCollectionType get_RaidCollectionType()
		{
			return ((::RPG::GameCore::RaidCollectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_GET_RAIDCOLLECTIONTYPE_OFFSET))(this);
		}

		::System::Void set_RaidCollectionType(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTRAIDCOLLECTIONACTIVITYDATA_SET_RAIDCOLLECTIONTYPE_OFFSET))(this, a1);
		}
	};
}
