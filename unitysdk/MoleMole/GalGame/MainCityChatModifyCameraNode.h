#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::GalGame { class MainCityChatCameraParam; }

#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x13A90B50)
#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A90B30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatModifyCameraNode_TypeDefinitionIndex = 85622;

	class MainCityChatModifyCameraNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::MainCityChatCameraParam* CameraParam; // 0x18
		::MoleMole::Cameras::CameraTrackBlending* BlendParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
