#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletContainer_1.h"

class Class_0_16E4307DCC419505_1080;
namespace RPG::GameCore::Booklet { class DecorativeContainerConfig; }

#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18CA3330)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18CA34D0)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18CA30F0)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18CA3160)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18CA3650)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18CA3710)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x18CA32D0)
#define RPG_CLIENT_BOOKLETDECORATIVECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA37E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletDecorativeContainer_TypeDefinitionIndex = 69113;

	class BookletDecorativeContainer : public ::RPG::Client::BookletContainer_1<::RPG::GameCore::Booklet::DecorativeContainerConfig*>
	{
	public:
		::Class_0_16E4307DCC419505_1080* Field_8_0; // 0x88
		::System::Boolean Field_8_1; // 0x90
		::System::Boolean Field_8_2; // 0x91
		::System::Boolean Field_8_3; // 0x92
		::System::Boolean Field_8_4; // 0x93

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
