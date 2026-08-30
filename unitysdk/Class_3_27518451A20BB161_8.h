#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A406659BC3B2A585_27;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C447F0)
#define CLASS_3_27518451A20BB161_8_METHOD_3_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x14C44620)
#define CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14C445D0)
#define CLASS_3_27518451A20BB161_8__CTOR_OFFSET UNITYSDK_OFFSET(0x14C445A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_8_TypeDefinitionIndex = 52959;

class Class_3_27518451A20BB161_8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A406659BC3B2A585_27*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585_27* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585_27*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8_METHOD_3_7206DC8F66A4D2A8_OFFSET))(this);
	}
};
