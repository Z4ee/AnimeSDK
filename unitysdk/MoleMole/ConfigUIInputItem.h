#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_Input; }

#define MOLEMOLE_CONFIGUIINPUTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8209B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIInputItem_TypeDefinitionIndex = 53808;

	class ConfigUIInputItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_Input*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIINPUTITEM__CTOR_OFFSET))(this);
		}
	};
}
