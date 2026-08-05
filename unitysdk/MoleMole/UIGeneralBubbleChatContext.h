#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_UIGENERALBUBBLECHATCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D97630)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBubbleChatContext_TypeDefinitionIndex = 43778;

	class UIGeneralBubbleChatContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Vector2 position; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUBBLECHATCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
