#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET UNITYSDK_OFFSET(0x15B39040)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x15B39150)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15B39030)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15B39620)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E1B59F840D6D6F1F_OFFSET UNITYSDK_OFFSET(0x15B395C0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15B38DE0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15B38C10)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x15B38EA0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x15B38CD0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15B39020)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x15B39280)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B39520)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B394D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityGameObject_TypeDefinitionIndex = 72621;

	class MonoEntityGameObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityGameObject_TypeDefinitionIndex)->GetStaticField(0x48880);
		}
		::MoleMole::Battle::Entity* Field_5_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void set_ownerEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::MoleMole::Battle::Entity* get_ownerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoEntityGameObject* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoEntityGameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		static ::System::Boolean TryGetComponentSafely(::System::Int32 a1, ::MoleMole::EntityHandle& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET))(a1, a2);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_E1B59F840D6D6F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E1B59F840D6D6F1F_OFFSET))(this);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}
	};
}
