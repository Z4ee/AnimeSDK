#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALSMALLTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19602070)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSmallTipsContext_TypeDefinitionIndex = 46488;

	class UIGeneralSmallTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSMALLTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
