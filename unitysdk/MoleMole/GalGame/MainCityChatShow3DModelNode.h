#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x11753BE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11753BC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShow3DModelNode_TypeDefinitionIndex = 68457;

	class MainCityChatShow3DModelNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::ModelConfigTemplateType configType; // 0x18
		::System::Int32 modelID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
