#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIREALTIMEQTECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1301B6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRealtimeQTEContext_TypeDefinitionIndex = 39539;

	class UIRealtimeQTEContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TaskCustomTag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREALTIMEQTECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
