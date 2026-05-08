#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAvatarShowData___c__DisplayClass1_0; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1103E2D0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_1__RELOADFROMFILE_G__ONCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1103E2E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass1_1_TypeDefinitionIndex = 39676;

	class ConfigUIAvatarShowData___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::MoleMole::ConfigUIAvatarShowData___c__DisplayClass1_0* CS___8__locals1; // 0x10
		::System::Int32 inLoadingRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_g__OnComplete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS1_1__RELOADFROMFILE_G__ONCOMPLETE_1_OFFSET))(this);
		}
	};
}
