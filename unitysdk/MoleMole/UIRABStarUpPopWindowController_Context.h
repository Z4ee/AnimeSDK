#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F68C1397F46993E4;
namespace System { class Action; }

#define MOLEMOLE_UIRABSTARUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15790B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpPopWindowController_Context_TypeDefinitionIndex = 60145;

	class UIRABStarUpPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F68C1397F46993E4* BuddyData; // 0x28
		::System::Action* OnConfirm; // 0x30
		::System::Int32 FromStar; // 0x38
		::System::Int32 ToStar; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
