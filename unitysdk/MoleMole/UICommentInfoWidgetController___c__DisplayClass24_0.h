#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICommentInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E863B0)
#define MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___C__DISPLAYCLASS24_0__SETGENERALLEVELID_B__0_OFFSET UNITYSDK_OFFSET(0x14E863C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICommentInfoWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 38013;

	class UICommentInfoWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* sectionList; // 0x10
		::MoleMole::UICommentInfoWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetGeneralLevelID_b__0(::System::Int32 curPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMMENTINFOWIDGETCONTROLLER___C__DISPLAYCLASS24_0__SETGENERALLEVELID_B__0_OFFSET))(this, curPage);
		}
	};
}
