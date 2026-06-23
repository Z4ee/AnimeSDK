#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class MonoEntityModelModifier_ColliderInfo; }
namespace MoleMole { class MonoEntityModelModifier_ConfigModifier; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOENTITYMODELMODIFIER_APPLYMODIFIER_OFFSET UNITYSDK_OFFSET(0x14193660)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_EMPTY_OFFSET UNITYSDK_OFFSET(0x14193190)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x141932A0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_METHOD_5_00E3CB98672EAAF8_OFFSET UNITYSDK_OFFSET(0x141938F0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_METHOD_5_1750D05A3312F1DF_OFFSET UNITYSDK_OFFSET(0x14194F70)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_METHOD_5_6807236CD968DC6B_OFFSET UNITYSDK_OFFSET(0x141951D0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x141934E0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x141933D0)
#define MOLEMOLE_MONOENTITYMODELMODIFIER_REMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0x14195060)
#define MOLEMOLE_MONOENTITYMODELMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14195130)
#define MOLEMOLE_MONOENTITYMODELMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x141950A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityModelModifier_TypeDefinitionIndex = 77652;

	class MonoEntityModelModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityModelModifier*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityModelModifier*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityModelModifier_TypeDefinitionIndex)->GetStaticField(0x48600);
		}
		::System::String* _originPoint; // 0x18
		::System::String* _controlPoint1; // 0x20
		::System::String* _controlPoint2; // 0x28
		::Il2CppArray<::MoleMole::MonoEntityModelModifier_ColliderInfo*>* _colliderInfos; // 0x30
		::MoleMole::MonoEntityModelModifier_ConfigModifier* _configModifier; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityModelModifier* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoEntityModelModifier*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_ONDISABLE_OFFSET))(this);
		}

		::System::Void ApplyModifier(::Class_3_DFD5D1FDB9D2A4AC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_APPLYMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_REMOVEMODIFIER_OFFSET))(this);
		}

		::System::Void Method_5_00E3CB98672EAAF8(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_METHOD_5_00E3CB98672EAAF8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_1750D05A3312F1DF(::MoleMole::Battle::Entity* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_METHOD_5_1750D05A3312F1DF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_6807236CD968DC6B(::UnityEngine::Collider* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYMODELMODIFIER_METHOD_5_6807236CD968DC6B_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
