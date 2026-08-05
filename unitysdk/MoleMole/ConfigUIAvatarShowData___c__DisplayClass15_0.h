#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6CC90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass15_0_TypeDefinitionIndex = 56965;

	class ConfigUIAvatarShowData___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10
		::System::Int32 inLoadingRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}
	};
}
