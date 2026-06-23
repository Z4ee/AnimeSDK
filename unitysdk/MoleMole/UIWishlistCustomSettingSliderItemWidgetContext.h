#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLIDERITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x122D6800)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomSettingSliderItemWidgetContext_TypeDefinitionIndex = 56382;

	class UIWishlistCustomSettingSliderItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath IconPath; // 0x28
		::System::Action_1<::System::UInt32>* OnSliderValueChanged; // 0x38
		::System::UInt32 MinValue; // 0x40
		::System::UInt32 InitValue; // 0x44
		::System::UInt32 MaxValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMSETTINGSLIDERITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
