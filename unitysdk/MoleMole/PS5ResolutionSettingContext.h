#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_PS5RESOLUTIONSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1264EE20)

namespace MoleMole
{
	inline static constexpr unsigned int PS5ResolutionSettingContext_TypeDefinitionIndex = 80876;

	class PS5ResolutionSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Int32 Height; // 0x28
		::System::Int32 Width; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RESOLUTIONSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
