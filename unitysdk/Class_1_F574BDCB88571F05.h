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

#define CLASS_1_F574BDCB88571F05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1644D590)
#define CLASS_1_F574BDCB88571F05_METHOD_1_22029239F59360DB_OFFSET UNITYSDK_OFFSET(0x1644D7E0)
#define CLASS_1_F574BDCB88571F05_METHOD_1_937B45B908BF4585_OFFSET UNITYSDK_OFFSET(0x1644DA50)
#define CLASS_1_F574BDCB88571F05_METHOD_1_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x1644D5E0)
#define CLASS_1_F574BDCB88571F05__CTOR_OFFSET UNITYSDK_OFFSET(0x1644D580)
#define CLASS_1_F574BDCB88571F05__START_B__2_0_OFFSET UNITYSDK_OFFSET(0x1644DF20)
#define CLASS_1_F574BDCB88571F05__STOP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1644DF30)

inline static constexpr unsigned int Class_1_F574BDCB88571F05_TypeDefinitionIndex = 74741;

class Class_1_F574BDCB88571F05 : public ::System::Object
{
public:
	::RPG::Client::MonoEffect* Field_1_0; // 0x10
	::UnityEngine::Coroutine* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* Field_1_2; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x44
	::System::Int32 Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x4C
	::System::Boolean Field_1_10; // 0x50

	::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_22029239F59360DB(::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* a1, ::System::Single a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_DA16F6EFFF969A86*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05_METHOD_1_22029239F59360DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05_METHOD_1_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_1_937B45B908BF4585(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05_METHOD_1_937B45B908BF4585_OFFSET))(this, a1);
	}

	::System::Void _Start_b__2_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05__START_B__2_0_OFFSET))(this, a1, a2);
	}

	::System::Void _Stop_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05__STOP_B__3_0_OFFSET))(this);
	}
};
