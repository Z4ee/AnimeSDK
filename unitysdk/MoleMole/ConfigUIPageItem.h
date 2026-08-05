#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_UIPage; }

#define MOLEMOLE_CONFIGUIPAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6DF80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIPageItem_TypeDefinitionIndex = 44662;

	class ConfigUIPageItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_UIPage*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIPAGEITEM__CTOR_OFFSET))(this);
		}
	};
}
