#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D01AC62DF2A4BCAF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALITEMGETDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD0150)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemGetDialogContext_TypeDefinitionIndex = 48293;

	class UIGeneralItemGetDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ItemId; // 0x28
		::Enum_3_D01AC62DF2A4BCAF DialogType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMGETDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
