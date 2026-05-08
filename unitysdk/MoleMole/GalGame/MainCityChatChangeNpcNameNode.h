#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1604C8A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1604C890)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeNpcNameNode_TypeDefinitionIndex = 66756;

	class MainCityChatChangeNpcNameNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* NameKey; // 0x18
		::System::Int32 TagID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
