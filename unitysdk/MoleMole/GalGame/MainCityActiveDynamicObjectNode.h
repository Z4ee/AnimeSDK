#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x15427930)
#define MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15427920)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityActiveDynamicObjectNode_TypeDefinitionIndex = 51035;

	class MainCityActiveDynamicObjectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 DynamicObjectId; // 0x18
		::System::Boolean IsActive; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYACTIVEDYNAMICOBJECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
