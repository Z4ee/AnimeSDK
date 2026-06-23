#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIARCADEPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E507A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayContext_TypeDefinitionIndex = 43653;

	class UIArcadePlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsMultiPlayerGame; // 0x28
		::System::Int32 ArcadeID; // 0x2C
		::Enum_3_F80BFD5B986D5503 MiniGameType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
