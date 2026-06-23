#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERFISHAQUARIUMPUTFISHDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x103F1B40)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishAquariumPutFishDialogPopWindowControllerContext_TypeDefinitionIndex = 64521;

	class UISummerFishAquariumPutFishDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnPutCallback; // 0x28
		::System::Int32 FishID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHAQUARIUMPUTFISHDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
