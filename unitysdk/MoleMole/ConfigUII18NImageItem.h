#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_I18NImage; }

#define MOLEMOLE_CONFIGUII18NIMAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00EA80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUII18NImageItem_TypeDefinitionIndex = 75637;

	class ConfigUII18NImageItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_I18NImage*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUII18NIMAGEITEM__CTOR_OFFSET))(this);
		}
	};
}
