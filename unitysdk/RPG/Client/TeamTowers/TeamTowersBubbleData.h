#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBUBBLEDATA_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x18577140)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBUBBLEDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x18577130)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBUBBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18577090)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBubbleData_TypeDefinitionIndex = 75051;

	class TeamTowersBubbleData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Content_k__BackingField; // 0x10
		::System::Single _Duration_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBUBBLEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBUBBLEDATA_GET_DURATION_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBUBBLEDATA_GET_CONTENT_OFFSET))(this);
		}
	};
}
