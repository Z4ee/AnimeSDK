#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16D49330)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D49320)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorLiveHouseFansUpNode_TypeDefinitionIndex = 59445;

	class MainCityChatEditorLiveHouseFansUpNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 headid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
