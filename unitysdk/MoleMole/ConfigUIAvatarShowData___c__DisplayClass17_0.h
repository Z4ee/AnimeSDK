#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFEA50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass17_0_TypeDefinitionIndex = 56964;

	class ConfigUIAvatarShowData___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10
		::System::Int32 inLoadingRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}
	};
}
