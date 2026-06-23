#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x165256A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectTaskRowWidgetControllerContext_TypeDefinitionIndex = 74611;

	class UISearchObjectTaskRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetID; // 0x28
		::System::Boolean IsDone; // 0x2C
		::System::Boolean IsQADone; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
