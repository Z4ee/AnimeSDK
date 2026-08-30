#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_4_2AFBB0F2564F9E40;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F91AE3B00DB7EFF_25_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3B4490)
#define CLASS_3_4F91AE3B00DB7EFF_25__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B4460)

inline static constexpr unsigned int Class_3_4F91AE3B00DB7EFF_25_TypeDefinitionIndex = 54086;

class Class_3_4F91AE3B00DB7EFF_25 : public ::RPG::GameCore::PredicateTaskBase_1<::Class_4_2AFBB0F2564F9E40*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2AFBB0F2564F9E40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2AFBB0F2564F9E40*))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F91AE3B00DB7EFF_25_EVALUATE_OFFSET))(this);
	}
};
