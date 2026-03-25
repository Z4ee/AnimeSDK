#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueTakeInitialScore; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_B0070F8621287131_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115AF020)
#define CLASS_2_B0070F8621287131_METHOD_2_500BD386E62721C9_OFFSET UNITYSDK_OFFSET(0x115AF460)
#define CLASS_2_B0070F8621287131_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115AF110)
#define CLASS_2_B0070F8621287131_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x115AF410)
#define CLASS_2_B0070F8621287131_TICK_OFFSET UNITYSDK_OFFSET(0x115AF0B0)
#define CLASS_2_B0070F8621287131__CTOR_OFFSET UNITYSDK_OFFSET(0x115AF010)

inline static constexpr unsigned int Class_2_B0070F8621287131_TypeDefinitionIndex = 47175;

class Class_2_B0070F8621287131 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueTakeInitialScore* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + CLASS_2_B0070F8621287131__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0070F8621287131_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B0070F8621287131_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0070F8621287131_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0070F8621287131_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_500BD386E62721C9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B0070F8621287131_METHOD_2_500BD386E62721C9_OFFSET))(this, a1, a2);
	}
};
