#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_18F6BDCDAADFFFE5_OFFSET UNITYSDK_OFFSET(0x17093750)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_7B0EE62B7997CB5D_OFFSET UNITYSDK_OFFSET(0x170947F0)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17093740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCTalkBubble_TypeDefinitionIndex = 14565;

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

		static ::System::Void Method_3_7B0EE62B7997CB5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_7B0EE62B7997CB5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_18F6BDCDAADFFFE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_METHOD_3_18F6BDCDAADFFFE5_OFFSET))(a1, a2);
		}
	};
}
