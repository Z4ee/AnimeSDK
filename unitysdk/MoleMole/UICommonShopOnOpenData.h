#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOMMONSHOPONOPENDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA3C90)

namespace MoleMole
{
	inline static constexpr unsigned int UICommonShopOnOpenData_TypeDefinitionIndex = 48121;

	class UICommonShopOnOpenData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SelectItemId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMONSHOPONOPENDATA__CTOR_OFFSET))(this);
		}
	};
}
