#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class FollowPoint; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FOLLOWPOINTMAPPING_BINDDYNAMICPOINTS_OFFSET UNITYSDK_OFFSET(0xA3C8E60)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA3C9230)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_FINDFOLLOWPOINT_OFFSET UNITYSDK_OFFSET(0xA3C8980)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_FORCEREFRESHTARGET_OFFSET UNITYSDK_OFFSET(0xA3C8AC0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_GET_ENTITYROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA3C84C0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_INIT_OFFSET UNITYSDK_OFFSET(0xA3C8250)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_LATETICK_OFFSET UNITYSDK_OFFSET(0xA3C8720)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_MANUALREFRESHFOLLOWPOINTS_OFFSET UNITYSDK_OFFSET(0xA3C8630)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA3C8680)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_METHOD_5_E6708DD8002BE8CE_OFFSET UNITYSDK_OFFSET(0xA3C9270)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA3C88A0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA3C8810)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA3C8770)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_RESETCAMERAROOTFOLLOW_OFFSET UNITYSDK_OFFSET(0xA3C8DF0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_RESETORIGINY_OFFSET UNITYSDK_OFFSET(0xA3C8580)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_SETCAMERAROOTFOLLOW_OFFSET UNITYSDK_OFFSET(0xA3C8BC0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA3C91E0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_START_OFFSET UNITYSDK_OFFSET(0xA3C81D0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING_UNBINDDYNAMICPOINTS_OFFSET UNITYSDK_OFFSET(0xA3C9130)
#define RPG_CLIENT_FOLLOWPOINTMAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C92C0)
#define RPG_CLIENT_FOLLOWPOINTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C8940)

namespace RPG::Client
{
	inline static constexpr unsigned int FollowPointMapping_TypeDefinitionIndex = 63092;

	class FollowPointMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_5_6()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(FollowPointMapping_TypeDefinitionIndex)->GetStaticField(0x11820);
		}
		::System::Collections::Generic::List_1<::RPG::Client::FollowPoint*>* FollowPoints; // 0x18
		::RPG::Client::AttachPointMapping* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::System::Int32 Field_5_3; // 0x30
		::UnityEngine::Transform* Field_5_4; // 0x38
		::System::Boolean Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_START_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_INIT_OFFSET))(this);
		}

		::System::Void ResetOriginY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_RESETORIGINY_OFFSET))(this, a1);
		}

		::System::Void ManualRefreshFollowPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_MANUALREFRESHFOLLOWPOINTS_OFFSET))(this);
		}

		::System::Void LateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_LATETICK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::FollowPoint* FindFollowPoint(::System::String* a1)
		{
			return ((::RPG::Client::FollowPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_FINDFOLLOWPOINT_OFFSET))(this, a1);
		}

		::System::Void ForceRefreshTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_FORCEREFRESHTARGET_OFFSET))(this, a1);
		}

		::System::Void SetCameraRootFollow(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_SETCAMERAROOTFOLLOW_OFFSET))(this, a1, a2);
		}

		::System::Void ReSetCameraRootFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_RESETCAMERAROOTFOLLOW_OFFSET))(this);
		}

		::System::Void BindDynamicPoints(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_BINDDYNAMICPOINTS_OFFSET))(this, a1);
		}

		::System::Void UnbindDynamicPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_UNBINDDYNAMICPOINTS_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_DESPAWNED_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_E6708DD8002BE8CE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_METHOD_5_E6708DD8002BE8CE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_EntityRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOLLOWPOINTMAPPING_GET_ENTITYROOTTRANSFORM_OFFSET))(this);
		}
	};
}
