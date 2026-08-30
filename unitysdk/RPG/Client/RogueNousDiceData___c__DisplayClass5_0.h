#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }

#define RPG_CLIENT_ROGUENOUSDICEDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F70C0)
#define RPG_CLIENT_ROGUENOUSDICEDATA___C__DISPLAYCLASS5_0__GETBRANCHESBYGENRE_B__0_OFFSET UNITYSDK_OFFSET(0x1B9F7CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousDiceData___c__DisplayClass5_0_TypeDefinitionIndex = 66951;

	class RogueNousDiceData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueNousDiceBranchTagRow* row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBranchesByGenre_b__0(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA___C__DISPLAYCLASS5_0__GETBRANCHESBYGENRE_B__0_OFFSET))(this, a1);
		}
	};
}
