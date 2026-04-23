#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OnMuseumPerformanceBegin; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_04E9848274B00FF4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E84C30)
#define CLASS_2_04E9848274B00FF4_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11E851E0)
#define CLASS_2_04E9848274B00FF4_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11E84B30)
#define CLASS_2_04E9848274B00FF4_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x11E85040)
#define CLASS_2_04E9848274B00FF4_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11E84CA0)
#define CLASS_2_04E9848274B00FF4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E84D90)
#define CLASS_2_04E9848274B00FF4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11E85090)
#define CLASS_2_04E9848274B00FF4_TICK_OFFSET UNITYSDK_OFFSET(0x11E850E0)
#define CLASS_2_04E9848274B00FF4__CTOR_OFFSET UNITYSDK_OFFSET(0x11E84AA0)

inline static constexpr unsigned int Class_2_04E9848274B00FF4_TypeDefinitionIndex = 53709;

class Class_2_04E9848274B00FF4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	::RPG::GameCore::OnMuseumPerformanceBegin* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::Client::LuaUIController* Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38

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

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_METHOD_2_A984848EA3E436DA_OFFSET))(this);
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

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_04E9848274B00FF4_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
