#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWPROGRESSWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152DEC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowProgressWidgetContext_TypeDefinitionIndex = 60242;

	class UIUrbanMapRightListRowProgressWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::Int32 LeftNum; // 0x30
		::System::Int32 RightNum; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWPROGRESSWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
