#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MuteEntitySound; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_654F641E4E807DF9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16158600)
#define CLASS_3_654F641E4E807DF9__CTOR_OFFSET UNITYSDK_OFFSET(0x161585D0)

inline static constexpr unsigned int Class_3_654F641E4E807DF9_TypeDefinitionIndex = 53307;

class Class_3_654F641E4E807DF9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MuteEntitySound*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MuteEntitySound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MuteEntitySound*))((::PBYTE)hIl2Cpp + CLASS_3_654F641E4E807DF9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_654F641E4E807DF9_ONTASKBEGIN_OFFSET))(this);
	}
};
