#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSlideRopeLockCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170B4D60)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x170B4D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSlideRopeLockCamera___c__DisplayClass4_0_TypeDefinitionIndex = 47776;

	class ConfigSlideRopeLockCamera___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10
		::System::Action_1<::MoleMole::Config::ConfigSlideRopeLockCamera*>* __9__0; // 0x18
		::System::Int32 inLoadingRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::MoleMole::Config::ConfigSlideRopeLockCamera* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSlideRopeLockCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
