#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISEARCHOBJECTPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1229A5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectPageControllerContext_TypeDefinitionIndex = 51097;

	class UISearchObjectPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TabID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
