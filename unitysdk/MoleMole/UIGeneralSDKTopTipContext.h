#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALSDKTOPTIPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151BD5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSDKTopTipContext_TypeDefinitionIndex = 48905;

	class UIGeneralSDKTopTipContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* topTip; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSDKTOPTIPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
