#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOUSERHYTHMPROPSGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18145860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmPropsGetPopWindowController_Context_TypeDefinitionIndex = 84530;

	class UIHouseRhythmPropsGetPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ItemID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMPROPSGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
