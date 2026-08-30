#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_6A3EC3280202065A_OFFSET UNITYSDK_OFFSET(0x1E01F780)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_D1A839A20C9D1476_OFFSET UNITYSDK_OFFSET(0x1E020690)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01F770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCTalkBubble_TypeDefinitionIndex = 15699;

	class ChimeraBattleShowNPCTalkBubble : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AttachPoint; // 0x18
		::Il2CppArray<::RPG::GameCore::ChimeraTalkContent*>* TalkContents; // 0x20
		::System::Single ShowTime; // 0x28
		::RPG::GameCore::ChimeraTalkPopDirection Direction; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D1A839A20C9D1476(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_D1A839A20C9D1476_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6A3EC3280202065A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_6A3EC3280202065A_OFFSET))(a1, a2);
		}
	};
}
