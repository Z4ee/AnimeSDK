#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define MOLEMOLE_UISETTINGENTRYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17B848E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingEntryContext_TypeDefinitionIndex = 82981;

	class UISettingEntryContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::SystemSettingEntryBase* SettingEntry; // 0x28
		::System::Int32 ParentLayer; // 0x30
		::System::Int32 maxHeight; // 0x34
		::System::Boolean IsFromLoginPage; // 0x38
		::MoleMole::ESystemSettingType SystemSettingType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGENTRYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
