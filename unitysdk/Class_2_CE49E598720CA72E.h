#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class DecalPuzzle; }
namespace RPG::Client { class FreeDecal; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_2_CE49E598720CA72E_METHOD_2_37B10ADE5E9E91EF_OFFSET UNITYSDK_OFFSET(0x13CD2790)
#define CLASS_2_CE49E598720CA72E_METHOD_2_52510872F1FAAB30_OFFSET UNITYSDK_OFFSET(0x13CD0250)
#define CLASS_2_CE49E598720CA72E_METHOD_2_5B427BE6315F9B40_OFFSET UNITYSDK_OFFSET(0x13CD01B0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_6BC7335E83B35013_OFFSET UNITYSDK_OFFSET(0x13CCF770)
#define CLASS_2_CE49E598720CA72E_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x13CD2060)
#define CLASS_2_CE49E598720CA72E_METHOD_2_7CB38613B004D178_OFFSET UNITYSDK_OFFSET(0x13CD21B0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_81EAE04AE64DEBC7_OFFSET UNITYSDK_OFFSET(0x13CCF960)
#define CLASS_2_CE49E598720CA72E_METHOD_2_823D2321780524FA_OFFSET UNITYSDK_OFFSET(0x13CD22C0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x13CCF7E0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_B8AE0D2E790CBF66_OFFSET UNITYSDK_OFFSET(0x13CD2650)
#define CLASS_2_CE49E598720CA72E_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x13CD2160)
#define CLASS_2_CE49E598720CA72E_METHOD_2_C864ACA97B30C73D_OFFSET UNITYSDK_OFFSET(0x13CD03E0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x13CD0AE0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_D0EDFA57F5E97657_OFFSET UNITYSDK_OFFSET(0x13CD19F0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x13CD0900)
#define CLASS_2_CE49E598720CA72E_METHOD_2_E0C2C06EB965A1D6_OFFSET UNITYSDK_OFFSET(0x13CCF530)
#define CLASS_2_CE49E598720CA72E_METHOD_2_E53F85027BE01D72_OFFSET UNITYSDK_OFFSET(0x13CD1DD0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_E6EB3DAD63B8AE72_OFFSET UNITYSDK_OFFSET(0x13CCFFA0)
#define CLASS_2_CE49E598720CA72E_METHOD_2_E92A0511BEF15ED2_OFFSET UNITYSDK_OFFSET(0x13CD0650)
#define CLASS_2_CE49E598720CA72E__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD28E0)

inline static constexpr unsigned int Class_2_CE49E598720CA72E_TypeDefinitionIndex = 64237;

class Class_2_CE49E598720CA72E : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x18
	::UnityEngine::SphereCollider* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::EventManager* Field_2_4; // 0x38
	::System::String* Field_2_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_6; // 0x48
	::UnityEngine::BoxCollider* Field_2_7; // 0x50
	::RPG::GameCore::GameEntity* Field_2_8; // 0x58
	::RPG::GameCore::PropComponent* Field_2_9; // 0x60
	::System::Single Field_2_10; // 0x68
	::System::Boolean Field_2_11; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E0C2C06EB965A1D6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_E0C2C06EB965A1D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_81EAE04AE64DEBC7(::RPG::Client::FreeDecal* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_81EAE04AE64DEBC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E92A0511BEF15ED2(::RPG::Client::FreeDecal* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_E92A0511BEF15ED2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_2_D0EDFA57F5E97657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_D0EDFA57F5E97657_OFFSET))(this);
	}

	::System::Void Method_2_E53F85027BE01D72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_E53F85027BE01D72_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B427BE6315F9B40(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_5B427BE6315F9B40_OFFSET))(this, a1);
	}

	::System::Void Method_2_52510872F1FAAB30(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_52510872F1FAAB30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C864ACA97B30C73D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_C864ACA97B30C73D_OFFSET))(this);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_2_823D2321780524FA(::UnityEngine::Rect a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_823D2321780524FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B8AE0D2E790CBF66(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_B8AE0D2E790CBF66_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_E6EB3DAD63B8AE72(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_E6EB3DAD63B8AE72_OFFSET))(this, a1);
	}

	::System::Void Method_2_37B10ADE5E9E91EF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_37B10ADE5E9E91EF_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_7CB38613B004D178()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_7CB38613B004D178_OFFSET))(this);
	}

	::RPG::Client::DecalPuzzle* Method_2_6BC7335E83B35013()
	{
		return ((::RPG::Client::DecalPuzzle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE49E598720CA72E_METHOD_2_6BC7335E83B35013_OFFSET))(this);
	}
};
