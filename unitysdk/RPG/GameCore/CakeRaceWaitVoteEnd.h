#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEWAITVOTEEND_METHOD_3_E7E91CD387C767DA_OFFSET UNITYSDK_OFFSET(0x1B707C20)
#define RPG_GAMECORE_CAKERACEWAITVOTEEND_METHOD_3_EB835F944A4CAC37_OFFSET UNITYSDK_OFFSET(0x1B707B50)
#define RPG_GAMECORE_CAKERACEWAITVOTEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B707C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitVoteEnd_TypeDefinitionIndex = 23446;

	class CakeRaceWaitVoteEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITVOTEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB835F944A4CAC37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitVoteEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitVoteEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITVOTEEND_METHOD_3_EB835F944A4CAC37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E7E91CD387C767DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitVoteEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitVoteEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITVOTEEND_METHOD_3_E7E91CD387C767DA_OFFSET))(a1, a2);
		}
	};
}
