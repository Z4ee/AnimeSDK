#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueEvent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_D7F302692E9A4951_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1060BCC0)
#define CLASS_2_D7F302692E9A4951_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1060BBE0)
#define CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_1_OFFSET UNITYSDK_OFFSET(0x1060C070)
#define CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_OFFSET UNITYSDK_OFFSET(0x1060BF50)
#define CLASS_2_D7F302692E9A4951_METHOD_2_B09208268EB27BC3_OFFSET UNITYSDK_OFFSET(0x1060BD10)
#define CLASS_2_D7F302692E9A4951_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1060BE00)
#define CLASS_2_D7F302692E9A4951_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1060BE50)
#define CLASS_2_D7F302692E9A4951_TICK_OFFSET UNITYSDK_OFFSET(0x1060BEA0)
#define CLASS_2_D7F302692E9A4951__CTOR_OFFSET UNITYSDK_OFFSET(0x1060BBB0)

inline static constexpr unsigned int Class_2_D7F302692E9A4951_TypeDefinitionIndex = 55016;

class Class_2_D7F302692E9A4951 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WaitDialogueEvent* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::System::Int32 Field_2_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_B09208268EB27BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_B09208268EB27BC3_OFFSET))(this);
	}
};
