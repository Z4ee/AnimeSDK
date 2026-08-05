#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITURNTABLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9C730)

namespace MoleMole
{
	inline static constexpr unsigned int UITurntableContext_TypeDefinitionIndex = 80203;

	class UITurntableContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 TurntableUID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITURNTABLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
