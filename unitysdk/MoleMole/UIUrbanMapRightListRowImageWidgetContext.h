#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWIMAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A770C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowImageWidgetContext_TypeDefinitionIndex = 70668;

	class UIUrbanMapRightListRowImageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::Foundation::AssetPath Icon; // 0x30
		::System::Int64 TimeCountDown; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWIMAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
