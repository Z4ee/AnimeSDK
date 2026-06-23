#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152B1460)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingContext_TypeDefinitionIndex = 65469;

	class UISettingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ParentLayer; // 0x28
		::MoleMole::ESystemSettingType SystemSettingType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
