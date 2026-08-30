#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletContainer_1.h"

class Class_0_16E4307DCC419505_1136;
namespace RPG::GameCore::Booklet { class DecorativeContainerConfig; }

#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1BD96AE0)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1BD96C80)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1BD968A0)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1BD96910)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1BD96E00)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1BD96EC0)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1BD96A80)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD96F90)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletDecorativeContainer_TypeDefinitionIndex = 72313;

	class BookletDecorativeContainer : public ::RPG::Client::BookletContainer_1<::RPG::GameCore::Booklet::DecorativeContainerConfig*>
	{
	public:
		::Class_0_16E4307DCC419505_1136* IBIOKBFMEME; // 0x88
		::System::Boolean PLMHAHAODKE; // 0x90
		::System::Boolean GKJCAGPNMIO; // 0x91
		::System::Boolean AFABLCJDJML; // 0x92
		::System::Boolean GFHMMHFPKLN; // 0x93

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETDECORATIVECONTAINER_SETLAYOUTVERTICAL_OFFSET))(this);
		}
	};
}
