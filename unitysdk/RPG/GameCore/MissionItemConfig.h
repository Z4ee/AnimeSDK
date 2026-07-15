#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF6ADA0)
#define RPG_GAMECORE_MISSIONITEMCONFIG_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1AF6AEA0)
#define RPG_GAMECORE_MISSIONITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6AE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionItemConfig_TypeDefinitionIndex = 18235;

	class MissionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromJson(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionItemConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG_FROMJSON_OFFSET))(a1, a2);
		}
	};
}
