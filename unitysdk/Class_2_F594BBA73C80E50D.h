#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_B265C5B0A098BF41;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F594BBA73C80E50D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12366D10)
#define CLASS_2_F594BBA73C80E50D_METHOD_2_1456E99155FB9C6A_OFFSET UNITYSDK_OFFSET(0x12367180)
#define CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_1_OFFSET UNITYSDK_OFFSET(0x12367230)
#define CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_2_OFFSET UNITYSDK_OFFSET(0x12367400)
#define CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_3_OFFSET UNITYSDK_OFFSET(0x123675D0)
#define CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x12366FB0)
#define CLASS_2_F594BBA73C80E50D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12366F00)
#define CLASS_2_F594BBA73C80E50D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12366E70)
#define CLASS_2_F594BBA73C80E50D_TICK_OFFSET UNITYSDK_OFFSET(0x12366F50)
#define CLASS_2_F594BBA73C80E50D__CTOR_OFFSET UNITYSDK_OFFSET(0x12366A00)

inline static constexpr unsigned int Class_2_F594BBA73C80E50D_TypeDefinitionIndex = 48840;

class Class_2_F594BBA73C80E50D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x38
	::Class_3_B265C5B0A098BF41* Field_2_1; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B265C5B0A098BF41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B265C5B0A098BF41*))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_METHOD_2_D8E44F7C510402BB_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1456E99155FB9C6A(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F594BBA73C80E50D_METHOD_2_1456E99155FB9C6A_OFFSET))(this, a1);
	}
};
