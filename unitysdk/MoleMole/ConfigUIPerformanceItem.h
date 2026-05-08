#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_Performance; }

#define MOLEMOLE_CONFIGUIPERFORMANCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17550090)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIPerformanceItem_TypeDefinitionIndex = 60464;

	class ConfigUIPerformanceItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_Performance*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIPERFORMANCEITEM__CTOR_OFFSET))(this);
		}
	};
}
