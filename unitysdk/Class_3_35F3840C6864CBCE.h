#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentVCameraConfigCaster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35F3840C6864CBCE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x152CB980)
#define CLASS_3_35F3840C6864CBCE__CTOR_OFFSET UNITYSDK_OFFSET(0x152CB950)

inline static constexpr unsigned int Class_3_35F3840C6864CBCE_TypeDefinitionIndex = 53272;

class Class_3_35F3840C6864CBCE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentVCameraConfigCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + CLASS_3_35F3840C6864CBCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_35F3840C6864CBCE_EVALUATE_OFFSET))(this);
	}
};
