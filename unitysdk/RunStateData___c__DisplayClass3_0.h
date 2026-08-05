#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRunStates; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RUNSTATEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1878A5E0)
#define RUNSTATEDATA___C__DISPLAYCLASS3_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1878AAA0)

inline static constexpr unsigned int RunStateData___c__DisplayClass3_0_TypeDefinitionIndex = 66645;

class RunStateData___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action* complete; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityRunStates*>* __9__0; // 0x18
	::System::Int32 inLoadingRef; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFile_b__0(::MoleMole::Config::ConfigEntityRunStates* config)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*))((::PBYTE)hIl2Cpp + RUNSTATEDATA___C__DISPLAYCLASS3_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
	}
};
