#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162759A0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_0__RELOADFROMFILE_G__ONSHOWSETTINGSINDEXCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x16275B70)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_0__RELOADFROMFILE_G__ONUIAVATARDATACOMPLETE_0_OFFSET UNITYSDK_OFFSET(0x162759B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass1_0_TypeDefinitionIndex = 56958;

	class ConfigUIAvatarShowData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10
		::System::Boolean isAync; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_g__OnUIAvatarDataComplete_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_0__RELOADFROMFILE_G__ONUIAVATARDATACOMPLETE_0_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_g__OnShowSettingsIndexComplete_1(::System::Boolean indexLoaded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_0__RELOADFROMFILE_G__ONSHOWSETTINGSINDEXCOMPLETE_1_OFFSET))(this, indexLoaded);
		}
	};
}
