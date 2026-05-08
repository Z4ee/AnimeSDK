#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLazyLoadItem_1.h"

namespace MoleMole { class ConfigUICommon_HollowCard; }

#define MOLEMOLE_CONFIGUIHOLLOWCARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1754FFB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIHollowCardItem_TypeDefinitionIndex = 63449;

	class ConfigUIHollowCardItem : public ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::ConfigUICommon_HollowCard*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIHOLLOWCARDITEM__CTOR_OFFSET))(this);
		}
	};
}
