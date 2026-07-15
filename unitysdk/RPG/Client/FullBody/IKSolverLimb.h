#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolverLimb_AxisDirection.h"
#include "unitysdk/RPG/Client/FullBody/IKSolverLimb_BendModifier.h"
#include "unitysdk/RPG/Client/FullBody/IKSolverTrigonometric.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x16D53820)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_06B2B8EE44199AB7_OFFSET UNITYSDK_OFFSET(0x16D52060)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x16D52220)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_209AC60266898FC2_OFFSET UNITYSDK_OFFSET(0x16D52380)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16D534C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x16D51300)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16D51270)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x16D51BE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16D537A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERLIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D535E0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverLimb_TypeDefinitionIndex = 70866;

	class IKSolverLimb : public ::RPG::Client::FullBody::IKSolverTrigonometric
	{
	public:
		::UnityEngine::AvatarIKGoal goal; // 0xA8
		::RPG::Client::FullBody::IKSolverLimb_BendModifier bendModifier; // 0xAC
		::System::Single maintainRotationWeight; // 0xB0
		::System::Single bendModifierWeight; // 0xB4
		::UnityEngine::Transform* bendGoal; // 0xB8
		::System::Boolean maintainBendFor1Frame; // 0xC0
		::System::Boolean maintainRotationFor1Frame; // 0xC1
		::UnityEngine::Quaternion defaultRootRotation; // 0xC4
		::UnityEngine::Quaternion parentDefaultRotation; // 0xD4
		::UnityEngine::Quaternion bone3RotationBeforeSolve; // 0xE4
		::UnityEngine::Quaternion maintainRotation; // 0xF4
		::UnityEngine::Quaternion bone3DefaultRotation; // 0x104
		::UnityEngine::Vector3 _bendNormal; // 0x114
		::UnityEngine::Vector3 animationNormal; // 0x120
		::Il2CppArray<::RPG::Client::FullBody::IKSolverLimb_AxisDirection>* axisDirectionsLeft; // 0x130
		::Il2CppArray<::RPG::Client::FullBody::IKSolverLimb_AxisDirection>* axisDirectionsRight; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::AvatarIKGoal a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_82E992240300FB30_OFFSET))(this);
		}

		::System::Void Method_3_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_3_0E142E3463F30350()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_0E142E3463F30350_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::FullBody::IKSolverLimb_AxisDirection>* get_axisDirections()
		{
			return ((::Il2CppArray<::RPG::Client::FullBody::IKSolverLimb_AxisDirection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET))(this);
		}

		::System::Void Method_3_06B2B8EE44199AB7(::Il2CppArray<::RPG::Client::FullBody::IKSolverLimb_AxisDirection>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::FullBody::IKSolverLimb_AxisDirection>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_06B2B8EE44199AB7_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_3_209AC60266898FC2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERLIMB_METHOD_3_209AC60266898FC2_OFFSET))(this);
		}
	};
}
