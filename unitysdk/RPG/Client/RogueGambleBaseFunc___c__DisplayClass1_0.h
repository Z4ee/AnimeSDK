#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueGambleGroupData; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC7879A0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__DISPLAYCLASS1_0__SETBINGODATA_B__0_OFFSET UNITYSDK_OFFSET(0xC7883F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc___c__DisplayClass1_0_TypeDefinitionIndex = 62869;

	class RogueGambleBaseFunc___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetBingoData_b__0(::RPG::Client::RogueGambleGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueGambleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC___C__DISPLAYCLASS1_0__SETBINGODATA_B__0_OFFSET))(this, a1);
		}
	};
}
