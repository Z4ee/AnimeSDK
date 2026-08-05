#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16275C80)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS5_0__REBUILDALLUIAVATARSHOWSETTINGDATALEGACY_G__ONCOMPLETE_0_OFFSET UNITYSDK_OFFSET(0x16275C90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass5_0_TypeDefinitionIndex = 56960;

	class ConfigUIAvatarShowData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10
		::System::Int32 inLoadingRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReBuildAllUIAvatarShowSettingDataLegacy_g__OnComplete_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS5_0__REBUILDALLUIAVATARSHOWSETTINGDATALEGACY_G__ONCOMPLETE_0_OFFSET))(this);
		}
	};
}
