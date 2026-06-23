#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_39CBA493DD92466B.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIHDRSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x177F3B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHDRSettingContext_TypeDefinitionIndex = 55227;

	class UIHDRSettingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* FinishCB; // 0x28
		::Enum_3_39CBA493DD92466B SettingSource; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHDRSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
