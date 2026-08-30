#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::UI3DGame { class ChimeraBattleNPCView; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12D400)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW___C__DISPLAYCLASS0_0__LEAVE_B__0_OFFSET UNITYSDK_OFFSET(0x1B12D900)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleNPCView___c__DisplayClass0_0_TypeDefinitionIndex = 75359;

	class ChimeraBattleNPCView___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent* evtHandler; // 0x10
		::RPG::Client::UI3DGame::ChimeraBattleNPCView* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Leave_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW___C__DISPLAYCLASS0_0__LEAVE_B__0_OFFSET))(this);
		}
	};
}
