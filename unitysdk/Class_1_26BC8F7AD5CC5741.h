#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_1_DA16F6EFFF969A86;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_26BC8F7AD5CC5741_DISPOSE_OFFSET UNITYSDK_OFFSET(0x998F130)
#define CLASS_1_26BC8F7AD5CC5741_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x998F180)
#define CLASS_1_26BC8F7AD5CC5741_METHOD_1_937B45B908BF4585_OFFSET UNITYSDK_OFFSET(0x998F630)
#define CLASS_1_26BC8F7AD5CC5741_METHOD_1_B14AF50E792AA783_OFFSET UNITYSDK_OFFSET(0x998F3A0)
#define CLASS_1_26BC8F7AD5CC5741__CTOR_OFFSET UNITYSDK_OFFSET(0x998F120)
#define CLASS_1_26BC8F7AD5CC5741__START_B__2_0_OFFSET UNITYSDK_OFFSET(0x998FB60)
#define CLASS_1_26BC8F7AD5CC5741__STOP_B__3_0_OFFSET UNITYSDK_OFFSET(0x998FB70)

inline static constexpr unsigned int Class_1_26BC8F7AD5CC5741_TypeDefinitionIndex = 72194;

class Class_1_26BC8F7AD5CC5741 : public ::System::Object
{
public:
	::RPG::Client::MonoEffect* Field_1_4; // 0x10
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_1_0; // 0x18
	::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* Field_1_6; // 0x20
	::UnityEngine::Coroutine* Field_1_10; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::Action* Field_1_3; // 0x38
	::System::Int32 Field_1_7; // 0x40
	::System::Boolean Field_1_5; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Single Field_1_2; // 0x4C
	::System::Single Field_1_8; // 0x50

	::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B14AF50E792AA783(::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DA16F6EFFF969A86*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741_METHOD_1_B14AF50E792AA783_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_1_937B45B908BF4585(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741_METHOD_1_937B45B908BF4585_OFFSET))(this, a1);
	}

	::System::Void _Start_b__2_0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741__START_B__2_0_OFFSET))(this, eff, extraParams);
	}

	::System::Void _Stop_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26BC8F7AD5CC5741__STOP_B__3_0_OFFSET))(this);
	}
};
