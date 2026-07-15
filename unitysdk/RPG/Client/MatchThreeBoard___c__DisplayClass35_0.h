#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeCopyPieceEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A890ED0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A8971E0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1A8972B0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x1A897280)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass35_0_TypeDefinitionIndex = 62976;

	class MatchThreeBoard___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::RPG::Client::MatchThreeCopyPieceEffect* effect; // 0x20
		::Class_1_1D65C84443DC695F* pieceData; // 0x28
		::System::Action* onFinish; // 0x30
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
