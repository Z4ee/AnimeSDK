#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreePiece; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C25F110)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS19_0__DOMATCHPIECE_B__0_OFFSET UNITYSDK_OFFSET(0x1C2680E0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS19_0__DOMATCHPIECE_B__1_OFFSET UNITYSDK_OFFSET(0x1C268100)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass19_0_TypeDefinitionIndex = 65951;

	class MatchThreeBoard___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreePiece* piece; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::MatchThreeBoard* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoMatchPiece_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS19_0__DOMATCHPIECE_B__0_OFFSET))(this);
		}

		::System::Void _DoMatchPiece_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS19_0__DOMATCHPIECE_B__1_OFFSET))(this);
		}
	};
}
