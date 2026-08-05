#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_B9416AD3CF7CE7E5;
namespace System { class Action; }

#define MOLEMOLE_UIRABSTARUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A21EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpPopWindowController_Context_TypeDefinitionIndex = 60573;

	class UIRABStarUpPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnConfirm; // 0x28
		::Class_2_B9416AD3CF7CE7E5* BuddyData; // 0x30
		::System::Int32 ToStar; // 0x38
		::System::Int32 FromStar; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
