#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_Misc; }

#define MOLEMOLE_CONFIGUIMISCITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B820A70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMiscItem_TypeDefinitionIndex = 54139;

	class ConfigUIMiscItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_Misc*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMISCITEM__CTOR_OFFSET))(this);
		}
	};
}
