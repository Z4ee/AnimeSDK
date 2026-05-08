#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_SHAREBTNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE99B0)

namespace MoleMole
{
	inline static constexpr unsigned int ShareBtnContext_TypeDefinitionIndex = 51434;

	class ShareBtnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* share_desc2; // 0x28
		::System::String* share_desc1; // 0x30
		::System::Int32 shareType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREBTNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
