#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_100A50CE50C90A19;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_AF0CF8D32079A59D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE47AC40)
#define CLASS_2_AF0CF8D32079A59D_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0xE47ADF0)
#define CLASS_2_AF0CF8D32079A59D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE47AD00)
#define CLASS_2_AF0CF8D32079A59D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE47ABF0)
#define CLASS_2_AF0CF8D32079A59D_TICK_OFFSET UNITYSDK_OFFSET(0xE47AB50)
#define CLASS_2_AF0CF8D32079A59D__CTOR_OFFSET UNITYSDK_OFFSET(0xE47AAD0)

inline static constexpr unsigned int Class_2_AF0CF8D32079A59D_TypeDefinitionIndex = 47184;

class Class_2_AF0CF8D32079A59D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_100A50CE50C90A19* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_100A50CE50C90A19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_100A50CE50C90A19*))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF0CF8D32079A59D_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}
};
