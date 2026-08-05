#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF1F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSkinSetPageController_Context_TypeDefinitionIndex = 42139;

	class UIAvatarSkinSetPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ComboID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
