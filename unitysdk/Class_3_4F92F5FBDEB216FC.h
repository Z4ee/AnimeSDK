#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_3_9E12F120BC98A1B4;
namespace RPG::GameCore { class ByAny; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F92F5FBDEB216FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5690A0)
#define CLASS_3_4F92F5FBDEB216FC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA569030)
#define CLASS_3_4F92F5FBDEB216FC__CTOR_OFFSET UNITYSDK_OFFSET(0xA568FA0)
#define CLASS_3_4F92F5FBDEB216FC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA569100)

inline static constexpr unsigned int Class_3_4F92F5FBDEB216FC_TypeDefinitionIndex = 50926;

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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F92F5FBDEB216FC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
