#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_601FA52CA5E757A0;

#define MOLEMOLE_UIGACHAITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151963F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetContext_TypeDefinitionIndex = 81964;

	class UIGachaItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_601FA52CA5E757A0* Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
