#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINTERKNOTROPEMAKERLEVELUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C16290)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotRopemakerLevelUpContext_TypeDefinitionIndex = 84176;

	class UIInterKnotRopemakerLevelUpContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CurLevel; // 0x28
		::System::Int32 PrvLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTROPEMAKERLEVELUPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
