#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOENTITYGAMEOBJECT_EMPTY_OFFSET UNITYSDK_OFFSET(0x17DD3050)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x17DD3160)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x17DD3040)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x17DD35D0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E1B59F840D6D6F1F_OFFSET UNITYSDK_OFFSET(0x17DD3630)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17DD2DF0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17DD2C20)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x17DD2EB0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x17DD2CE0)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x17DD3030)
#define MOLEMOLE_MONOENTITYGAMEOBJECT_TRYGETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x17DD3290)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DD3530)
#define MOLEMOLE_MONOENTITYGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD34E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityGameObject_TypeDefinitionIndex = 62527;

	class MonoEntityGameObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoEntityGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEntityGameObject_TypeDefinitionIndex)->GetStaticField(0x4BEE0);
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

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}

		::System::Void Method_5_E1B59F840D6D6F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_METHOD_5_E1B59F840D6D6F1F_OFFSET))(this);
		}
	};
}
