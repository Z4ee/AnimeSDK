#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13443E50)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_0__REFRESHMATERIALPREVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x13443E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass28_0_TypeDefinitionIndex = 40273;

	class UIWishlistMainPageController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Int32 diffNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialPreview_b__1(::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_0__REFRESHMATERIALPREVIEW_B__1_OFFSET))(this, itemId);
		}
	};
}
