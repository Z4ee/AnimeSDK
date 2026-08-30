#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"

namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0D474CE0ACB61EB7_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xC411CF0)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_11F90B354314AA3B_OFFSET UNITYSDK_OFFSET(0xC411960)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_15935C22F36A0728_OFFSET UNITYSDK_OFFSET(0xC411B30)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xC411560)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_4C4EF158A7663D09_OFFSET UNITYSDK_OFFSET(0xC411440)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_7EEB862686CC49A7_OFFSET UNITYSDK_OFFSET(0xC4113E0)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_8D6AEC6345FD603D_OFFSET UNITYSDK_OFFSET(0xC411B80)
#define CLASS_2_0D474CE0ACB61EB7_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xC411D00)
#define CLASS_2_0D474CE0ACB61EB7__CTOR_OFFSET UNITYSDK_OFFSET(0xC411D10)
#define CLASS_2_0D474CE0ACB61EB7__ONBIND_OFFSET UNITYSDK_OFFSET(0xC411110)
#define CLASS_2_0D474CE0ACB61EB7__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC4111C0)
#define CLASS_2_0D474CE0ACB61EB7___SETUPULTRABTNEFX_B__6_0_OFFSET UNITYSDK_OFFSET(0xC411DB0)

inline static constexpr unsigned int Class_2_0D474CE0ACB61EB7_TypeDefinitionIndex = 71890;

class Class_2_0D474CE0ACB61EB7 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::DamageTypeRow* LPEJACFNIDK; // 0x60
	::UnityEngine::UI::Image* NBOHBGJDNKF; // 0x68
	::UnityEngine::Transform* POGABPLIMMH; // 0x70
	::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Transform*>* IILGGIHNCMC; // 0x80
	::RPG::GameCore::SkillCharacterComponent* DLKGKDBPHOH; // 0x88
	::System::Boolean CGEIJFBMLLE; // 0x90
	::System::Boolean _IsUltraMode_k__BackingField; // 0x91

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7EEB862686CC49A7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_7EEB862686CC49A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_11F90B354314AA3B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_11F90B354314AA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_15935C22F36A0728(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_15935C22F36A0728_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C4EF158A7663D09(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_4C4EF158A7663D09_OFFSET))(this, a1);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_8D6AEC6345FD603D(::UnityEngine::GameObject* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_8D6AEC6345FD603D_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsUltraMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_GET_ISULTRAMODE_OFFSET))(this);
	}

	::System::Void set_IsUltraMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_SET_ISULTRAMODE_OFFSET))(this, a1);
	}

	::System::Void __SetupUltraBtnEfx_b__6_0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7___SETUPULTRABTNEFX_B__6_0_OFFSET))(this, a1);
	}
};
