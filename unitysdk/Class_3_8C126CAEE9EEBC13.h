#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ByTargetListAll; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8C126CAEE9EEBC13_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169A2150)
#define CLASS_3_8C126CAEE9EEBC13_EVALUATE_OFFSET UNITYSDK_OFFSET(0x169A1DE0)
#define CLASS_3_8C126CAEE9EEBC13__CTOR_OFFSET UNITYSDK_OFFSET(0x169A1D10)

inline static constexpr unsigned int Class_3_8C126CAEE9EEBC13_TypeDefinitionIndex = 52246;

class Class_3_8C126CAEE9EEBC13 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetListAll*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetListAll* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + CLASS_3_8C126CAEE9EEBC13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C126CAEE9EEBC13_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C126CAEE9EEBC13_DISPOSE_OFFSET))(this);
	}
};
