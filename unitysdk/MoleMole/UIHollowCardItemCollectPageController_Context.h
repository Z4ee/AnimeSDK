#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162E44E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController_Context_TypeDefinitionIndex = 62945;

	class UIHollowCardItemCollectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AbyssGroupId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
