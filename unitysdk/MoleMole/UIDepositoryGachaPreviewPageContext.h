#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B80460)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryGachaPreviewPageContext_TypeDefinitionIndex = 67494;

	class UIDepositoryGachaPreviewPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* WeaponItemIds; // 0x28
		::System::Boolean NeedSort; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* weaponItemIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTEXT__CTOR_OFFSET))(this, weaponItemIds);
		}
	};
}
