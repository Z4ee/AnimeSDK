#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10D725E0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_3__REFRESHMATERIALPREVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x10D725F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass28_3_TypeDefinitionIndex = 40275;

	class UIWishlistMainPageController___c__DisplayClass28_3 : public ::System::Object
	{
	public:
		::System::Int32 diffNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_3__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialPreview_b__7(::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_3__REFRESHMATERIALPREVIEW_B__7_OFFSET))(this, itemId);
		}
	};
}
