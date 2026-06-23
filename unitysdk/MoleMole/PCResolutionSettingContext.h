#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_PCRESOLUTIONSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x141A0130)

namespace MoleMole
{
	inline static constexpr unsigned int PCResolutionSettingContext_TypeDefinitionIndex = 43336;

	class PCResolutionSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Boolean IsFullScreen; // 0x28
		::System::Int32 Width; // 0x2C
		::System::Int32 Height; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRESOLUTIONSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
