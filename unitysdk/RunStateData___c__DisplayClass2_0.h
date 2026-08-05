#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RUNSTATEDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB91330)
#define RUNSTATEDATA___C__DISPLAYCLASS2_0__RELOADFROMFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1CB91340)

inline static constexpr unsigned int RunStateData___c__DisplayClass2_0_TypeDefinitionIndex = 66646;

class RunStateData___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::String* dataName; // 0x10
	::System::Action_1<::System::Single>* moveOneStepCallback; // 0x18
	::System::Action_1<::System::String*>* finishCallback; // 0x20
	::System::Single progressSpan; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFileAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATA___C__DISPLAYCLASS2_0__RELOADFROMFILEASYNC_B__0_OFFSET))(this);
	}
};
