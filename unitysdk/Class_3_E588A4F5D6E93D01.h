#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetLoopHitFeatureParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E588A4F5D6E93D01_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA604F90)
#define CLASS_3_E588A4F5D6E93D01__CTOR_OFFSET UNITYSDK_OFFSET(0xA604F60)

inline static constexpr unsigned int Class_3_E588A4F5D6E93D01_TypeDefinitionIndex = 49097;

class Class_3_E588A4F5D6E93D01 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetLoopHitFeatureParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetLoopHitFeatureParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetLoopHitFeatureParam*))((::PBYTE)hIl2Cpp + CLASS_3_E588A4F5D6E93D01__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E588A4F5D6E93D01_ONTASKBEGIN_OFFSET))(this);
	}
};
