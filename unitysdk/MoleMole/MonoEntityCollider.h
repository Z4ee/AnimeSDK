#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_1A58F01F41846A1D;
class Class_3_6A6ED67B92DC299D;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_MONOENTITYCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19DD4600)
#define MOLEMOLE_MONOENTITYCOLLIDER_EMPTY_OFFSET UNITYSDK_OFFSET(0x19DD4380)
#define MOLEMOLE_MONOENTITYCOLLIDER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x19DD4490)
#define MOLEMOLE_MONOENTITYCOLLIDER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x19DD4370)
#define MOLEMOLE_MONOENTITYCOLLIDER_METHOD_5_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x19DD4650)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x19DD4C50)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x19DD4CF0)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19DD4AD0)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19DD49C0)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x19DD4D90)
#define MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x19DD4DF0)
#define MOLEMOLE_MONOENTITYCOLLIDER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x19DD41B0)
#define MOLEMOLE_MONOENTITYCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DD4EB0)
#define MOLEMOLE_MONOENTITYCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD4E60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityCollider_TypeDefinitionIndex = 58809;

	class MonoEntityCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityCollider*>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityCollider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityCollider_TypeDefinitionIndex)->GetStaticField(0x4C3D0);
		}
		::MoleMole::Battle::Entity* Field_5_1; // 0x18
		::Class_3_1A58F01F41846A1D* Field_5_0; // 0x20
		::Class_3_6A6ED67B92DC299D* Field_5_7; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void set_Entity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_SET_ENTITY_OFFSET))(this, a1);
		}

		::MoleMole::Battle::Entity* get_Entity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_GET_ENTITY_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityCollider* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoEntityCollider*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void Method_5_D460587695D41831()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYCOLLIDER_METHOD_5_D460587695D41831_OFFSET))(this);
		}
	};
}
