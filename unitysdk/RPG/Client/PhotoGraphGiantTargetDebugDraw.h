#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphGiantTargetDebugDraw_PointInViewState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKQUADVALID_OFFSET UNITYSDK_OFFSET(0x9F46BF0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKRAYCASTPASS_OFFSET UNITYSDK_OFFSET(0x9F47A30)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKSINGLEPOSARRAY_OFFSET UNITYSDK_OFFSET(0x9F46530)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKVISIBLE_OFFSET UNITYSDK_OFFSET(0x9F45CF0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DETECTINTERSECTWITHVIEWPORT_OFFSET UNITYSDK_OFFSET(0x9F477F0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DETECTRAYCASTPASS_OFFSET UNITYSDK_OFFSET(0x9F46920)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DRAWPOS_OFFSET UNITYSDK_OFFSET(0x9F46880)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_GENCHECKARRAY_OFFSET UNITYSDK_OFFSET(0x9F45640)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_GETDETECTPOINTS_OFFSET UNITYSDK_OFFSET(0x9F47E00)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_LINESEGMENTSINTERSECT_OFFSET UNITYSDK_OFFSET(0x9F47C60)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_SINGLEAXISFLOATTOVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x9F455C0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_START_OFFSET UNITYSDK_OFFSET(0x9F454E0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F481A0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x9F48230)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphGiantTargetDebugDraw_TypeDefinitionIndex = 49379;

	class PhotoGraphGiantTargetDebugDraw : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::System::Single sphereRadius; // 0x28
		::UnityEngine::Material* Field_5_3; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_5_4; // 0x38
		::UnityEngine::Collider* Field_5_5; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>* Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_START_OFFSET))(this);
		}

		::RPG::Client::PhotoGraphGiantTargetDebugDraw_PointInViewState SingleAxisFloatToViewState(::System::Single a1)
		{
			return ((::RPG::Client::PhotoGraphGiantTargetDebugDraw_PointInViewState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_SINGLEAXISFLOATTOVIEWSTATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>* GenCheckArray()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_GENCHECKARRAY_OFFSET))(this);
		}

		::System::Boolean CheckVisible(::System::Single a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void DrawPos(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DRAWPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckSinglePosArray(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKSINGLEPOSARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckQuadValid(::System::Int32 a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKQUADVALID_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DetectIntersectWithViewPort(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DETECTINTERSECTWITHVIEWPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CheckRayCastPass(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKRAYCASTPASS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean DetectRayCastPass(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DETECTRAYCASTPASS_OFFSET))(this, a1, a2);
		}

		::System::Boolean LineSegmentsIntersect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Single& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_LINESEGMENTSINTERSECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetDetectPoints(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_GETDETECTPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_UPDATE_OFFSET))(this);
		}
	};
}
