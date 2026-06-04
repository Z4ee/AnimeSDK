#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0xC4FF3F0)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_GET_WRAPPER_OFFSET UNITYSDK_OFFSET(0xC4FF3D0)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_GET__REFERENCESCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0xC4FF350)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC4FF740)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC5000E0)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTARGETPOSITION_1_OFFSET UNITYSDK_OFFSET(0xC500290)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xC500230)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTARGET_OFFSET UNITYSDK_OFFSET(0xC500150)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTICKACTIVE_OFFSET UNITYSDK_OFFSET(0xC500390)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SET_WRAPPER_OFFSET UNITYSDK_OFFSET(0xC4FF3E0)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5003E0)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER__INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4FF5C0)
#define RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER__TICK_OFFSET UNITYSDK_OFFSET(0xC4FF790)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBillboardController_TypeDefinitionIndex = 72986;

	class ChimeraBillboardController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsTickActive; // 0x18
		::UnityEngine::Transform* _Target; // 0x20
		::UnityEngine::Vector3 _Offset; // 0x28
		::System::Single _Scale; // 0x34
		::System::Boolean _UseCanvasLayer; // 0x38
		::UnityEngine::Camera* _WorldCamera; // 0x40
		::UnityEngine::Transform* _Wrapper_k__BackingField; // 0x48
		::System::Action_1<::UnityEngine::Transform*>* _TargetPositionSetter; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Single get__ReferenceScreenHeight()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_GET__REFERENCESCREENHEIGHT_OFFSET))();
		}

		::UnityEngine::Transform* get_Wrapper()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_GET_WRAPPER_OFFSET))(this);
		}

		::System::Void set_Wrapper(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SET_WRAPPER_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::ChimeraBillboardController* Create(::UnityEngine::Canvas* a1, ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* a2)
		{
			return ((::RPG::Client::Prop::ChimeraBillboardController*(*)(::UnityEngine::Canvas*, ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Initialize(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER__INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER__TICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void SetTargetPosition(::System::Action_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTARGETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetTargetPosition_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTARGETPOSITION_1_OFFSET))(this, a1);
		}

		::System::Void SetTickActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABILLBOARDCONTROLLER_SETTICKACTIVE_OFFSET))(this, a1);
		}
	};
}
