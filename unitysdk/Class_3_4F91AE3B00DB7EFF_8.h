#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_BC87E1E104C4A2A7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1602F500)
#define CLASS_3_4F91AE3B00DB7EFF_8_METHOD_3_B5903151BC720477_OFFSET UNITYSDK_OFFSET(0x1602F980)
#define CLASS_3_4F91AE3B00DB7EFF_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1602F4D0)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_8_TypeDefinitionIndex = 50431;

class Class_3_4F91AE3B00DB7EFF_8 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_BC87E1E104C4A2A7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_BC87E1E104C4A2A7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_BC87E1E104C4A2A7*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_B5903151BC720477(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_8_METHOD_3_B5903151BC720477_OFFSET))(this, a1, a2);
	}
};
