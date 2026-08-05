#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_PCRESOLUTIONSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1081D950)

namespace MoleMole
{
	inline static constexpr unsigned int PCResolutionSettingContext_TypeDefinitionIndex = 59992;

	class PCResolutionSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Int32 Width; // 0x28
		::System::Boolean IsFullScreen; // 0x2C
		::System::Int32 Height; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRESOLUTIONSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
