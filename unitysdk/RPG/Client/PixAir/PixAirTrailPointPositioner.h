#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER_PLAY_OFFSET UNITYSDK_OFFSET(0xC3ECE50)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER_SETPOINTS_OFFSET UNITYSDK_OFFSET(0xC3EC860)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__ASSIGNBYSCREENPOS_OFFSET UNITYSDK_OFFSET(0xC3ECD90)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__CALCULATERANDOMMIDDLESCREENPOS_OFFSET UNITYSDK_OFFSET(0xC3ECB50)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3ED1D0)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__GETPLANERECT_OFFSET UNITYSDK_OFFSET(0xC3ECAC0)
#define RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__GETUICAMERA_OFFSET UNITYSDK_OFFSET(0xC3ECD10)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTrailPointPositioner_TypeDefinitionIndex = 73715;

	class PixAirTrailPointPositioner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _StartPoint; // 0x18
		::UnityEngine::Transform* _MiddlePoint; // 0x20
		::UnityEngine::Transform* _EndPoint; // 0x28
		::UnityEngine::Vector2 _PerpendicularOffsetRangePixels; // 0x30
		::UnityEngine::Vector2 _AlongLineRatioRange; // 0x38
		::UnityEngine::RectTransform* _ScreenToWorldPlane; // 0x40
		::UnityEngine::Animation* _AnimCmpt; // 0x48
		::UnityEngine::ParticleSystem* _ParticleSystem; // 0x50
		::RPG::Client::QuadricBezier* _BezierCurve; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__CTOR_OFFSET))(this);
		}

		::System::Void SetPoints(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER_SETPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Void Play(::System::Action* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER_PLAY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 _CalculateRandomMiddleScreenPos(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__CALCULATERANDOMMIDDLESCREENPOS_OFFSET))(this, a1, a2);
		}

		static ::System::Void _AssignByScreenPos(::UnityEngine::Transform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::RectTransform* a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__ASSIGNBYSCREENPOS_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::RectTransform* _GetPlaneRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__GETPLANERECT_OFFSET))(this);
		}

		::UnityEngine::Camera* _GetUICamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTRAILPOINTPOSITIONER__GETUICAMERA_OFFSET))(this);
		}
	};
}
