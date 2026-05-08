#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9D33A2E94B3E53DC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED7E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishQuickSelectPopWindowContext_TypeDefinitionIndex = 66667;

	class UIFishQuickSelectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_9D33A2E94B3E53DC*>* fishList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
