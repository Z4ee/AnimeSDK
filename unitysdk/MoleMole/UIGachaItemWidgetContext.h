#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_AAC9B4B6713CDE1B;

#define MOLEMOLE_UIGACHAITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185856D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetContext_TypeDefinitionIndex = 86614;

	class UIGachaItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_AAC9B4B6713CDE1B* Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
