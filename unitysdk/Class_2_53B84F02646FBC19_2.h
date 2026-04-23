#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_2D512E916C716041_4;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90802C0)
#define CLASS_2_53B84F02646FBC19_2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x9080540)
#define CLASS_2_53B84F02646FBC19_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9080340)
#define CLASS_2_53B84F02646FBC19_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9080430)
#define CLASS_2_53B84F02646FBC19_2_TICK_OFFSET UNITYSDK_OFFSET(0x90804E0)
#define CLASS_2_53B84F02646FBC19_2__CTOR_OFFSET UNITYSDK_OFFSET(0x90802B0)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_2_TypeDefinitionIndex = 48825;

class Class_2_53B84F02646FBC19_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_2D512E916C716041_4* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_4*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
