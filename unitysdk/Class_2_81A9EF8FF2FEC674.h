#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_859C8B90384D9B45.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_81A9EF8FF2FEC674_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AA6AE0)
#define CLASS_2_81A9EF8FF2FEC674_METHOD_2_134CFF8938BCCF33_OFFSET UNITYSDK_OFFSET(0x8AA6860)
#define CLASS_2_81A9EF8FF2FEC674_METHOD_2_8733738E0E834C59_OFFSET UNITYSDK_OFFSET(0x8AA6A30)
#define CLASS_2_81A9EF8FF2FEC674_METHOD_2_DB5ADC09526D5F46_OFFSET UNITYSDK_OFFSET(0x8AA6C20)
#define CLASS_2_81A9EF8FF2FEC674__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA6820)
#define CLASS_2_81A9EF8FF2FEC674___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AA6CB0)

inline static constexpr unsigned int Class_2_81A9EF8FF2FEC674_TypeDefinitionIndex = 56740;

class Class_2_81A9EF8FF2FEC674 : public ::Class_1_859C8B90384D9B45
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A9EF8FF2FEC674__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_134CFF8938BCCF33(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_81A9EF8FF2FEC674_METHOD_2_134CFF8938BCCF33_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8733738E0E834C59(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_81A9EF8FF2FEC674_METHOD_2_8733738E0E834C59_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A9EF8FF2FEC674_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DB5ADC09526D5F46(::RPG::GameCore::TaskContext* P0, ::RPG::GameCore::PhotoGraphAimContainerConfig* P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_81A9EF8FF2FEC674_METHOD_2_DB5ADC09526D5F46_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A9EF8FF2FEC674___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
