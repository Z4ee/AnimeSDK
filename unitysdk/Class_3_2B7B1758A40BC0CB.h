#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AutoUseUltraSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2B7B1758A40BC0CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1989AAA0)
#define CLASS_3_2B7B1758A40BC0CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1989AA70)

inline static constexpr unsigned int Class_3_2B7B1758A40BC0CB_TypeDefinitionIndex = 55081;

class Class_3_2B7B1758A40BC0CB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AutoUseUltraSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AutoUseUltraSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AutoUseUltraSkill*))((::PBYTE)hIl2Cpp + CLASS_3_2B7B1758A40BC0CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B7B1758A40BC0CB_ONTASKBEGIN_OFFSET))(this);
	}
};
