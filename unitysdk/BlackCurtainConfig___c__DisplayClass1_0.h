#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBlackCurtains; }
namespace System { class Action; }

#define BLACKCURTAINCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D52D40)
#define BLACKCURTAINCONFIG___C__DISPLAYCLASS1_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x15D53390)

inline static constexpr unsigned int BlackCurtainConfig___c__DisplayClass1_0_TypeDefinitionIndex = 83532;

class BlackCurtainConfig___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action* complete; // 0x10
	::Foundation::AssetPath configPath; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFile_b__0(::MoleMole::Config::ConfigBlackCurtains* config)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBlackCurtains*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG___C__DISPLAYCLASS1_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
	}
};
