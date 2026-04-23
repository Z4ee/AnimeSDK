#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTakePhoto; }
namespace System { class Object; }

#define CLASS_2_DDD319477A190D9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12919950)
#define CLASS_2_DDD319477A190D9B_METHOD_2_7C3BCB023B0D3F9C_OFFSET UNITYSDK_OFFSET(0x12919DA0)
#define CLASS_2_DDD319477A190D9B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12919BB0)
#define CLASS_2_DDD319477A190D9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12919C70)
#define CLASS_2_DDD319477A190D9B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12919D10)
#define CLASS_2_DDD319477A190D9B_TICK_OFFSET UNITYSDK_OFFSET(0x12919A30)
#define CLASS_2_DDD319477A190D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x129198D0)

inline static constexpr unsigned int Class_2_DDD319477A190D9B_TypeDefinitionIndex = 49324;

class Class_2_DDD319477A190D9B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitTakePhoto* Field_2_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTakePhoto* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTakePhoto*))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7C3BCB023B0D3F9C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B_METHOD_2_7C3BCB023B0D3F9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDD319477A190D9B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
