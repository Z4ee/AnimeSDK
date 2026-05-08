#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x170CF6A0)
#define MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170CF690)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatChangeEffectStateNode_TypeDefinitionIndex = 47807;

	class ChatChangeEffectStateNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* StateKey; // 0x18
		::System::String* MemberID; // 0x20
		::System::Int32 NpcTagID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
