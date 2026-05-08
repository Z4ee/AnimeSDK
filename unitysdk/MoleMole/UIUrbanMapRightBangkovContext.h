#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UrbanMapBangkovScrollViewContext; }

#define MOLEMOLE_UIURBANMAPRIGHTBANGKOVCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC470)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightBangkovContext_TypeDefinitionIndex = 68137;

	class UIUrbanMapRightBangkovContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UrbanMapBangkovScrollViewContext* ScrollViewContext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTBANGKOVCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
