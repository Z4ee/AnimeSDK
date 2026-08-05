#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_DF73794ED874FFFB;

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEE110)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetContext_TypeDefinitionIndex = 68951;

	class UIHollowEventWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF73794ED874FFFB* graph; // 0x28

		::System::Void _ctor(::Class_2_DF73794ED874FFFB* graph)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF73794ED874FFFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCONTEXT__CTOR_OFFSET))(this, graph);
		}
	};
}
