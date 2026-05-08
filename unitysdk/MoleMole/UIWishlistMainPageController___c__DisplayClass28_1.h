#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE489FB0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_1__REFRESHMATERIALPREVIEW_B__3_OFFSET UNITYSDK_OFFSET(0xE489FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass28_1_TypeDefinitionIndex = 40276;

	class UIWishlistMainPageController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::System::Int32 diffNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialPreview_b__3(::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_1__REFRESHMATERIALPREVIEW_B__3_OFFSET))(this, itemId);
		}
	};
}
