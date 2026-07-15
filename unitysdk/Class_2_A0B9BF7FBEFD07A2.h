#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RegionEraStateChangeListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A0B9BF7FBEFD07A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17301A40)
#define CLASS_2_A0B9BF7FBEFD07A2_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x17301730)
#define CLASS_2_A0B9BF7FBEFD07A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17301490)
#define CLASS_2_A0B9BF7FBEFD07A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17301980)
#define CLASS_2_A0B9BF7FBEFD07A2_TICK_OFFSET UNITYSDK_OFFSET(0x17301BB0)
#define CLASS_2_A0B9BF7FBEFD07A2__CTOR_OFFSET UNITYSDK_OFFSET(0x173013A0)

inline static constexpr unsigned int Class_2_A0B9BF7FBEFD07A2_TypeDefinitionIndex = 50381;

class Class_2_A0B9BF7FBEFD07A2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RegionEraStateChangeListener* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RegionEraStateChangeListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RegionEraStateChangeListener*))((::PBYTE)hIl2Cpp + CLASS_2_A0B9BF7FBEFD07A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0B9BF7FBEFD07A2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0B9BF7FBEFD07A2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0B9BF7FBEFD07A2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A0B9BF7FBEFD07A2_METHOD_2_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A0B9BF7FBEFD07A2_TICK_OFFSET))(this, a1);
	}
};
