#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1916A060)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowBossWidgetController_Context_TypeDefinitionIndex = 41726;

	class UIUrbanMapRightListRowBossWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* IconList; // 0x28
		::System::String* LeftTextKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
