#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_56939FDF5FBE5404_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE658060)
#define CLASS_3_56939FDF5FBE5404__CTOR_OFFSET UNITYSDK_OFFSET(0xE658030)

inline static constexpr unsigned int Class_3_56939FDF5FBE5404_TypeDefinitionIndex = 48564;

class Class_3_56939FDF5FBE5404 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTextJoinValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + CLASS_3_56939FDF5FBE5404__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56939FDF5FBE5404_EVALUATE_OFFSET))(this);
	}
};
