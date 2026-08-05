#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0E5539138A69A821;

#define MOLEMOLE_UIBALLGAMEBOXCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180210C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallgameBoxContext_TypeDefinitionIndex = 70838;

	class UIBallgameBoxContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0E5539138A69A821* showHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
