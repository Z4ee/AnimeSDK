#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_C8461ACA8308A704_1;
class Class_3_626F93E2306641CC;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_76EDC4204ABFABB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98D7470)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x98D7060)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_180D9ACE81B1A373_OFFSET UNITYSDK_OFFSET(0x98D7AC0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_2717C2A23ACE968B_OFFSET UNITYSDK_OFFSET(0x98D7140)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_2EF615CF24478184_OFFSET UNITYSDK_OFFSET(0x98D7720)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0x98D87C0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x98D84E0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_576602B4DA6F3AEC_OFFSET UNITYSDK_OFFSET(0x98D7DC0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_623643C0C3A7D44D_OFFSET UNITYSDK_OFFSET(0x98D83B0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_6426CAFBEED664F1_OFFSET UNITYSDK_OFFSET(0x98D8560)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_75D9556BC06CB137_OFFSET UNITYSDK_OFFSET(0x98D7CA0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_89DD45DBE5CED3C0_OFFSET UNITYSDK_OFFSET(0x98D74C0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x98D70E0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_B053531564D8300B_OFFSET UNITYSDK_OFFSET(0x98D7F80)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_B0EB5E9F15C139C7_OFFSET UNITYSDK_OFFSET(0x98D7980)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_B93F3FB1953601EE_OFFSET UNITYSDK_OFFSET(0x98D6FD0)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_CBFF4958CF587A4B_OFFSET UNITYSDK_OFFSET(0x98D7200)
#define CLASS_1_76EDC4204ABFABB7_METHOD_1_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0x98D77E0)
#define CLASS_1_76EDC4204ABFABB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x98D8840)
#define CLASS_1_76EDC4204ABFABB7__CTOR_OFFSET UNITYSDK_OFFSET(0x98D7380)

inline static constexpr unsigned int Class_1_76EDC4204ABFABB7_TypeDefinitionIndex = 71529;

class Class_1_76EDC4204ABFABB7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76EDC4204ABFABB7_TypeDefinitionIndex)->GetStaticField(0x14E20);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParams*>* Field_1_17; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_18; // 0x18
	::Class_3_626F93E2306641CC* Field_1_16; // 0x20

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7__CCTOR_OFFSET))();
	}

	::System::String* Method_1_B93F3FB1953601EE(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_B93F3FB1953601EE_OFFSET))(this, a1);
	}

	::Class_2_C8461ACA8308A704_1* Method_1_08A44229CA25E941()
	{
		return ((::Class_2_C8461ACA8308A704_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_08A44229CA25E941_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_90EC931103FB6F31_OFFSET))(this);
	}

	::RPG::Client::MonoEffectManager* Method_1_2717C2A23ACE968B()
	{
		return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_2717C2A23ACE968B_OFFSET))(this);
	}

	static ::Class_1_76EDC4204ABFABB7* Method_1_CBFF4958CF587A4B(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_76EDC4204ABFABB7*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_CBFF4958CF587A4B_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89DD45DBE5CED3C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_89DD45DBE5CED3C0_OFFSET))(this);
	}

	::RPG::Client::TriggerEffectParams* Method_1_B0EB5E9F15C139C7(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_B0EB5E9F15C139C7_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::TriggerEffectParams* Method_1_180D9ACE81B1A373(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_180D9ACE81B1A373_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MonoEffect* Method_1_576602B4DA6F3AEC(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_576602B4DA6F3AEC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2EF615CF24478184(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_2EF615CF24478184_OFFSET))(this, a1);
	}

	::System::Void Method_1_75D9556BC06CB137(::System::Single a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_75D9556BC06CB137_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Int32, ::UnityEngine::GameObject*> Method_1_B053531564D8300B(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::UnityEngine::GameObject*>(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_B053531564D8300B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_CCAAE56E08561869_OFFSET))(this, a1);
	}

	::System::Void Method_1_623643C0C3A7D44D(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_623643C0C3A7D44D_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}

	::System::Boolean Method_1_6426CAFBEED664F1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76EDC4204ABFABB7_METHOD_1_6426CAFBEED664F1_OFFSET))(this);
	}
};
