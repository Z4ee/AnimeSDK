#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ByCompareCharacterNumber; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3E584E9519B0DF90_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11A22980)
#define CLASS_3_3E584E9519B0DF90__CTOR_OFFSET UNITYSDK_OFFSET(0x11A228C0)

inline static constexpr unsigned int Class_3_3E584E9519B0DF90_TypeDefinitionIndex = 50299;

class Class_3_3E584E9519B0DF90 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCharacterNumber*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + CLASS_3_3E584E9519B0DF90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E584E9519B0DF90_EVALUATE_OFFSET))(this);
	}
};
