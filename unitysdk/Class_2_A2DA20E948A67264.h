#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_2EAEB59C1D3F00D7;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A2DA20E948A67264_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA76010)
#define CLASS_2_A2DA20E948A67264_METHOD_2_1456E99155FB9C6A_OFFSET UNITYSDK_OFFSET(0xAA76660)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_1_OFFSET UNITYSDK_OFFSET(0xAA76710)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_2_OFFSET UNITYSDK_OFFSET(0xAA768E0)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_3_OFFSET UNITYSDK_OFFSET(0xAA76AB0)
#define CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xAA76490)
#define CLASS_2_A2DA20E948A67264_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA763E0)
#define CLASS_2_A2DA20E948A67264_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA76250)
#define CLASS_2_A2DA20E948A67264_TICK_OFFSET UNITYSDK_OFFSET(0xAA76430)
#define CLASS_2_A2DA20E948A67264__CTOR_OFFSET UNITYSDK_OFFSET(0xAA75CE0)

inline static constexpr unsigned int Class_2_A2DA20E948A67264_TypeDefinitionIndex = 49506;

class Class_2_A2DA20E948A67264 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_2EAEB59C1D3F00D7* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2EAEB59C1D3F00D7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2EAEB59C1D3F00D7*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_D8E44F7C510402BB_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1456E99155FB9C6A(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A2DA20E948A67264_METHOD_2_1456E99155FB9C6A_OFFSET))(this, a1);
	}
};
