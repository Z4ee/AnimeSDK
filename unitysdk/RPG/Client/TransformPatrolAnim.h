#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TransformPatrolAnimBehavior_ControlledAnimatorParameter.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class TransformPatrolAnimBehavior; }
namespace RPG::Client { class TransformPatrolAnimBehavior_PatrolPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRANSFORMPATROLANIM_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB370F90)
#define RPG_CLIENT_TRANSFORMPATROLANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xB370750)
#define RPG_CLIENT_TRANSFORMPATROLANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xB370DF0)
#define RPG_CLIENT_TRANSFORMPATROLANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xB370FE0)
#define RPG_CLIENT_TRANSFORMPATROLANIM___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB371320)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformPatrolAnim_TypeDefinitionIndex = 64839;

	class TransformPatrolAnim : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TransformPatrolAnimBehavior*>
	{
	public:
		::System::Boolean AutoFindReferenceInPolymer; // 0x30
		::UnityEngine::Transform* AnimatedItem; // 0x38
		::UnityEngine::Vector3 GlobalRelativeTranslation; // 0x40
		::UnityEngine::Vector3 GlobalRelativeRotation; // 0x4C
		::UnityEngine::Vector3 GlobalRelativeScale; // 0x58
		::RPG::Client::BezierCurve* Curve; // 0x68
		::System::Boolean FollowCurve; // 0x70
		::System::Boolean Reciprocate; // 0x71
		::System::Collections::Generic::List_1<::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint*>* PatrolPoints; // 0x78
		::System::Single MaxSpeed; // 0x80
		::System::Single CurrentPatrolPoint; // 0x84
		::System::Single DelayTime; // 0x88
		::UnityEngine::Animator* ControlledAnimator; // 0x90
		::RPG::Client::TransformPatrolAnimBehavior_ControlledAnimatorParameter ControlledAnimatorParameters; // 0x98
		::System::Boolean Dirty; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIM_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIM_GET_ARTBOUND_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIM_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIM___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
