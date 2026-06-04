#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_BC87E1E104C4A2A7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F018DE2015406BA4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x137F3F70)
#define CLASS_3_F018DE2015406BA4_METHOD_3_0BB57CCE4B88B56E_OFFSET UNITYSDK_OFFSET(0x137F42F0)
#define CLASS_3_F018DE2015406BA4__CTOR_OFFSET UNITYSDK_OFFSET(0x137F3F40)

inline static constexpr unsigned int Class_3_F018DE2015406BA4_TypeDefinitionIndex = 49382;

class Class_3_F018DE2015406BA4 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_BC87E1E104C4A2A7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_BC87E1E104C4A2A7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_BC87E1E104C4A2A7*))((::PBYTE)hIl2Cpp + CLASS_3_F018DE2015406BA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F018DE2015406BA4_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_0BB57CCE4B88B56E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F018DE2015406BA4_METHOD_3_0BB57CCE4B88B56E_OFFSET))(this, a1, a2);
	}
};
