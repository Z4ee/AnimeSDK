#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISWITCHPAGELISTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16187970)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchPageListWidgetContext_TypeDefinitionIndex = 51317;

	class UISwitchPageListWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnPageChanged; // 0x28
		::System::Int32 PageCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHPAGELISTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
