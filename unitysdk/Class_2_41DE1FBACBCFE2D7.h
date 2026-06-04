#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ObserveMaterialSubmission; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_41DE1FBACBCFE2D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAF8F80)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_1_OFFSET UNITYSDK_OFFSET(0xAAF94A0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_2_OFFSET UNITYSDK_OFFSET(0xAAF95D0)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_OFFSET UNITYSDK_OFFSET(0xAAF9370)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0xAAF9170)
#define CLASS_2_41DE1FBACBCFE2D7_METHOD_2_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xAAF8FD0)
#define CLASS_2_41DE1FBACBCFE2D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAF9120)
#define CLASS_2_41DE1FBACBCFE2D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAF92C0)
#define CLASS_2_41DE1FBACBCFE2D7_TICK_OFFSET UNITYSDK_OFFSET(0xAAF9310)
#define CLASS_2_41DE1FBACBCFE2D7__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF8E10)

inline static constexpr unsigned int Class_2_41DE1FBACBCFE2D7_TypeDefinitionIndex = 49576;

class Class_2_41DE1FBACBCFE2D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ObserveMaterialSubmission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ObserveMaterialSubmission*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_2_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Method_2_1BDC75E4AECDDAAE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BDC75E4AECDDAAE_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BDC75E4AECDDAAE_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_41DE1FBACBCFE2D7_METHOD_2_1BDC75E4AECDDAAE_2_OFFSET))(this, a1);
	}
};
