#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowRogueLoadingPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_95F026A2D8CFB001_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181B7C80)
#define CLASS_3_95F026A2D8CFB001__CTOR_OFFSET UNITYSDK_OFFSET(0x181B7C50)

inline static constexpr unsigned int Class_3_95F026A2D8CFB001_TypeDefinitionIndex = 56058;

class Class_3_95F026A2D8CFB001 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowRogueLoadingPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueLoadingPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueLoadingPage*))((::PBYTE)hIl2Cpp + CLASS_3_95F026A2D8CFB001__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95F026A2D8CFB001_ONTASKBEGIN_OFFSET))(this);
	}
};
