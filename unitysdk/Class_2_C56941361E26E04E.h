#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueEvent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C56941361E26E04E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146995F0)
#define CLASS_2_C56941361E26E04E_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x14699640)
#define CLASS_2_C56941361E26E04E_METHOD_2_75E77C70EE78E158_1_OFFSET UNITYSDK_OFFSET(0x14699A20)
#define CLASS_2_C56941361E26E04E_METHOD_2_75E77C70EE78E158_OFFSET UNITYSDK_OFFSET(0x14699900)
#define CLASS_2_C56941361E26E04E_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x146994E0)
#define CLASS_2_C56941361E26E04E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14699750)
#define CLASS_2_C56941361E26E04E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x146997A0)
#define CLASS_2_C56941361E26E04E_TICK_OFFSET UNITYSDK_OFFSET(0x146997F0)
#define CLASS_2_C56941361E26E04E__CTOR_OFFSET UNITYSDK_OFFSET(0x146994B0)

inline static constexpr unsigned int Class_2_C56941361E26E04E_TypeDefinitionIndex = 56249;

class Class_2_C56941361E26E04E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitDialogueEvent* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::System::Int32 Field_2_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_METHOD_2_75E77C70EE78E158_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_METHOD_2_75E77C70EE78E158_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56941361E26E04E_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}
};
