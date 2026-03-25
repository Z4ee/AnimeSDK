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

#define CLASS_1_CA94B2464952AA33_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111461A0)
#define CLASS_1_CA94B2464952AA33_METHOD_1_7F52B6EB17420685_OFFSET UNITYSDK_OFFSET(0x111463E0)
#define CLASS_1_CA94B2464952AA33_METHOD_1_937B45B908BF4585_OFFSET UNITYSDK_OFFSET(0x11146670)
#define CLASS_1_CA94B2464952AA33_METHOD_1_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x111461F0)
#define CLASS_1_CA94B2464952AA33__CTOR_OFFSET UNITYSDK_OFFSET(0x11146190)
#define CLASS_1_CA94B2464952AA33__START_B__2_0_OFFSET UNITYSDK_OFFSET(0x11146BA0)
#define CLASS_1_CA94B2464952AA33__STOP_B__3_0_OFFSET UNITYSDK_OFFSET(0x11146BB0)

inline static constexpr unsigned int Class_1_CA94B2464952AA33_TypeDefinitionIndex = 64147;

class Class_1_CA94B2464952AA33 : public ::System::Object
{
public:
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* Field_1_6; // 0x28
	::RPG::Client::MonoEffect* Field_1_4; // 0x30
	::UnityEngine::Coroutine* Field_1_10; // 0x38
	::System::Single Field_1_2; // 0x40
	::System::Single Field_1_9; // 0x44
	::System::Single Field_1_8; // 0x48
	::System::Boolean Field_1_5; // 0x4C
	::System::Int32 Field_1_7; // 0x50

	::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7F52B6EB17420685(::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DA16F6EFFF969A86*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33_METHOD_1_7F52B6EB17420685_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33_METHOD_1_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_1_937B45B908BF4585(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33_METHOD_1_937B45B908BF4585_OFFSET))(this, a1);
	}

	::System::Void _Start_b__2_0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33__START_B__2_0_OFFSET))(this, eff, extraParams);
	}

	::System::Void _Stop_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA94B2464952AA33__STOP_B__3_0_OFFSET))(this);
	}
};
