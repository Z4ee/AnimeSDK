#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_299F950771AB6852.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALITEMGETDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F981E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemGetDialogContext_TypeDefinitionIndex = 65073;

	class UIGeneralItemGetDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ItemId; // 0x28
		::Enum_3_299F950771AB6852 DialogType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMGETDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
