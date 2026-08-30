#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_74E928004BF9D3ED;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EB9EDFC713369F09_EVALUATE_OFFSET UNITYSDK_OFFSET(0x152BA220)
#define CLASS_3_EB9EDFC713369F09_METHOD_3_19EB53798E80EC9A_OFFSET UNITYSDK_OFFSET(0x152BA6C0)
#define CLASS_3_EB9EDFC713369F09__CTOR_OFFSET UNITYSDK_OFFSET(0x152BA1F0)

inline static constexpr unsigned int Class_3_EB9EDFC713369F09_TypeDefinitionIndex = 54760;

class Class_3_EB9EDFC713369F09 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_74E928004BF9D3ED*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_74E928004BF9D3ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_74E928004BF9D3ED*))((::PBYTE)hIl2Cpp + CLASS_3_EB9EDFC713369F09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9EDFC713369F09_EVALUATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_19EB53798E80EC9A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_EB9EDFC713369F09_METHOD_3_19EB53798E80EC9A_OFFSET))(a1, a2);
	}
};
