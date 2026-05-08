#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class IK; }
namespace RootMotion::FinalIK { class TwistSolver; }

#define ROOTMOTION_FINALIK_TWISTRELAXER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3A44C0)
#define ROOTMOTION_FINALIK_TWISTRELAXER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C3A4650)
#define ROOTMOTION_FINALIK_TWISTRELAXER_ONPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3A4330)
#define ROOTMOTION_FINALIK_TWISTRELAXER_START_OFFSET UNITYSDK_OFFSET(0x1C3A3F20)
#define ROOTMOTION_FINALIK_TWISTRELAXER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3A4190)
#define ROOTMOTION_FINALIK_TWISTRELAXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A4820)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int TwistRelaxer_TypeDefinitionIndex = 36647;

	class TwistRelaxer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::IK* ik; // 0x18
		::Il2CppArray<::RootMotion::FinalIK::TwistSolver*>* twistSolvers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_UPDATE_OFFSET))(this);
		}

		::System::Void OnPostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_ONPOSTUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTRELAXER_ONDESTROY_OFFSET))(this);
		}
	};
}
