#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_4866E6AA21EEA333_OFFSET UNITYSDK_OFFSET(0x1BD2EDE0)
#define RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_8C1346E5C34E539A_OFFSET UNITYSDK_OFFSET(0x1BD2EDA0)
#define RPG_GAMECORE_MATCHTHREECREATELEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2EDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeCreateLevel_TypeDefinitionIndex = 20197;

	class MatchThreeCreateLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LevelID; // 0x18
		::System::UInt32 Mode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C1346E5C34E539A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeCreateLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeCreateLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_8C1346E5C34E539A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4866E6AA21EEA333(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeCreateLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeCreateLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREECREATELEVEL_METHOD_3_4866E6AA21EEA333_OFFSET))(a1, a2);
		}
	};
}
