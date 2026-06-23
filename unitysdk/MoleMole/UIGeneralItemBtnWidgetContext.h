#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0AB14FA7677844A2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALITEMBTNWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187F5390)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemBtnWidgetContext_TypeDefinitionIndex = 66609;

	class UIGeneralItemBtnWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* tipsText; // 0x28
		::UnityEngine::Events::UnityAction* clickAction; // 0x30
		::System::Int32 itemID; // 0x38
		::System::Boolean canClick; // 0x3C
		::Enum_3_0AB14FA7677844A2 showType; // 0x40
		::System::Int32 consume; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMBTNWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
