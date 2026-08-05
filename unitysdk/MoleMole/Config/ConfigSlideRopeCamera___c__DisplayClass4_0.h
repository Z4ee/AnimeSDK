#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSlideRopeCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172AF010)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x172AF020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSlideRopeCamera___c__DisplayClass4_0_TypeDefinitionIndex = 79674;

	class ConfigSlideRopeCamera___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10
		::System::Action_1<::MoleMole::Config::ConfigSlideRopeCamera*>* __9__0; // 0x18
		::System::Int32 inLoadingRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::MoleMole::Config::ConfigSlideRopeCamera* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSlideRopeCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
