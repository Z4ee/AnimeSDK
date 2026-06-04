#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RequestSetServerGroupPropertyV2; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_1F2AA72C96929E18_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF5D100)
#define CLASS_2_1F2AA72C96929E18_METHOD_2_2FACAFA05A9695F0_OFFSET UNITYSDK_OFFSET(0xFF5D140)
#define CLASS_2_1F2AA72C96929E18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFF5CD20)
#define CLASS_2_1F2AA72C96929E18_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFF5CCC0)
#define CLASS_2_1F2AA72C96929E18_TICK_OFFSET UNITYSDK_OFFSET(0xFF5D0A0)
#define CLASS_2_1F2AA72C96929E18__CTOR_OFFSET UNITYSDK_OFFSET(0xFF5CCB0)

inline static constexpr unsigned int Class_2_1F2AA72C96929E18_TypeDefinitionIndex = 49725;

class Class_2_1F2AA72C96929E18 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::RequestSetServerGroupPropertyV2* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*))((::PBYTE)hIl2Cpp + CLASS_2_1F2AA72C96929E18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F2AA72C96929E18_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F2AA72C96929E18_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1F2AA72C96929E18_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F2AA72C96929E18_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2FACAFA05A9695F0(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1F2AA72C96929E18_METHOD_2_2FACAFA05A9695F0_OFFSET))(this, a1, a2);
	}
};
