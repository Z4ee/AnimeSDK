#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_B3CDC17DBE6DFE09;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_29_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E53B40)
#define CLASS_3_4F91AE3B00DB7EFF_29__CTOR_OFFSET UNITYSDK_OFFSET(0x11E53B10)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_29_TypeDefinitionIndex = 49943;

class Class_3_4F91AE3B00DB7EFF_29 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_B3CDC17DBE6DFE09*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B3CDC17DBE6DFE09* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B3CDC17DBE6DFE09*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_29_EVALUATE_OFFSET))(this);
	}
};
