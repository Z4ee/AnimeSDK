#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWIMAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D63C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowImageWidgetContext_TypeDefinitionIndex = 40813;

	class UIUrbanMapRightListRowImageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath Icon; // 0x28
		::System::String* Title; // 0x38
		::System::Int64 TimeCountDown; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWIMAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
