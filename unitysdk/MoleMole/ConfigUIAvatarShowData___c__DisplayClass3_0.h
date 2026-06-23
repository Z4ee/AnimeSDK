#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAvatarShow; }
namespace System { class Action; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4C9D0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS3_0__RELOADUIAVATARDATAFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x18F4C9E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass3_0_TypeDefinitionIndex = 82014;

	class ConfigUIAvatarShowData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadUIAvatarDataFromFile_b__0(::MoleMole::ConfigUIAvatarShow* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS3_0__RELOADUIAVATARDATAFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
