#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2AC45833F3CC8C86;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x12628FE0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_FIXANIMBONE_OFFSET UNITYSDK_OFFSET(0x1262A510)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_GETANIMATORINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1262B7A0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ISANIMATORVISIBLE_OFFSET UNITYSDK_OFFSET(0x1262B800)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_LATEUPDATETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1262A8A0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_2AB913711EB945AB_OFFSET UNITYSDK_OFFSET(0x1262B110)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x1262A470)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_6400C6B84797E0C4_OFFSET UNITYSDK_OFFSET(0x1262B610)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_82DDD4717FD4ECF8_OFFSET UNITYSDK_OFFSET(0x12629D80)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1262A6E0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_F6E504641AC26599_OFFSET UNITYSDK_OFFSET(0x1262B690)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12629660)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12629410)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x126291C0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12628FA0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12629840)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_SHOULDSKIP_OFFSET UNITYSDK_OFFSET(0x126296B0)
#define MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1262B980)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBuddyStairAnimCorrector_TypeDefinitionIndex = 83910;

	class MonoBuddyStairAnimCorrector : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::PhysicsScene* StaticGet_physicsScene()
		{
			return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xAFF0);
		}
		static ::UnityEngine::PhysicsAnimatorInterpolation* StaticGet_interpolatePhysicsAnimator()
		{
			return (::UnityEngine::PhysicsAnimatorInterpolation*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xAFF4);
		}
		static ::System::Single* StaticGet_deltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xAFF8);
		}
		static ::System::Int32* StaticGet_frameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBuddyStairAnimCorrector_TypeDefinitionIndex)->GetStaticField(0xAFFC);
		}
		::UnityEngine::Transform* RootTransform; // 0x18
		::UnityEngine::Transform* Pelvis; // 0x20
		::System::Single BubbyLegHeight; // 0x28
		::System::Int32 ConfigLayers; // 0x2C
		::System::String* ConfigTag; // 0x30
		::System::Single DampingHalfLife; // 0x38
		::System::Single BubbyFootRadius; // 0x3C
		::UnityEngine::Vector3 Offset; // 0x40
		::System::Boolean Field_5_8; // 0x4C
		::UnityEngine::Animator* Field_5_9; // 0x50
		::System::Single Field_5_10; // 0x58
		::Il2CppArray<::UnityEngine::RaycastHit>* Field_5_11; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean ShouldSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_SHOULDSKIP_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void FixAnimBone(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_FIXANIMBONE_OFFSET))(this, a1);
		}

		::System::Void LateUpdateThreadSafe(::Class_1_2AC45833F3CC8C86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2AC45833F3CC8C86*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_LATEUPDATETHREADSAFE_OFFSET))(this, a1);
		}

		::System::Int32 GetAnimatorInstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_GETANIMATORINSTANCEID_OFFSET))(this);
		}

		::System::Boolean IsAnimatorVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_ISANIMATORVISIBLE_OFFSET))(this);
		}

		::System::Single Method_5_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::RaycastHit Method_5_82DDD4717FD4ECF8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_82DDD4717FD4ECF8_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean Method_5_F6E504641AC26599(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_F6E504641AC26599_OFFSET))(a1, a2);
		}

		::UnityEngine::RaycastHit Method_5_2AB913711EB945AB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4, ::System::Int32 a5)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_2AB913711EB945AB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		static ::System::Void Method_5_6400C6B84797E0C4(::Class_1_2AC45833F3CC8C86* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::Class_1_2AC45833F3CC8C86*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBUDDYSTAIRANIMCORRECTOR_METHOD_5_6400C6B84797E0C4_OFFSET))(a1, a2);
		}
	};
}
