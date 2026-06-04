#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_4866E6AA21EEA333_OFFSET UNITYSDK_OFFSET(0x198EE720)
#define RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_8E9FF66750686E24_OFFSET UNITYSDK_OFFSET(0x198EE6A0)
#define RPG_GAMECORE_MATCHTHREECREATELEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x198EE6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeCreateLevel_TypeDefinitionIndex = 19837;

	class MatchThreeCreateLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LevelID; // 0x18
		::System::UInt32 Mode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E9FF66750686E24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeCreateLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeCreateLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_8E9FF66750686E24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4866E6AA21EEA333(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeCreateLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeCreateLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_4866E6AA21EEA333_OFFSET))(a1, a2);
		}
	};
}
