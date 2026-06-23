#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF6450)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomSettingSuitSelectWidgetContext_TypeDefinitionIndex = 81005;

	class UIWishlistCustomSettingSuitSelectWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* InitSuitIds; // 0x28
		::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>* OnSuitSelect; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSUITSELECTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
