#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALOPTIONTITLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166EEBC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionTitleRowContext_TypeDefinitionIndex = 74342;

	class UIGeneralOptionTitleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* EnTitle; // 0x28
		::System::String* Title; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONTITLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
