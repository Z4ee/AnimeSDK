#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"

namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_INTUISPECIALNUM_GET_OFFSET UNITYSDK_OFFSET(0x1B4E8BB0)
#define MOLEMOLE_CONFIG_INTUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E8CC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int IntUISpecialNum_TypeDefinitionIndex = 50945;

	class IntUISpecialNum : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		::System::Int32 value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::Int32 Get(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTUISPECIALNUM_GET_OFFSET))(this, uiSpecialNumGroup);
		}
	};
}
