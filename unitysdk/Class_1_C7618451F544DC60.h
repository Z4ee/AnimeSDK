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

#define CLASS_1_C7618451F544DC60_CLEAR_OFFSET UNITYSDK_OFFSET(0x15593980)
#define CLASS_1_C7618451F544DC60_METHOD_1_3C7A858EC86F05BF_OFFSET UNITYSDK_OFFSET(0x15593D00)
#define CLASS_1_C7618451F544DC60_METHOD_1_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0x15594C90)
#define CLASS_1_C7618451F544DC60_METHOD_1_7F4785C9A769CFCC_OFFSET UNITYSDK_OFFSET(0x15594BD0)
#define CLASS_1_C7618451F544DC60_METHOD_1_A3B219A44BBB402C_OFFSET UNITYSDK_OFFSET(0x15594120)
#define CLASS_1_C7618451F544DC60_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x15594040)
#define CLASS_1_C7618451F544DC60_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x15593E30)
#define CLASS_1_C7618451F544DC60_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15594B70)
#define CLASS_1_C7618451F544DC60_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x15593A60)
#define CLASS_1_C7618451F544DC60_METHOD_1_EF78D1C8F5F25917_OFFSET UNITYSDK_OFFSET(0x15593F90)
#define CLASS_1_C7618451F544DC60_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x15594240)
#define CLASS_1_C7618451F544DC60_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x155940A0)
#define CLASS_1_C7618451F544DC60_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x155946A0)
#define CLASS_1_C7618451F544DC60_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x155946E0)
#define CLASS_1_C7618451F544DC60_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x15594D40)
#define CLASS_1_C7618451F544DC60__CTOR_OFFSET UNITYSDK_OFFSET(0x15594D80)

inline static constexpr unsigned int Class_1_C7618451F544DC60_TypeDefinitionIndex = 57350;

class Class_1_C7618451F544DC60 : public ::System::Object
{
public:
	::System::String* ODHMHECLFCO; // 0x10
	::RPG::GameCore::ResidentPossessionInfo* IGHAHBNLIJA; // 0x18
	::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x20
	::UnityEngine::GameObject* AFGEEDIJOJF; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* IBIHAHMDJOG; // 0x30
	::RPG::Client::CharacterShaderPropertyTransition* EPOBIDJNGOL; // 0x38
	::System::String* KHHGBMCHGPL; // 0x40
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x48
	::UnityEngine::Animator* APPGGMLEPLN; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* POLGHOLICMA; // 0x58
	::UnityEngine::Transform* OEPDOMNEOHO; // 0x60
	::System::String* BEGBPEHAEDM; // 0x68
	::UnityEngine::Quaternion KCBAMAPIPFI; // 0x70
	::System::Boolean GGCFLAOOJNN; // 0x80
	::UnityEngine::Vector3 FPILBEAAACE; // 0x84
	::System::Single CKIDJOPJMBP; // 0x90

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

	::System::Void Method_1_7F4785C9A769CFCC(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7618451F544DC60_METHOD_1_7F4785C9A769CFCC_OFFSET))(this, a1);
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
