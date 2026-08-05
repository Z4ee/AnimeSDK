#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x19DBC290)
#define MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBC280)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatChangeEffectStateNode_TypeDefinitionIndex = 64961;

	class ChatChangeEffectStateNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* MemberID; // 0x18
		::System::String* StateKey; // 0x20
		::System::Int32 NpcTagID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
