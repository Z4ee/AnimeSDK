#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PCShortcutWheelOperateType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_PCSHORTCUTWHEELOPERATETYPESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B49600)

namespace MoleMole
{
	inline static constexpr unsigned int PCShortcutWheelOperateTypeSettingContext_TypeDefinitionIndex = 82755;

	class PCShortcutWheelOperateTypeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::PCShortcutWheelOperateType OperateType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSHORTCUTWHEELOPERATETYPESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
