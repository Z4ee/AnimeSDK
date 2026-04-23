#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_3_E21F6DE9B7FA4D05;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_WOLFBROGUNPROJECTILE_FIRE_OFFSET UNITYSDK_OFFSET(0xB4DE760)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB4DFC30)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFIRED_OFFSET UNITYSDK_OFFSET(0xB4DFC40)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISHITTED_OFFSET UNITYSDK_OFFSET(0xB4DFC50)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_MOVEFORWARD_OFFSET UNITYSDK_OFFSET(0xB4DE1F0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ONHITCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4DFC80)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xB4DFC60)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_09184A844EBD052E_OFFSET UNITYSDK_OFFSET(0xB4DF1A0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_67E5DD3363DCC43E_OFFSET UNITYSDK_OFFSET(0xB4DF620)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_7D3AFE2824353718_OFFSET UNITYSDK_OFFSET(0xB4DFBE0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4DFBA0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_E5CA75F65C17B667_OFFSET UNITYSDK_OFFSET(0xB4DDD10)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB4DE690)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB4DE630)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xB4DEB20)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_RESET_OFFSET UNITYSDK_OFFSET(0xB4DE510)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ONHITCALLBACK_OFFSET UNITYSDK_OFFSET(0xB4DFC90)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xB4DFC70)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_TICK_OFFSET UNITYSDK_OFFSET(0xB4DE9E0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4DFCA0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4DE4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunProjectile_TypeDefinitionIndex = 63405;

	class WolfBroGunProjectile : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_5_15()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunProjectile_TypeDefinitionIndex)->GetStaticField(0x3CCD0);
		}
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_5_16()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunProjectile_TypeDefinitionIndex)->GetStaticField(0x3CCD8);
		}
		::UnityEngine::Animator* animator; // 0x18
		::UnityEngine::CapsuleCollider* collider; // 0x20
		::UnityEngine::LayerMask raycastLayers; // 0x28
		::UnityEngine::Vector3 forward; // 0x2C
		::System::String* effectPath; // 0x38
		::System::Single speed; // 0x40
		::System::Single boomRange; // 0x44
		::System::String* hitEffectPath; // 0x48
		::Class_1_2BF31F3092BDFD9E* _RoadMap_k__BackingField; // 0x50
		::Class_3_E21F6DE9B7FA4D05* _OnHitCallback_k__BackingField; // 0x58
		::System::String* Field_5_10; // 0x60
		::System::Boolean Field_5_11; // 0x68
		::System::Boolean Field_5_12; // 0x69
		::System::Boolean Field_5_13; // 0x6A
		::UnityEngine::Transform* Field_5_14; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Fire(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_FIRE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_TICK_OFFSET))(this, a1);
		}

		::System::Void Raycast(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_RAYCAST_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_E5CA75F65C17B667(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_E5CA75F65C17B667_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_7D3AFE2824353718(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_7D3AFE2824353718_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_09184A844EBD052E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_09184A844EBD052E_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_67E5DD3363DCC43E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_67E5DD3363DCC43E_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 get_MoveForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_MOVEFORWARD_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsFired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFIRED_OFFSET))(this);
		}

		::System::Boolean get_IsHitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISHITTED_OFFSET))(this);
		}

		::Class_1_2BF31F3092BDFD9E* get_RoadMap()
		{
			return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ROADMAP_OFFSET))(this);
		}

		::System::Void set_RoadMap(::Class_1_2BF31F3092BDFD9E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ROADMAP_OFFSET))(this, value);
		}

		::Class_3_E21F6DE9B7FA4D05* get_OnHitCallback()
		{
			return ((::Class_3_E21F6DE9B7FA4D05*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ONHITCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnHitCallback(::Class_3_E21F6DE9B7FA4D05* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ONHITCALLBACK_OFFSET))(this, value);
		}
	};
}
