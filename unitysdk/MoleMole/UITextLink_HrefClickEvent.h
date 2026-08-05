#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }

#define MOLEMOLE_UITEXTLINK_HREFCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F90BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITextLink_HrefClickEvent_TypeDefinitionIndex = 55456;

	class UITextLink_HrefClickEvent : public ::UnityEngine::Events::UnityEvent_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_HREFCLICKEVENT__CTOR_OFFSET))(this);
		}
	};
}
