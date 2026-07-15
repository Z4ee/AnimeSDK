#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_3_9E12F120BC98A1B4;
namespace RPG::GameCore { class ByAny; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F92F5FBDEB216FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15303A90)
#define CLASS_3_4F92F5FBDEB216FC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15303A20)
#define CLASS_3_4F92F5FBDEB216FC__CTOR_OFFSET UNITYSDK_OFFSET(0x15303990)

inline static constexpr unsigned int Class_3_4F92F5FBDEB216FC_TypeDefinitionIndex = 52011;

class Class_3_4F92F5FBDEB216FC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAny*>
{
public:
	::Class_3_9E12F120BC98A1B4* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAny* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + CLASS_3_4F92F5FBDEB216FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F92F5FBDEB216FC_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F92F5FBDEB216FC_DISPOSE_OFFSET))(this);
	}
};
