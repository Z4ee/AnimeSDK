#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeCopyPieceEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF72670)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBF72680)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xBF72750)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0xBF72720)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass35_0_TypeDefinitionIndex = 61614;

	class MatchThreeBoard___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::Class_1_1D65C84443DC695F* pieceData; // 0x10
		::System::Action* onFinish; // 0x18
		::System::Action* __9__2; // 0x20
		::RPG::Client::MatchThreeCopyPieceEffect* effect; // 0x28
		::RPG::Client::MatchThreeBoard* __4__this; // 0x30
		::UnityEngine::Vector2Int to; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayCopyPieceEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _DoPlayCopyPieceEffect_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__2_OFFSET))(this);
		}

		::System::Void _DoPlayCopyPieceEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__1_OFFSET))(this);
		}
	};
}
