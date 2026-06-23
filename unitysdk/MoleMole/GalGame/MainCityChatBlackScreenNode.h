#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x18B31CB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B31C90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBlackScreenNode_TypeDefinitionIndex = 87060;

	class MainCityChatBlackScreenNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* dialogueKeys; // 0x18
		::System::String* soundEvent; // 0x20
		::System::Int32 speakSpeed; // 0x28
		::System::Int32 delay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
