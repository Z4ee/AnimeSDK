#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x17E7EA80)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7EA70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayAnimationNode_TypeDefinitionIndex = 82042;

	class MainCityChatPlayAnimationNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 TemplateID; // 0x18
		::System::Int32 AvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
