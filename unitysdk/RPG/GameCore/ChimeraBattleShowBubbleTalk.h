#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_METHOD_3_6504539A644013FD_OFFSET UNITYSDK_OFFSET(0x187F3A60)
#define RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_METHOD_3_D454468BA59521EF_OFFSET UNITYSDK_OFFSET(0x187F2550)
#define RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x187F2540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowBubbleTalk_TypeDefinitionIndex = 15044;

	class ChimeraBattleShowBubbleTalk : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* TalkAttachPoint; // 0x20
		::Il2CppArray<::RPG::GameCore::ChimeraTalkContent*>* TalkContents; // 0x28
		::System::Single ShowTime; // 0x30
		::RPG::GameCore::ChimeraTalkPopDirection Direction; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6504539A644013FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_METHOD_3_6504539A644013FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D454468BA59521EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleShowBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_METHOD_3_D454468BA59521EF_OFFSET))(a1, a2);
		}
	};
}
