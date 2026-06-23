#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;

#define MOLEMOLE_UIACTIVITYCOREAWARDCOMPONENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174262A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCoreAwardComponentContext_TypeDefinitionIndex = 73147;

	class UIActivityCoreAwardComponentContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* componentActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOREAWARDCOMPONENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
