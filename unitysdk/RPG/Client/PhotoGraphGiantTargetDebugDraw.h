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

#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKQUADVALID_OFFSET UNITYSDK_OFFSET(0x1866F8B0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKRAYCASTPASS_OFFSET UNITYSDK_OFFSET(0x186706F0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKSINGLEPOSARRAY_OFFSET UNITYSDK_OFFSET(0x1866F1F0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_CHECKVISIBLE_OFFSET UNITYSDK_OFFSET(0x1866E810)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DETECTINTERSECTWITHVIEWPORT_OFFSET UNITYSDK_OFFSET(0x186704B0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DETECTRAYCASTPASS_OFFSET UNITYSDK_OFFSET(0x1866F5D0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_DRAWPOS_OFFSET UNITYSDK_OFFSET(0x1866F530)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_GENCHECKARRAY_OFFSET UNITYSDK_OFFSET(0x1866E1B0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_GETDETECTPOINTS_OFFSET UNITYSDK_OFFSET(0x18670AC0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_LINESEGMENTSINTERSECT_OFFSET UNITYSDK_OFFSET(0x18670920)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_SINGLEAXISFLOATTOVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x1866E130)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_START_OFFSET UNITYSDK_OFFSET(0x1866E050)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW_UPDATE_OFFSET UNITYSDK_OFFSET(0x18670DE0)
#define RPG_CLIENT_PHOTOGRAPHGIANTTARGETDEBUGDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x18670E70)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphGiantTargetDebugDraw_TypeDefinitionIndex = 61012;

	class PhotoGraphGiantTargetDebugDraw : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* HMJDEOHNKJN; // 0x18
		::UnityEngine::Transform* NDEIBEGBCAC; // 0x20
		::System::Single sphereRadius; // 0x28
		::UnityEngine::Material* MJMOPKHPNEG; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KDCMLILCHMH; // 0x38
		::UnityEngine::Collider* OMCJIEBIJMO; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>* OKHKBJOMGJP; // 0x48

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
