#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPCOLLECTLISTROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF629A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapCollectListRowWidgetContext_TypeDefinitionIndex = 65621;

	class UIUrbanMapCollectListRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Icon; // 0x28
		::System::String* DescText; // 0x30
		::System::Int32 RightNum; // 0x38
		::System::Int32 LeftNum; // 0x3C
		::System::Int32 SpecialId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPCOLLECTLISTROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
