#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RequestSetServerGroupProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_AC016E5BB80E5118_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ABBD30)
#define CLASS_2_AC016E5BB80E5118_METHOD_2_2F9F2F856C7FB12B_OFFSET UNITYSDK_OFFSET(0x16ABBE90)
#define CLASS_2_AC016E5BB80E5118_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16ABB910)
#define CLASS_2_AC016E5BB80E5118_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16ABB8B0)
#define CLASS_2_AC016E5BB80E5118_TICK_OFFSET UNITYSDK_OFFSET(0x16ABBCD0)
#define CLASS_2_AC016E5BB80E5118__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABB7C0)

inline static constexpr unsigned int Class_2_AC016E5BB80E5118_TypeDefinitionIndex = 50778;

class Class_2_AC016E5BB80E5118 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::RequestSetServerGroupProperty* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_2_AC016E5BB80E5118__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC016E5BB80E5118_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC016E5BB80E5118_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AC016E5BB80E5118_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC016E5BB80E5118_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2F9F2F856C7FB12B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AC016E5BB80E5118_METHOD_2_2F9F2F856C7FB12B_OFFSET))(this, a1, a2);
	}
};
