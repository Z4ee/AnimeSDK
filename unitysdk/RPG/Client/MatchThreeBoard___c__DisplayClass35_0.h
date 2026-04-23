#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeCopyPieceEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8254F0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA82B540)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xA82B5F0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS35_0__DOPLAYCOPYPIECEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0xA82B5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass35_0_TypeDefinitionIndex = 60680;

	class MatchThreeBoard___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::Class_1_1D65C84443DC695F* pieceData; // 0x18
		::RPG::Client::MatchThreeCopyPieceEffect* effect; // 0x20
		::RPG::Client::MatchThreeBoard* __4__this; // 0x28
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
