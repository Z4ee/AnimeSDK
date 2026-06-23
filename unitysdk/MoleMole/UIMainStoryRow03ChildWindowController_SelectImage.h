#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryRow03ChildWindowController; }
namespace MoleMole { class UIMainStorySubitemRowChildWindowControllerV2; }

#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_DOALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0x155E01F0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SELECT_OFFSET UNITYSDK_OFFSET(0x155E0580)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SETALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0x155DFE80)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SETITEM_1_OFFSET UNITYSDK_OFFSET(0x155DFE20)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SETITEM_OFFSET UNITYSDK_OFFSET(0x155DFDC0)
#define MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x155E0E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryRow03ChildWindowController_SelectImage_TypeDefinitionIndex = 85163;

	class UIMainStoryRow03ChildWindowController_SelectImage : public ::System::Object
	{
	public:
		::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* _subItem; // 0x10
		::MoleMole::UIMainStoryRow03ChildWindowController* _mainItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void SetItem(::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* subItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SETITEM_OFFSET))(this, subItem);
		}

		::System::Void SetItem_1(::MoleMole::UIMainStoryRow03ChildWindowController* mainItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryRow03ChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SETITEM_1_OFFSET))(this, mainItem);
		}

		::System::Void SetAlphaOffset(::System::Single alphaTiling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SETALPHAOFFSET_OFFSET))(this, alphaTiling);
		}

		::System::Void DOAlphaOffset(::System::Single alphaTiling, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_DOALPHAOFFSET_OFFSET))(this, alphaTiling, duration);
		}

		::System::Void Select(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYROW03CHILDWINDOWCONTROLLER_SELECTIMAGE_SELECT_OFFSET))(this, isSelect);
		}
	};
}
