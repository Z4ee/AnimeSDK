#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_METHOD_3_143066BDA4059FB1_OFFSET UNITYSDK_OFFSET(0x190F9C20)
#define RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_METHOD_3_5070C73FCF241A86_OFFSET UNITYSDK_OFFSET(0x190F9C90)
#define RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x190F9C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBattleWinWithTargetCount_TypeDefinitionIndex = 20240;

	class WaitBattleWinWithTargetCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_143066BDA4059FB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleWinWithTargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleWinWithTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_METHOD_3_143066BDA4059FB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5070C73FCF241A86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleWinWithTargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleWinWithTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_METHOD_3_5070C73FCF241A86_OFFSET))(a1, a2);
		}
	};
}
