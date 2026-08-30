#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_TrajectoryBehavior_Axis.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class Effect_TrajectoryBehavior; }
namespace System { class String; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0xCE1FEF0)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xCE1FE60)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCE20080)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xCE1F620)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_ENDDIRECTION_OFFSET UNITYSDK_OFFSET(0xCE1FC30)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE1F890)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_STARTDIRECTION_OFFSET UNITYSDK_OFFSET(0xCE1FA60)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xCE1F6C0)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_REGENERATETRAJECTORY_OFFSET UNITYSDK_OFFSET(0xCE1FF80)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xCE1F6B0)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_ENDDIRECTION_OFFSET UNITYSDK_OFFSET(0xCE1FD40)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xCE1F940)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_STARTDIRECTION_OFFSET UNITYSDK_OFFSET(0xCE1FB10)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xCE1F770)
#define RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCE200D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TrajectoryMonoPlugin_TypeDefinitionIndex = 70528;

	class Effect_TrajectoryMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_TrajectoryBehavior*>
	{
	public:
		::RPG::Client::BezierCurve* Trajectory; // 0x30
		::System::Int32 TrajectoryOrder; // 0x38
		::System::Single RandomRadius; // 0x3C
		::System::Single RandomRadiusAttenuation; // 0x40
		::RPG::Client::Effect_TrajectoryBehavior_Axis RandomAxis; // 0x44
		::UnityEngine::LineRenderer* Renderer; // 0x48
		::System::Int32 RendererResolution; // 0x50
		::System::Boolean RendererUpdatePerFrame; // 0x54
		::RPG::Client::Effect_TrajectoryBehavior* KADDKEGNCHE; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::RPG::Client::Effect_TrajectoryBehavior* get_Behavior()
		{
			return ((::RPG::Client::Effect_TrajectoryBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void set_Behavior(::RPG::Client::Effect_TrajectoryBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_TrajectoryBehavior*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_BEHAVIOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_StartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_StartPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_STARTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_ENDPOSITION_OFFSET))(this);
		}

		::System::Void set_EndPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_ENDPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_StartDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_STARTDIRECTION_OFFSET))(this);
		}

		::System::Void set_StartDirection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_STARTDIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GET_ENDDIRECTION_OFFSET))(this);
		}

		::System::Void set_EndDirection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_SET_ENDDIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetDirection(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GETDIRECTION_OFFSET))(this, a1);
		}

		::System::Void RegenerateTrajectory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_REGENERATETRAJECTORY_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRAJECTORYMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
