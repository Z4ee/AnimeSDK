#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_6C65A57FFF554AAC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_28_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD7EE930)
#define CLASS_3_4F91AE3B00DB7EFF_28__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EE900)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_28_TypeDefinitionIndex = 50608;

class Class_3_4F91AE3B00DB7EFF_28 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_6C65A57FFF554AAC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_6C65A57FFF554AAC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_6C65A57FFF554AAC*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_28_EVALUATE_OFFSET))(this);
	}
};
