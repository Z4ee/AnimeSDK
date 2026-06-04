#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClearAllHideNodes; }

#define CLASS_3_16704A903BD281CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C15840)
#define CLASS_3_16704A903BD281CE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C15810)

inline static constexpr unsigned int Class_3_16704A903BD281CE_TypeDefinitionIndex = 54952;

class Class_3_16704A903BD281CE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialClearAllHideNodes*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClearAllHideNodes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClearAllHideNodes*))((::PBYTE)hIl2Cpp + CLASS_3_16704A903BD281CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_16704A903BD281CE_ONTASKBEGIN_OFFSET))(this);
	}
};
