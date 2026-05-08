#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UICOMMENTINFOGOODSROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x158D4640)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentInfoGoodsRowWidgetContext_TypeDefinitionIndex = 63830;

	class UICommentInfoGoodsRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* GoodName; // 0x28
		::System::String* GoodNum; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOGOODSROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
