#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_9A16BB53176B1EDB;

#define MOLEMOLE_UIJOURNEYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1482ABB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIJourneyWidgetContext_TypeDefinitionIndex = 79186;

	class UIJourneyWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_9A16BB53176B1EDB* treeNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
