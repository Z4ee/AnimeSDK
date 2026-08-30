#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_7A69A90A7D03F542;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_55_EVALUATE_OFFSET UNITYSDK_OFFSET(0x161C9A70)
#define CLASS_3_4F91AE3B00DB7EFF_55_METHOD_3_7A013595D3943151_OFFSET UNITYSDK_OFFSET(0x161C9D90)
#define CLASS_3_4F91AE3B00DB7EFF_55__CTOR_OFFSET UNITYSDK_OFFSET(0x161C9A40)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_55_TypeDefinitionIndex = 55265;

class Class_3_4F91AE3B00DB7EFF_55 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_7A69A90A7D03F542*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_7A69A90A7D03F542* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_7A69A90A7D03F542*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_55_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_7A013595D3943151(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_55_METHOD_3_7A013595D3943151_OFFSET))(this, a1);
	}
};
