#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_3_07C3C4D2990C49EE;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_WOLFBROGUNPROJECTILE_FIRE_OFFSET UNITYSDK_OFFSET(0xE433F60)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xE435610)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFIRED_OFFSET UNITYSDK_OFFSET(0xE435620)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISHITTED_OFFSET UNITYSDK_OFFSET(0xE435630)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_MOVEFORWARD_OFFSET UNITYSDK_OFFSET(0xE4339C0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ONHITCALLBACK_OFFSET UNITYSDK_OFFSET(0xE435660)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xE435640)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_00F6F37852467F62_OFFSET UNITYSDK_OFFSET(0xE434A00)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_67E5DD3363DCC43E_OFFSET UNITYSDK_OFFSET(0xE434F30)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_7D3AFE2824353718_OFFSET UNITYSDK_OFFSET(0xE4355C0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE435580)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_E5CA75F65C17B667_OFFSET UNITYSDK_OFFSET(0xE433410)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE433E20)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE433DC0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xE434380)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_RESET_OFFSET UNITYSDK_OFFSET(0xE433CB0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ONHITCALLBACK_OFFSET UNITYSDK_OFFSET(0xE435670)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xE435650)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_TICK_OFFSET UNITYSDK_OFFSET(0xE434240)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE435680)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0xE433C90)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunProjectile_TypeDefinitionIndex = 68730;

	class WolfBroGunProjectile : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_IKADOAGOFEM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunProjectile_TypeDefinitionIndex)->GetStaticField(0x64FC0);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HLHDLNNKFMP()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunProjectile_TypeDefinitionIndex)->GetStaticField(0x64FC8);
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
		::Class_3_07C3C4D2990C49EE* _OnHitCallback_k__BackingField; // 0x58
		::System::String* IJMGEMMNNPI; // 0x60
		::System::Boolean MABFMALCGKF; // 0x68
		::System::Boolean HPEICGKCODK; // 0x69
		::System::Boolean ELMIMNDCKKJ; // 0x6A
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x70

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

		::System::Boolean Method_5_00F6F37852467F62(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_METHOD_5_00F6F37852467F62_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_RoadMap(::Class_1_2BF31F3092BDFD9E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ROADMAP_OFFSET))(this, a1);
		}

		::Class_3_07C3C4D2990C49EE* get_OnHitCallback()
		{
			return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ONHITCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnHitCallback(::Class_3_07C3C4D2990C49EE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ONHITCALLBACK_OFFSET))(this, a1);
		}
	};
}
