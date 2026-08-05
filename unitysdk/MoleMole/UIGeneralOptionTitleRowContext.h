#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALOPTIONTITLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBAE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionTitleRowContext_TypeDefinitionIndex = 81750;

	class UIGeneralOptionTitleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::String* EnTitle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONTITLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
