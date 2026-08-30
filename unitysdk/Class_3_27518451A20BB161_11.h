#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_28;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_11_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86B3A0)
#define CLASS_3_27518451A20BB161_11_METHOD_3_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xB86B320)
#define CLASS_3_27518451A20BB161_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86B270)
#define CLASS_3_27518451A20BB161_11__CTOR_OFFSET UNITYSDK_OFFSET(0xB86B240)

inline static constexpr unsigned int Class_3_27518451A20BB161_11_TypeDefinitionIndex = 53055;

class Class_3_27518451A20BB161_11 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_28*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_28*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11_METHOD_3_43A478BA01FE29B7_OFFSET))(this);
	}
};
