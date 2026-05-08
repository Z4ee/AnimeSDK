#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17526390)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175263D0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__ONZONEENTER_B__13_0_OFFSET UNITYSDK_OFFSET(0x175263E0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__ONZONEENTER_B__13_1_OFFSET UNITYSDK_OFFSET(0x175265B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__ONZONEENTER_B__13_2_OFFSET UNITYSDK_OFFSET(0x17526780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIKInMainCity___c_TypeDefinitionIndex = 69981;

	class AnimatorZoneLookIKInMainCity___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::AnimatorZoneLookIKInMainCity___c** StaticGet___9()
		{
			return (::MoleMole::Config::AnimatorZoneLookIKInMainCity___c**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLookIKInMainCity___c_TypeDefinitionIndex)->GetStaticField(0x3A1F0);
		}
		static ::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>** StaticGet___9__13_1()
		{
			return (::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLookIKInMainCity___c_TypeDefinitionIndex)->GetStaticField(0x3A1F8);
		}
		static ::System::Func_3<::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single>** StaticGet___9__13_2()
		{
			return (::System::Func_3<::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLookIKInMainCity___c_TypeDefinitionIndex)->GetStaticField(0x3A200);
		}
		static ::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>** StaticGet___9__13_0()
		{
			return (::System::Func_5<::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneLookIKInMainCity___c_TypeDefinitionIndex)->GetStaticField(0x3A208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__CTOR_OFFSET))(this);
		}

		::System::Single _OnZoneEnter_b__13_0(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* other, ::UnityEngine::GameObject* modelGo, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__ONZONEENTER_B__13_0_OFFSET))(this, owner, other, modelGo, value);
		}

		::System::Single _OnZoneEnter_b__13_1(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* other, ::UnityEngine::GameObject* modelGo, ::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__ONZONEENTER_B__13_1_OFFSET))(this, owner, other, modelGo, value);
		}

		::System::Single _OnZoneEnter_b__13_2(::MoleMole::Battle::Entity* other, ::UnityEngine::GameObject* modelGo)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___C__ONZONEENTER_B__13_2_OFFSET))(this, other, modelGo);
		}
	};
}
