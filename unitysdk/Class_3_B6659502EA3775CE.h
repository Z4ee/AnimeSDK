#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialTaskUnlock; }

#define CLASS_3_B6659502EA3775CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC7C890)
#define CLASS_3_B6659502EA3775CE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7C860)

inline static constexpr unsigned int Class_3_B6659502EA3775CE_TypeDefinitionIndex = 54965;

class Class_3_B6659502EA3775CE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialTaskUnlock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialTaskUnlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialTaskUnlock*))((::PBYTE)hIl2Cpp + CLASS_3_B6659502EA3775CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B6659502EA3775CE_ONTASKBEGIN_OFFSET))(this);
	}
};
