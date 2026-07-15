#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ByNot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F60C8A83781D2E02_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AF6DC0)
#define CLASS_3_F60C8A83781D2E02_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18AF6D50)
#define CLASS_3_F60C8A83781D2E02__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF6C80)

inline static constexpr unsigned int Class_3_F60C8A83781D2E02_TypeDefinitionIndex = 52228;

class Class_3_F60C8A83781D2E02 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByNot*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByNot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + CLASS_3_F60C8A83781D2E02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F60C8A83781D2E02_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F60C8A83781D2E02_DISPOSE_OFFSET))(this);
	}
};
