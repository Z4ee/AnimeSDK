#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_83E48A42EFE1B97C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_19_EVALUATE_OFFSET UNITYSDK_OFFSET(0x142F16A0)
#define CLASS_3_4F91AE3B00DB7EFF_19__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1670)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_19_TypeDefinitionIndex = 50332;

class Class_3_4F91AE3B00DB7EFF_19 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_83E48A42EFE1B97C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_83E48A42EFE1B97C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_83E48A42EFE1B97C*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_19_EVALUATE_OFFSET))(this);
	}
};
