#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPhotoGraphFovLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0CA61A9B93A0BAF9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12984160)
#define CLASS_3_0CA61A9B93A0BAF9__CTOR_OFFSET UNITYSDK_OFFSET(0x12984130)

inline static constexpr unsigned int Class_3_0CA61A9B93A0BAF9_TypeDefinitionIndex = 49019;

class Class_3_0CA61A9B93A0BAF9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPhotoGraphFovLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + CLASS_3_0CA61A9B93A0BAF9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CA61A9B93A0BAF9_EVALUATE_OFFSET))(this);
	}
};
