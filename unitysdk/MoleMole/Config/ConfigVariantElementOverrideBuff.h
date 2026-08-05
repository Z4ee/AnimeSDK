#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGVARIANTELEMENTOVERRIDEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14876D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVariantElementOverrideBuff_TypeDefinitionIndex = 68988;

	class ConfigVariantElementOverrideBuff : public ::System::Object
	{
	public:
		::System::Int32 OriginalBuffId; // 0x10
		::System::Int32 OverrideBuffId; // 0x14
		::MoleMole::Config::DamageElementType ElementType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVARIANTELEMENTOVERRIDEBUFF__CTOR_OFFSET))(this);
		}
	};
}
