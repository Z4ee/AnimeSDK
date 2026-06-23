#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWHINTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1655CC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowHintContext_TypeDefinitionIndex = 46782;

	class UIUrbanMapRightListRowHintContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TitleText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWHINTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
