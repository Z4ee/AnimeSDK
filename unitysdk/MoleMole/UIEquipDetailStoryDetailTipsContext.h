#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIEQUIPDETAILSTORYDETAILTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED7070)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDetailStoryDetailTipsContext_TypeDefinitionIndex = 39495;

	class UIEquipDetailStoryDetailTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::String* mes; // 0x30
		::UnityEngine::Vector2 ScreenPosLeftBottom; // 0x38
		::UnityEngine::Vector2 OriginalSize; // 0x40
		::UnityEngine::Vector2 ScreenPosRightTop; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILSTORYDETAILTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
