#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17597220)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreRewardPageController_Context_TypeDefinitionIndex = 59869;

	class UIRoarinStoreRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SelectIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
