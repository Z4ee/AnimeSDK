#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D786A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListWishListRowWidgetController_Context_TypeDefinitionIndex = 62588;

	class UIUrbanMapRightListWishListRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onClick; // 0x28
		::System::String* desc; // 0x30
		::System::String* title; // 0x38
		::Foundation::AssetPath icon; // 0x40
		::System::Int32 progressLeft; // 0x50
		::System::Int32 index; // 0x54
		::System::Int32 progressRight; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
