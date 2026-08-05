#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowUseItemOperateType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_HOLLOWUSEITEMOPERATETYPESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13A94950)

namespace MoleMole
{
	inline static constexpr unsigned int HollowUseItemOperateTypeSettingContext_TypeDefinitionIndex = 42276;

	class HollowUseItemOperateTypeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::HollowUseItemOperateType OperateType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWUSEITEMOPERATETYPESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
