#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED9C20)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_2__REFRESHMATERIALPREVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x15ED9C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass28_2_TypeDefinitionIndex = 65464;

	class UIWishlistMainPageController___c__DisplayClass28_2 : public ::System::Object
	{
	public:
		::System::Int32 diffNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterialPreview_b__4(::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS28_2__REFRESHMATERIALPREVIEW_B__4_OFFSET))(this, itemId);
		}
	};
}
