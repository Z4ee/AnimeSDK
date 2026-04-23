#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueMagicFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BADC3AA425D94B8F_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B8B5E0)
#define CLASS_2_BADC3AA425D94B8F_1_METHOD_2_326667BB73F9EA49_OFFSET UNITYSDK_OFFSET(0x9B8B500)
#define CLASS_2_BADC3AA425D94B8F_1_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x9B8B630)
#define CLASS_2_BADC3AA425D94B8F_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9B8B370)
#define CLASS_2_BADC3AA425D94B8F_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9B8B590)
#define CLASS_2_BADC3AA425D94B8F_1_TICK_OFFSET UNITYSDK_OFFSET(0x9B8B310)
#define CLASS_2_BADC3AA425D94B8F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B300)

inline static constexpr unsigned int Class_2_BADC3AA425D94B8F_1_TypeDefinitionIndex = 53901;

class Class_2_BADC3AA425D94B8F_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicFinish*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_326667BB73F9EA49()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_1_METHOD_2_326667BB73F9EA49_OFFSET))(this);
	}
};
