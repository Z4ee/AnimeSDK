#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_STRINGUISPECIALNUM_GET_OFFSET UNITYSDK_OFFSET(0x170CE650)
#define MOLEMOLE_CONFIG_STRINGUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x170B4D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StringUISpecialNum_TypeDefinitionIndex = 80988;

	class StringUISpecialNum : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		::System::String* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::String* Get(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STRINGUISPECIALNUM_GET_OFFSET))(this, uiSpecialNumGroup);
		}
	};
}
