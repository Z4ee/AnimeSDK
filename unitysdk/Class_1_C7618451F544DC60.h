#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C7618451F544DC60_CLEAR_OFFSET UNITYSDK_OFFSET(0xB4A3BD0)
#define CLASS_1_C7618451F544DC60_METHOD_1_2D9E314F7B5D88F0_OFFSET UNITYSDK_OFFSET(0xB4A4290)
#define CLASS_1_C7618451F544DC60_METHOD_1_3C7A858EC86F05BF_OFFSET UNITYSDK_OFFSET(0xB4A3F50)
#define CLASS_1_C7618451F544DC60_METHOD_1_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0xB4A4E00)
#define CLASS_1_C7618451F544DC60_METHOD_1_A3FDDB54377E07F5_OFFSET UNITYSDK_OFFSET(0xB4A4370)
#define CLASS_1_C7618451F544DC60_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0xB4A4080)
#define CLASS_1_C7618451F544DC60_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4A4DA0)
#define CLASS_1_C7618451F544DC60_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xB4A3CB0)
#define CLASS_1_C7618451F544DC60_METHOD_1_EF78D1C8F5F25917_OFFSET UNITYSDK_OFFSET(0xB4A41E0)
#define CLASS_1_C7618451F544DC60_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xB4A4490)
#define CLASS_1_C7618451F544DC60_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xB4A42F0)
#define CLASS_1_C7618451F544DC60_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xB4A48F0)
#define CLASS_1_C7618451F544DC60_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xB4A4930)
#define CLASS_1_C7618451F544DC60_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xB4A4EB0)
#define CLASS_1_C7618451F544DC60__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A4EF0)

inline static constexpr unsigned int Class_1_C7618451F544DC60_TypeDefinitionIndex = 52711;

class Class_1_C7618451F544DC60 : public ::System::Object
{
public:
	::System::String* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_13; // 0x18
	::RPG::Client::CharacterShaderPropertyTransition* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_12; // 0x28
	::RPG::GameCore::ResidentPossessionInfo* Field_1_2; // 0x30
	::RPG::GameCore::GameEntity* Field_1_0; // 0x38
	::Class_1_9CBC71DC5240DC00* Field_1_10; // 0x40
	::UnityEngine::Transform* Field_1_5; // 0x48
	::UnityEngine::Animator* Field_1_7; // 0x50
	::UnityEngine::GameObject* Field_1_6; // 0x58
	::System::String* Field_1_15; // 0x60
	::System::String* Field_1_8; // 0x68
	::UnityEngine::Quaternion Field_1_4; // 0x70
	::UnityEngine::Vector3 Field_1_3; // 0x80
	::System::Boolean Field_1_9; // 0x8C
	::System::Single Field_1_11; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3C7A858EC86F05BF(::RPG::GameCore::GameEntity* a1, ::RPG::Client::CharacterShaderPropertyTransition* a2, ::UnityEngine::Transform* a3, ::RPG::GameCore::ResidentPossessionInfo* a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::CharacterShaderPropertyTransition*, ::UnityEngine::Transform*, ::RPG::GameCore::ResidentPossessionInfo*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_3C7A858EC86F05BF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3FDDB54377E07F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_A3FDDB54377E07F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A7CEF06F8896271(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_6A7CEF06F8896271_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2D9E314F7B5D88F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_2D9E314F7B5D88F0_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	static ::System::Void Method_1_EF78D1C8F5F25917(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_EF78D1C8F5F25917_OFFSET))(a1, a2);
	}
};
