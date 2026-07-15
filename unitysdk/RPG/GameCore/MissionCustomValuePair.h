#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionCustomValuePairType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR_METHOD_2_61C7F6C564FCBF93_OFFSET UNITYSDK_OFFSET(0x1AF69400)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF695A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValuePair_TypeDefinitionIndex = 18242;

	class MissionCustomValuePair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionCustomValuePairType Type; // 0x10
		::System::UInt32 DirectValue; // 0x14
		::System::UInt32 MainMissionID; // 0x18
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61C7F6C564FCBF93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValuePair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValuePair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEPAIR_METHOD_2_61C7F6C564FCBF93_OFFSET))(a1, a2);
		}
	};
}
