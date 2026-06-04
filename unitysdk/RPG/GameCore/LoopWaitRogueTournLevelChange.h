#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_7363549A14E78BA6_OFFSET UNITYSDK_OFFSET(0x198B1EA0)
#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_F1F9317AB877F8E6_OFFSET UNITYSDK_OFFSET(0x198B1E10)
#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRogueTournLevelChange_TypeDefinitionIndex = 20067;

	class LoopWaitRogueTournLevelChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F1F9317AB877F8E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRogueTournLevelChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRogueTournLevelChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_F1F9317AB877F8E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7363549A14E78BA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRogueTournLevelChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRogueTournLevelChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_7363549A14E78BA6_OFFSET))(a1, a2);
		}
	};
}
