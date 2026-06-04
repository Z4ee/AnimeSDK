#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF72520)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS30_0__DOFLYEFFECTFROMPIECETOPROP_B__0_OFFSET UNITYSDK_OFFSET(0xBF72530)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS30_0__DOFLYEFFECTFROMPIECETOPROP_B__1_OFFSET UNITYSDK_OFFSET(0xBF72550)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass30_0_TypeDefinitionIndex = 61611;

	class MatchThreeBoard___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::MatchThreeFlashEffect* effect; // 0x18
		::RPG::Client::MatchThreeBoard* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFlyEffectFromPieceToProp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS30_0__DOFLYEFFECTFROMPIECETOPROP_B__0_OFFSET))(this);
		}

		::System::Void _DoFlyEffectFromPieceToProp_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS30_0__DOFLYEFFECTFROMPIECETOPROP_B__1_OFFSET))(this);
		}
	};
}
