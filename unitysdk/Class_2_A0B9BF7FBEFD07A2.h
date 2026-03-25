#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class RegionEraStateChangeListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A0B9BF7FBEFD07A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11338C50)
#define CLASS_2_A0B9BF7FBEFD07A2_METHOD_2_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x11338940)
#define CLASS_2_A0B9BF7FBEFD07A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113386B0)
#define CLASS_2_A0B9BF7FBEFD07A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11338BA0)
#define CLASS_2_A0B9BF7FBEFD07A2_TICK_OFFSET UNITYSDK_OFFSET(0x11338CE0)
#define CLASS_2_A0B9BF7FBEFD07A2__CTOR_OFFSET UNITYSDK_OFFSET(0x113385C0)

inline static constexpr unsigned int Class_2_A0B9BF7FBEFD07A2_TypeDefinitionIndex = 42721;

class Class_2_A0B9BF7FBEFD07A2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RegionEraStateChangeListener* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x38

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
