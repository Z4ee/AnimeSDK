#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsCharacterChangeSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_196B8449B05E5D0F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19171E10)
#define CLASS_3_196B8449B05E5D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x19171DE0)

inline static constexpr unsigned int Class_3_196B8449B05E5D0F_TypeDefinitionIndex = 55050;

class Class_3_196B8449B05E5D0F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsCharacterChangeSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + CLASS_3_196B8449B05E5D0F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196B8449B05E5D0F_EVALUATE_OFFSET))(this);
	}
};
