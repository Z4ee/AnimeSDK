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

#define CLASS_1_F574BDCB88571F05_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFAE120)
#define CLASS_1_F574BDCB88571F05_METHOD_1_22029239F59360DB_OFFSET UNITYSDK_OFFSET(0xBFAE3A0)
#define CLASS_1_F574BDCB88571F05_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0xBFAE170)
#define CLASS_1_F574BDCB88571F05_METHOD_1_937B45B908BF4585_OFFSET UNITYSDK_OFFSET(0xBFAE610)
#define CLASS_1_F574BDCB88571F05__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAE110)
#define CLASS_1_F574BDCB88571F05__START_B__2_0_OFFSET UNITYSDK_OFFSET(0xBFAEAE0)
#define CLASS_1_F574BDCB88571F05__STOP_B__3_0_OFFSET UNITYSDK_OFFSET(0xBFAEAF0)

inline static constexpr unsigned int Class_1_F574BDCB88571F05_TypeDefinitionIndex = 78227;

class Class_1_F574BDCB88571F05 : public ::System::Object
{
public:
	::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x10
	::RPG::Client::MonoEffect* LBNBPMIFDHI; // 0x18
	::System::Action* HIBJGHDJLJO; // 0x20
	::Il2CppArray<::Class_1_DA16F6EFFF969A86*>* EJJJMLPECEJ; // 0x28
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* MIPPNCGOJNM; // 0x30
	::System::String* NNIOCPHFNNG; // 0x38
	::System::Boolean OFEPHLEKKCD; // 0x40
	::System::Single HPCHCEFOKJB; // 0x44
	::System::Int32 LMOHABJNMFF; // 0x48
	::System::Single GHABAAOGBNO; // 0x4C
	::System::Single CHIPCDEFEPM; // 0x50

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

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F574BDCB88571F05_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
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
