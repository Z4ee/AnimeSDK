#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
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

#define CLASS_1_C7618451F544DC60_CLEAR_OFFSET UNITYSDK_OFFSET(0x15FF92C0)
#define CLASS_1_C7618451F544DC60_METHOD_1_3C7A858EC86F05BF_OFFSET UNITYSDK_OFFSET(0x15FF9630)
#define CLASS_1_C7618451F544DC60_METHOD_1_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0x15FFA4D0)
#define CLASS_1_C7618451F544DC60_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x15FF9390)
#define CLASS_1_C7618451F544DC60_METHOD_1_A3B219A44BBB402C_OFFSET UNITYSDK_OFFSET(0x15FF9A50)
#define CLASS_1_C7618451F544DC60_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x15FF9970)
#define CLASS_1_C7618451F544DC60_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x15FF9760)
#define CLASS_1_C7618451F544DC60_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FFA470)
#define CLASS_1_C7618451F544DC60_METHOD_1_EF78D1C8F5F25917_OFFSET UNITYSDK_OFFSET(0x15FF98C0)
#define CLASS_1_C7618451F544DC60_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x15FF9B70)
#define CLASS_1_C7618451F544DC60_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15FF99D0)
#define CLASS_1_C7618451F544DC60_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x15FF9FC0)
#define CLASS_1_C7618451F544DC60_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x15FFA000)
#define CLASS_1_C7618451F544DC60_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x15FFA580)
#define CLASS_1_C7618451F544DC60__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFA5C0)

inline static constexpr unsigned int Class_1_C7618451F544DC60_TypeDefinitionIndex = 54629;

class Class_1_C7618451F544DC60 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::GameCore::GameEntity* Field_1_4; // 0x30
	::RPG::Client::CharacterShaderPropertyTransition* Field_1_5; // 0x38
	::Class_1_1342B57709FD7AC5* Field_1_6; // 0x40
	::RPG::GameCore::ResidentPossessionInfo* Field_1_7; // 0x48
	::UnityEngine::GameObject* Field_1_8; // 0x50
	::System::String* Field_1_9; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_10; // 0x60
	::UnityEngine::Animator* Field_1_11; // 0x68
	::UnityEngine::Vector3 Field_1_12; // 0x70
	::UnityEngine::Quaternion Field_1_13; // 0x7C
	::System::Boolean Field_1_14; // 0x8C
	::System::Single Field_1_15; // 0x90

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

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3B219A44BBB402C(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_A3B219A44BBB402C_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_BD658202BB4C4431_OFFSET))(this);
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
