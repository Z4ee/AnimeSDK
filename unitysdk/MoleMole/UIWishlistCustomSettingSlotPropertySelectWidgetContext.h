#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLOTPROPERTYSELECTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10A16DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomSettingSlotPropertySelectWidgetContext_TypeDefinitionIndex = 59224;

	class UIWishlistCustomSettingSlotPropertySelectWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::System::Int32, ::System::UInt32>* OnPropertySelect; // 0x28
		::System::Int32 SlotIndex; // 0x30
		::System::UInt32 InitPropertyId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLOTPROPERTYSELECTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
