#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYRETURNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x196F3780)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnContext_TypeDefinitionIndex = 69995;

	class UIActivityReturnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_63CAB6C405C6C7B1_1 selectType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
