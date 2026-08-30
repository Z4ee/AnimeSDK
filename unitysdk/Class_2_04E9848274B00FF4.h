#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OnMuseumPerformanceBegin; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_04E9848274B00FF4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BB1140)
#define CLASS_2_04E9848274B00FF4_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x15BB15E0)
#define CLASS_2_04E9848274B00FF4_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15BB1030)
#define CLASS_2_04E9848274B00FF4_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15BB1220)
#define CLASS_2_04E9848274B00FF4_METHOD_2_F8F3571ABAE8B95A_OFFSET UNITYSDK_OFFSET(0x15BB1780)
#define CLASS_2_04E9848274B00FF4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BB1320)
#define CLASS_2_04E9848274B00FF4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BB1630)
#define CLASS_2_04E9848274B00FF4_TICK_OFFSET UNITYSDK_OFFSET(0x15BB1680)
#define CLASS_2_04E9848274B00FF4__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB0FA0)

inline static constexpr unsigned int Class_2_04E9848274B00FF4_TypeDefinitionIndex = 58386;

class Class_2_04E9848274B00FF4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* MAGNGPBKECB; // 0x0
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::Class_3_07C3C4D2990C49EE* FKKMNKMENBJ; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::OnMuseumPerformanceBegin* OFKGLJOAMLD; // 0x30
	::System::Boolean HCEDHPFKPAH; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnMuseumPerformanceBegin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnMuseumPerformanceBegin*))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_F8F3571ABAE8B95A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_METHOD_2_F8F3571ABAE8B95A_OFFSET))(this, a1);
	}
};
