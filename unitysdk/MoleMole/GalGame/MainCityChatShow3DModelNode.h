#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x129A59B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x129A5990)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShow3DModelNode_TypeDefinitionIndex = 85259;

	class MainCityChatShow3DModelNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 modelID; // 0x18
		::MoleMole::GalGame::ModelConfigTemplateType configType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
