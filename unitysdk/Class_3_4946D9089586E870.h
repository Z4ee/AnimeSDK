#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class EnableStoryWin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4946D9089586E870_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16511BB0)
#define CLASS_3_4946D9089586E870__CTOR_OFFSET UNITYSDK_OFFSET(0x16511AE0)

inline static constexpr unsigned int Class_3_4946D9089586E870_TypeDefinitionIndex = 55533;

class Class_3_4946D9089586E870 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableStoryWin*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableStoryWin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableStoryWin*))((::PBYTE)hIl2Cpp + CLASS_3_4946D9089586E870__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4946D9089586E870_ONTASKBEGIN_OFFSET))(this);
	}
};
