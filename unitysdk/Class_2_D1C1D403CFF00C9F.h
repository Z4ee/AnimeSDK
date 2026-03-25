#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class AdvWaitPropSteerEventV2; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_D1C1D403CFF00C9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108F4000)
#define CLASS_2_D1C1D403CFF00C9F_METHOD_2_6DDB92EC78EDF8C8_OFFSET UNITYSDK_OFFSET(0x108F44F0)
#define CLASS_2_D1C1D403CFF00C9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108F4090)
#define CLASS_2_D1C1D403CFF00C9F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x108F4260)
#define CLASS_2_D1C1D403CFF00C9F_TICK_OFFSET UNITYSDK_OFFSET(0x108F4380)
#define CLASS_2_D1C1D403CFF00C9F__CTOR_OFFSET UNITYSDK_OFFSET(0x108F3FF0)

inline static constexpr unsigned int Class_2_D1C1D403CFF00C9F_TypeDefinitionIndex = 42533;

class Class_2_D1C1D403CFF00C9F : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x20
	::RPG::GameCore::AdvWaitPropSteerEventV2* Field_2_1; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitPropSteerEventV2*))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DDB92EC78EDF8C8(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F_METHOD_2_6DDB92EC78EDF8C8_OFFSET))(this, a1);
	}
};
