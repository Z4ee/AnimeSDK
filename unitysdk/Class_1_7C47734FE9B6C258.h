#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DA16F6EFFF969A86;
class Class_3_CD04D3296DF4C842_13;
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_7C47734FE9B6C258_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90BF680)
#define CLASS_1_7C47734FE9B6C258_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x90C0D50)
#define CLASS_1_7C47734FE9B6C258_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x90C0D60)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x90BFB30)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x90C0870)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x90BFB90)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x90C0820)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_6A5C5217AEC4B770_OFFSET UNITYSDK_OFFSET(0x90BF720)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x90BFA00)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_93220B0E3A54D36B_OFFSET UNITYSDK_OFFSET(0x90C0120)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x90BFC40)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x90BF7A0)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x90BFF70)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x90C0D40)
#define CLASS_1_7C47734FE9B6C258_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x90C0A60)
#define CLASS_1_7C47734FE9B6C258_SET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x90C0D70)
#define CLASS_1_7C47734FE9B6C258__CCTOR_OFFSET UNITYSDK_OFFSET(0x90C0D80)
#define CLASS_1_7C47734FE9B6C258__CTOR_OFFSET UNITYSDK_OFFSET(0x90BF670)

inline static constexpr unsigned int Class_1_7C47734FE9B6C258_TypeDefinitionIndex = 72193;

class Class_1_7C47734FE9B6C258 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C47734FE9B6C258_TypeDefinitionIndex)->GetStaticField(0x10350);
	}
	::Struct_2_2B16FFFF87B43037 Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* Field_1_3; // 0x20
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_1_0; // 0x28
	::Class_3_CD04D3296DF4C842_13* Field_1_6; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_1_7; // 0x38
	::RPG::GameCore::GameEntity* Field_1_2; // 0x40
	::UnityEngine::Vector3 Field_1_4; // 0x48
	::System::Int32 Field_1_5; // 0x54
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x58
	::System::Boolean Field_1_1; // 0x59

	::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6A5C5217AEC4B770(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_6A5C5217AEC4B770_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF2CFBAAD2629B3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_AF2CFBAAD2629B3B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93220B0E3A54D36B(::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* a1, ::Class_3_CD04D3296DF4C842_13* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>*, ::Class_3_CD04D3296DF4C842_13*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_93220B0E3A54D36B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_5739CCCE693D1FCB_OFFSET))(this);
	}

	::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Void Method_1_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void set_EnableAnimatorMoveCallback(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_SET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this, value);
	}
};
