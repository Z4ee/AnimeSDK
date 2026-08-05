#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_DamageText; }

#define MOLEMOLE_CONFIGUIDAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C529040)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIDamageTextItem_TypeDefinitionIndex = 41358;

	class ConfigUIDamageTextItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_DamageText*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIDAMAGETEXTITEM__CTOR_OFFSET))(this);
		}
	};
}
