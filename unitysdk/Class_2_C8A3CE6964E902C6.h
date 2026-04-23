#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class EntityEraFlipperShowListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C8A3CE6964E902C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BCAF00)
#define CLASS_2_C8A3CE6964E902C6_METHOD_2_FD07B0BB3D3DAD65_OFFSET UNITYSDK_OFFSET(0x9BCB050)
#define CLASS_2_C8A3CE6964E902C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9BCACC0)
#define CLASS_2_C8A3CE6964E902C6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9BCADF0)
#define CLASS_2_C8A3CE6964E902C6_TICK_OFFSET UNITYSDK_OFFSET(0x9BCB2E0)
#define CLASS_2_C8A3CE6964E902C6__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCABD0)

inline static constexpr unsigned int Class_2_C8A3CE6964E902C6_TypeDefinitionIndex = 48692;

class Class_2_C8A3CE6964E902C6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EntityEraFlipperShowListener* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityEraFlipperShowListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityEraFlipperShowListener*))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FD07B0BB3D3DAD65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_METHOD_2_FD07B0BB3D3DAD65_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C8A3CE6964E902C6_TICK_OFFSET))(this, a1);
	}
};
