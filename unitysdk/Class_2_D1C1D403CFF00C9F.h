#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class AdvWaitPropSteerEventV2; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_D1C1D403CFF00C9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA41FBE0)
#define CLASS_2_D1C1D403CFF00C9F_METHOD_2_C0A798C9F3EAC3F1_OFFSET UNITYSDK_OFFSET(0xA420100)
#define CLASS_2_D1C1D403CFF00C9F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA41FC70)
#define CLASS_2_D1C1D403CFF00C9F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA41FE50)
#define CLASS_2_D1C1D403CFF00C9F_TICK_OFFSET UNITYSDK_OFFSET(0xA41FF90)
#define CLASS_2_D1C1D403CFF00C9F__CTOR_OFFSET UNITYSDK_OFFSET(0xA41FBD0)

inline static constexpr unsigned int Class_2_D1C1D403CFF00C9F_TypeDefinitionIndex = 49120;

class Class_2_D1C1D403CFF00C9F : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x18
	::RPG::GameCore::AdvWaitPropSteerEventV2* Field_2_3; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x28
	::RPG::GameCore::TaskContext* Field_2_5; // 0x30

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

	::System::Void Method_2_C0A798C9F3EAC3F1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_D1C1D403CFF00C9F_METHOD_2_C0A798C9F3EAC3F1_OFFSET))(this, a1);
	}
};
