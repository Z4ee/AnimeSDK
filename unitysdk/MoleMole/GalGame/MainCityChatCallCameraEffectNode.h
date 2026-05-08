#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/MoleMole/Timeline/CallCameraEffectActionType.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x170D0470)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170D0460)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCallCameraEffectNode_TypeDefinitionIndex = 54607;

	class MainCityChatCallCameraEffectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* effectKey; // 0x18
		::MoleMole::Config::ScreenEffectType effectType; // 0x20
		::MoleMole::Config::ShaderCustomType shaderCustomType; // 0x24
		::MoleMole::Timeline::CallCameraEffectActionType actionType; // 0x28
		::System::Boolean isEndByKey; // 0x2C
		::System::Boolean isOneFrameEnd; // 0x2D
		::System::Boolean isInterruptType; // 0x2E
		::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType callType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
