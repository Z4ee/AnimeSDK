#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"

namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_BOOLUISPECIALNUM_GET_OFFSET UNITYSDK_OFFSET(0x12B2EDB0)
#define MOLEMOLE_CONFIG_BOOLUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2EEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoolUISpecialNum_TypeDefinitionIndex = 68017;

	class BoolUISpecialNum : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		::System::Boolean value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOOLUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::Boolean Get(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOOLUISPECIALNUM_GET_OFFSET))(this, uiSpecialNumGroup);
		}
	};
}
