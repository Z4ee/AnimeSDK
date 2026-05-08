#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_PCRTXQUALITYSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16062F20)

namespace MoleMole
{
	inline static constexpr unsigned int PCRTXQualitySettingContext_TypeDefinitionIndex = 43028;

	class PCRTXQualitySettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Int32 QualityLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXQUALITYSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
