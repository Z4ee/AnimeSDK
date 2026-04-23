#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueEvent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_A7BB162E408A0EF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9042E60)
#define CLASS_2_A7BB162E408A0EF5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9042DA0)
#define CLASS_2_A7BB162E408A0EF5_METHOD_2_75E77C70EE78E158_1_OFFSET UNITYSDK_OFFSET(0x90431E0)
#define CLASS_2_A7BB162E408A0EF5_METHOD_2_75E77C70EE78E158_OFFSET UNITYSDK_OFFSET(0x90430C0)
#define CLASS_2_A7BB162E408A0EF5_METHOD_2_D15F52B395531E3F_OFFSET UNITYSDK_OFFSET(0x9042EB0)
#define CLASS_2_A7BB162E408A0EF5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9042F70)
#define CLASS_2_A7BB162E408A0EF5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9042FC0)
#define CLASS_2_A7BB162E408A0EF5_TICK_OFFSET UNITYSDK_OFFSET(0x9043010)
#define CLASS_2_A7BB162E408A0EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x9042D70)

inline static constexpr unsigned int Class_2_A7BB162E408A0EF5_TypeDefinitionIndex = 54289;

class Class_2_A7BB162E408A0EF5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitDialogueEvent* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x31
	::System::Int32 Field_2_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_METHOD_2_75E77C70EE78E158_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_METHOD_2_75E77C70EE78E158_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_D15F52B395531E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7BB162E408A0EF5_METHOD_2_D15F52B395531E3F_OFFSET))(this);
	}
};
