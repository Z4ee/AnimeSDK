#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_ConfigTagBuffCdTime_TypeDefinitionIndex = 71678;

	struct alignas(4) ConfigBuffMisc_ConfigTagBuffCdTime
	{
		::MoleMole::Config::DamageElementType ElementType; // 0x10
		::MoleMole::Config::EVariantElement VariantElement; // 0x14
		::System::Single CdTime; // 0x18
	};
}
