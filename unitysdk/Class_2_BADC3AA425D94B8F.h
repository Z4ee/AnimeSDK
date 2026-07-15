#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueMagicEnterNextRoom; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BADC3AA425D94B8F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AC55E0)
#define CLASS_2_BADC3AA425D94B8F_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x14AC5480)
#define CLASS_2_BADC3AA425D94B8F_METHOD_2_C8F03EB4AC0A2737_1_OFFSET UNITYSDK_OFFSET(0x14AC5690)
#define CLASS_2_BADC3AA425D94B8F_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x14AC5630)
#define CLASS_2_BADC3AA425D94B8F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14AC4F90)
#define CLASS_2_BADC3AA425D94B8F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14AC5590)
#define CLASS_2_BADC3AA425D94B8F_TICK_OFFSET UNITYSDK_OFFSET(0x14AC4F30)
#define CLASS_2_BADC3AA425D94B8F__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC4F20)

inline static constexpr unsigned int Class_2_BADC3AA425D94B8F_TypeDefinitionIndex = 55850;

class Class_2_BADC3AA425D94B8F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicEnterNextRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicEnterNextRoom*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8F03EB4AC0A2737_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_METHOD_2_C8F03EB4AC0A2737_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}
};
