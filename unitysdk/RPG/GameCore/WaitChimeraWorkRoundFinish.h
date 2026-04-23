#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_METHOD_3_21C9D00BDDBD71EB_OFFSET UNITYSDK_OFFSET(0x190F9CA0)
#define RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_METHOD_3_5727CE9F04003CB2_OFFSET UNITYSDK_OFFSET(0x190F9D20)
#define RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x190F9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitChimeraWorkRoundFinish_TypeDefinitionIndex = 20580;

	class WaitChimeraWorkRoundFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 WorkRoundID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21C9D00BDDBD71EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitChimeraWorkRoundFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitChimeraWorkRoundFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_METHOD_3_21C9D00BDDBD71EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5727CE9F04003CB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitChimeraWorkRoundFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitChimeraWorkRoundFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_METHOD_3_5727CE9F04003CB2_OFFSET))(a1, a2);
		}
	};
}
