#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1864D5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTotalRewardPageController_Context_TypeDefinitionIndex = 84751;

	class UIAbyssTotalRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 groupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTOTALREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
