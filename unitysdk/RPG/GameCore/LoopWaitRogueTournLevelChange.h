#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_6D81CB69BF0ACB4A_OFFSET UNITYSDK_OFFSET(0x1D215D60)
#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_7363549A14E78BA6_OFFSET UNITYSDK_OFFSET(0x1D215DB0)
#define RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRogueTournLevelChange_TypeDefinitionIndex = 20991;

	class LoopWaitRogueTournLevelChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D81CB69BF0ACB4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRogueTournLevelChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRogueTournLevelChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_6D81CB69BF0ACB4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7363549A14E78BA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRogueTournLevelChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRogueTournLevelChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNLEVELCHANGE_METHOD_3_7363549A14E78BA6_OFFSET))(a1, a2);
		}
	};
}
