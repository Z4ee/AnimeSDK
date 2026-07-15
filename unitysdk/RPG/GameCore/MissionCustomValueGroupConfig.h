#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValueTuple; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIG_METHOD_2_902ABD68419940E8_OFFSET UNITYSDK_OFFSET(0x1AF68930)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIG_METHOD_2_B97B2F98E75BBCA9_OFFSET UNITYSDK_OFFSET(0x1AF68BA0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF68A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueGroupConfig_TypeDefinitionIndex = 18245;

	class MissionCustomValueGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionCustomValueTuple* MissionCustomValueTuple; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 StoryLineID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_902ABD68419940E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValueGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValueGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIG_METHOD_2_902ABD68419940E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B97B2F98E75BBCA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEGROUPCONFIG_METHOD_2_B97B2F98E75BBCA9_OFFSET))(a1, a2);
		}
	};
}
