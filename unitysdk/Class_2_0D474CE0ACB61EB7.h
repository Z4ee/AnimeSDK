#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"

namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0D474CE0ACB61EB7_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0x10CB6930)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0x10CB6160)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x10CB6280)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0x10CB61C0)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_8D6AEC6345FD603D_OFFSET UNITYSDK_OFFSET(0x10CB67B0)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_9F0239B8828757BA_OFFSET UNITYSDK_OFFSET(0x10CB6760)
#define CLASS_2_0D474CE0ACB61EB7_METHOD_2_DD5214337BF2F5A9_OFFSET UNITYSDK_OFFSET(0x10CB6580)
#define CLASS_2_0D474CE0ACB61EB7_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0x10CB6940)
#define CLASS_2_0D474CE0ACB61EB7__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB6950)
#define CLASS_2_0D474CE0ACB61EB7__ONBIND_OFFSET UNITYSDK_OFFSET(0x10CB5EA0)
#define CLASS_2_0D474CE0ACB61EB7__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10CB5FA0)
#define CLASS_2_0D474CE0ACB61EB7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10CB6A20)
#define CLASS_2_0D474CE0ACB61EB7___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10CB6A80)
#define CLASS_2_0D474CE0ACB61EB7___SETUPULTRABTNEFX_B__6_0_OFFSET UNITYSDK_OFFSET(0x10CB69F0)

inline static constexpr unsigned int Class_2_0D474CE0ACB61EB7_TypeDefinitionIndex = 58925;

class Class_2_0D474CE0ACB61EB7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Transform*>* Field_2_3; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::RPG::GameCore::CharacterDataComponent* Field_2_6; // 0x70
	::UnityEngine::UI::Image* Field_2_2; // 0x78
	::RPG::GameCore::DamageTypeRow* Field_2_4; // 0x80
	::RPG::GameCore::SkillCharacterComponent* Field_2_5; // 0x88
	::System::Boolean Field_2_7; // 0x90
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

	::System::Void Method_2_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_01C00AED4805279E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD5214337BF2F5A9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_DD5214337BF2F5A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F0239B8828757BA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_9F0239B8828757BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_METHOD_2_5C3494A3B250FBC5_OFFSET))(this, a1);
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

	::System::Void set_IsUltraMode(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7_SET_ISULTRAMODE_OFFSET))(this, value);
	}

	::System::Void __SetupUltraBtnEfx_b__6_0(::UnityEngine::GameObject* gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7___SETUPULTRABTNEFX_B__6_0_OFFSET))(this, gameObject);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D474CE0ACB61EB7___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
