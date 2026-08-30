#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_5FBF198A62EBF789;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19903040)
#define CLASS_3_4F91AE3B00DB7EFF_15_METHOD_3_5A8B223EA7063738_OFFSET UNITYSDK_OFFSET(0x199031F0)
#define CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET UNITYSDK_OFFSET(0x19903010)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_15_TypeDefinitionIndex = 53594;

class Class_3_4F91AE3B00DB7EFF_15 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_5FBF198A62EBF789*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_5FBF198A62EBF789* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_5FBF198A62EBF789*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_5A8B223EA7063738(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_15_METHOD_3_5A8B223EA7063738_OFFSET))(this, a1);
	}
};
