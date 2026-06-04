#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xC078D80)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_ISCLOSETPOINT_OFFSET UNITYSDK_OFFSET(0xC0793C0)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0xC0790C0)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC078EF0)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xC079600)
#define RPG_CLIENT_MONODRONEAIRWALLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC0795F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDroneAirwallControl_TypeDefinitionIndex = 64163;

	class MonoDroneAirwallControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDroneAirwallControl_TypeDefinitionIndex)->GetStaticField(0x124D0);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDroneAirwallControl_TypeDefinitionIndex)->GetStaticField(0x124D4);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDroneAirwallControl_TypeDefinitionIndex)->GetStaticField(0x124D8);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDroneAirwallControl_TypeDefinitionIndex)->GetStaticField(0x124DC);
		}
		::UnityEngine::GameObject* TargetPos; // 0x18
		::UnityEngine::Renderer* TargetRenderer; // 0x20
		::UnityEngine::MeshCollider* AirwallCollider; // 0x28
		::UnityEngine::Vector3 center; // 0x30
		::System::Single avoidanceDistance; // 0x3C
		::System::Single avoidanceMarkerSize; // 0x40
		::System::Single avoidanceMarker; // 0x44
		::UnityEngine::Collider* BoundingCollider; // 0x48
		::System::Boolean Field_5_12; // 0x50
		::UnityEngine::MaterialPropertyBlock* Field_5_13; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateTarget(::UnityEngine::Vector3 a1, ::System::Boolean& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_UPDATETARGET_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsClosetPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODRONEAIRWALLCONTROL_ISCLOSETPOINT_OFFSET))(this, a1);
		}
	};
}
