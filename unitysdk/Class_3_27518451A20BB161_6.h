#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_6_METHOD_3_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0xBE57220)
#define CLASS_3_27518451A20BB161_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE570C0)
#define CLASS_3_27518451A20BB161_6__CTOR_OFFSET UNITYSDK_OFFSET(0xBE57090)

inline static constexpr unsigned int Class_3_27518451A20BB161_6_TypeDefinitionIndex = 52893;

class Class_3_27518451A20BB161_6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_6_METHOD_3_E727F9956B5BD78B_OFFSET))(this);
	}
};
