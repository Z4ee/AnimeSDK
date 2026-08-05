#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E18DD7D3DEDDD336.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_ABA31E56F580B4C3;
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x149FA4F0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEAN_OFFSET UNITYSDK_OFFSET(0x149FB0F0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x149FA530)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GETCONFIGCOLLIDERPARAMS_OFFSET UNITYSDK_OFFSET(0x149FB4C0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x149FB0D0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_CONFIGURABLECOLTYPE_OFFSET UNITYSDK_OFFSET(0x149FB0A0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x149FB0B0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x149FAEF0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_ROOTGO_OFFSET UNITYSDK_OFFSET(0x149FB0E0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_2337B33FCDD17495_OFFSET UNITYSDK_OFFSET(0x149FAA60)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x149FAE70)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_73E0841D266A58AF_OFFSET UNITYSDK_OFFSET(0x149FA220)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_96080D6BFFAB381B_OFFSET UNITYSDK_OFFSET(0x149FB740)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x149FAB10)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x149FA6D0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x149FA580)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x149FA820)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x149FAB70)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x149FA1B0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPINSTANCEDCOLLIDER_OFFSET UNITYSDK_OFFSET(0x149FA110)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPTIMEDRIVENCOLLIDER_OFFSET UNITYSDK_OFFSET(0x149FA090)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0x149FB0C0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_CONFIGURABLECOLTYPE_OFFSET UNITYSDK_OFFSET(0x149FB090)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x149FADB0)
#define MOLEMOLE_MONOCONFIGURABLECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x149FB6E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoConfigurableCollider_TypeDefinitionIndex = 77136;

	class MonoConfigurableCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_3_ABA31E56F580B4C3* Field_5_1; // 0x18
		::MoleMole::EntityHandle Field_5_0; // 0x20
		::UnityEngine::LayerMask Field_5_7; // 0x30
		::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 Field_5_6; // 0x34
		::Enum_3_E18DD7D3DEDDD336 Field_5_5; // 0x38
		::UnityEngine::Collider* Field_5_4; // 0x40
		::MoleMole::Config::ConfigTimeDrivenAttackCollider* Field_5_11; // 0x48
		::Enum_3_F40B865AC61AB8D7 Field_5_10; // 0x50
		::UnityEngine::GameObject* Field_5_9; // 0x58
		::System::String* Field_5_8; // 0x60
		::System::Action_1<::UnityEngine::Collider*>* OnTriggerEnterCallback; // 0x68
		::System::Action_1<::UnityEngine::Collider*>* OnTriggerExitCallback; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void SetupTimeDrivenCollider(::UnityEngine::GameObject* a1, ::MoleMole::Config::ConfigTimeDrivenAttackCollider* a2, ::UnityEngine::LayerMask a3, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPTIMEDRIVENCOLLIDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupInstancedCollider(::System::String* a1, ::UnityEngine::GameObject* a2, ::MoleMole::Config::ConfigTimeDrivenAttackCollider* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPINSTANCEDCOLLIDER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SETUPCOLLIDER_OFFSET))(this, a1);
		}

		::System::Void Method_5_73E0841D266A58AF(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_73E0841D266A58AF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void set_Owner(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_OWNER_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle get_Owner()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_ConfigurableColType(::Enum_3_E18DD7D3DEDDD336 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_E18DD7D3DEDDD336))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_CONFIGURABLECOLTYPE_OFFSET))(this, a1);
		}

		::Enum_3_E18DD7D3DEDDD336 get_ConfigurableColType()
		{
			return ((::Enum_3_E18DD7D3DEDDD336(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_CONFIGURABLECOLTYPE_OFFSET))(this);
		}

		::UnityEngine::Collider* get_OwnerCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_OWNERCOLLIDER_OFFSET))(this);
		}

		::System::Void set_ColliderType(::Enum_3_F40B865AC61AB8D7 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F40B865AC61AB8D7))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_SET_COLLIDERTYPE_OFFSET))(this, a1);
		}

		::Enum_3_F40B865AC61AB8D7 get_ColliderType()
		{
			return ((::Enum_3_F40B865AC61AB8D7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_COLLIDERTYPE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_RootGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GET_ROOTGO_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_CLEAN_OFFSET))(this);
		}

		::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single> GetConfigColliderParams()
		{
			return ((::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_GETCONFIGCOLLIDERPARAMS_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_96080D6BFFAB381B(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_96080D6BFFAB381B_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_2337B33FCDD17495(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_2337B33FCDD17495_OFFSET))(this, a1);
		}

		::Class_3_ABA31E56F580B4C3* Method_5_CCBE730AF445BBD4()
		{
			return ((::Class_3_ABA31E56F580B4C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_CCBE730AF445BBD4_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCONFIGURABLECOLLIDER_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
