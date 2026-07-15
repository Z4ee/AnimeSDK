#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class PVSRuntimeReplayJudgeEntry; }
namespace System { class String; }

#define CLASS_1_70A99889D378ECCA___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17EFE2D0)
#define CLASS_1_70A99889D378ECCA___C__DISPLAYCLASS13_0__RECORDSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x17EFE490)

inline static constexpr unsigned int Class_1_70A99889D378ECCA___c__DisplayClass13_0_TypeDefinitionIndex = 70363;

class Class_1_70A99889D378ECCA___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::String* stage; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RecordStage_b__0(::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::PVSRuntimeReplayJudgeEntry*))((::PBYTE)hIl2Cpp + CLASS_1_70A99889D378ECCA___C__DISPLAYCLASS13_0__RECORDSTAGE_B__0_OFFSET))(this, a1);
	}
};
