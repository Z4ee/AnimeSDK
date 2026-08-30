#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7E8C4C9A692BF680;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2AD350)
#define CLASS_2_53B84F02646FBC19_3_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xE2AD660)
#define CLASS_2_53B84F02646FBC19_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2AD3D0)
#define CLASS_2_53B84F02646FBC19_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE2AD550)
#define CLASS_2_53B84F02646FBC19_3_TICK_OFFSET UNITYSDK_OFFSET(0xE2AD600)
#define CLASS_2_53B84F02646FBC19_3__CTOR_OFFSET UNITYSDK_OFFSET(0xE2AD340)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_3_TypeDefinitionIndex = 53212;

class Class_2_53B84F02646FBC19_3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_7E8C4C9A692BF680* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7E8C4C9A692BF680* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7E8C4C9A692BF680*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
