#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x10E49600)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDENTITY_OFFSET UNITYSDK_OFFSET(0x10E495E0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDWALLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x10E495F0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_IGNORETAG_OFFSET UNITYSDK_OFFSET(0x10E495C0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_METHOD_5_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x10E4A0B0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_METHOD_5_8F9716FCC554E5F2_OFFSET UNITYSDK_OFFSET(0x10E4A0A0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x10E49C10)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x10E49E40)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_SET_IGNORETAG_OFFSET UNITYSDK_OFFSET(0x10E495D0)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_UNBINDENTITY_OFFSET UNITYSDK_OFFSET(0x10E49940)
#define MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10E4A050)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWallCollisionIgnoreSensor_TypeDefinitionIndex = 69768;

	class MonoWallCollisionIgnoreSensor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* CollidersIgnored; // 0x18
		::System::String* Field_5_1; // 0x20
		::MoleMole::EntityHandle Field_5_2; // 0x28
		::UnityEngine::Collider* Field_5_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR__CTOR_OFFSET))(this);
		}

		::System::String* get_IgnoreTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_IGNORETAG_OFFSET))(this);
		}

		::System::Void set_IgnoreTag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_SET_IGNORETAG_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle get_BoundEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDENTITY_OFFSET))(this);
		}

		::UnityEngine::Collider* get_BoundWallCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_GET_BOUNDWALLCOLLIDER_OFFSET))(this);
		}

		::System::Void BindEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_BINDENTITY_OFFSET))(this, a1);
		}

		::System::Void UnbindEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_UNBINDENTITY_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void Method_5_8F9716FCC554E5F2(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_METHOD_5_8F9716FCC554E5F2_OFFSET))(this, a1);
		}

		::System::Void Method_5_65585810E2458BA4(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLCOLLISIONIGNORESENSOR_METHOD_5_65585810E2458BA4_OFFSET))(this, a1);
		}
	};
}
