#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"

namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_FLOATUISPECIALNUM_GET_OFFSET UNITYSDK_OFFSET(0x19FF5570)
#define MOLEMOLE_CONFIG_FLOATUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF5680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloatUISpecialNum_TypeDefinitionIndex = 78695;

	class FloatUISpecialNum : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		::System::Single value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOATUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::Single Get(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLOATUISPECIALNUM_GET_OFFSET))(this, uiSpecialNumGroup);
		}
	};
}
