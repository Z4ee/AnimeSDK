#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtDisableCause.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachmentSolver; }
namespace RPG::Client { class LookAtSolver; }
namespace RPG::Client { class UVMoveLookAt; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_AVATARLOOKATCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC832660)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_ISLOOKATENABLED_OFFSET UNITYSDK_OFFSET(0xC832830)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xC831B30)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_MAPTARGETFORWARD_OFFSET UNITYSDK_OFFSET(0xC831BD0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xC8326C0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_METHOD_5_51BAC440AEEC47A9_OFFSET UNITYSDK_OFFSET(0xC832130)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_SETDISABLEWITHCAUSE_OFFSET UNITYSDK_OFFSET(0xC8325A0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_SETUPCURVEBLENDER_OFFSET UNITYSDK_OFFSET(0xC831E70)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_STOPLOOKAT_OFFSET UNITYSDK_OFFSET(0xC831A90)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER_UPDATELOOKATSOLVE_OFFSET UNITYSDK_OFFSET(0xC831EE0)
#define RPG_CLIENT_AVATARLOOKATCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8328C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarLookAtController_TypeDefinitionIndex = 68336;

	class AvatarLookAtController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* MonsterRootYawMapping; // 0x18
		::System::Single TargetHeightOffset; // 0x20
		::System::Single TargetSwitchSpeed; // 0x24
		::System::Single BlendInOutTime; // 0x28
		::UnityEngine::AnimationCurve* LookAtYawMapping; // 0x30
		::RPG::Client::LookAtSolver* Solver; // 0x38
		::RPG::Client::AttachmentSolver* AttachmentSolver; // 0x40
		::RPG::Client::LookAtTargetData HLFPJNCLONE; // 0x48
		::RPG::Client::UVMoveLookAt* OMOFNKPEMPI; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void StopLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_STOPLOOKAT_OFFSET))(this, a1);
		}

		::System::Void LookAtTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_LOOKATTARGET_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 MapTargetForward(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_MAPTARGETFORWARD_OFFSET))(a1, a2, a3);
		}

		::System::Void SetupCurveBlender(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_SETUPCURVEBLENDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean UpdateLookAtSolve(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_UPDATELOOKATSOLVE_OFFSET))(this, a1);
		}

		::System::Void SetDisableWithCause(::RPG::Client::LookAtDisableCause a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtDisableCause, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_SETDISABLEWITHCAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_METHOD_5_2450CFC043E97F54_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_51BAC440AEEC47A9(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_METHOD_5_51BAC440AEEC47A9_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLookAtEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARLOOKATCONTROLLER_GET_ISLOOKATENABLED_OFFSET))(this);
		}
	};
}
