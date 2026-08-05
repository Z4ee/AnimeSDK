#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFORGEUPDETAILITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9E9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForgeUpDetailItemContext_TypeDefinitionIndex = 90591;

	class UIForgeUpDetailItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 itemId; // 0x28

		::System::Void _ctor(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMCONTEXT__CTOR_OFFSET))(this, id);
		}
	};
}
