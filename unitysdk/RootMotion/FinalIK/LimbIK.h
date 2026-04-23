#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver_Limb.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverLimb; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_LIMBIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x8E49D10)
#define ROOTMOTION_FINALIK_LIMBIK_COPYFROM_OFFSET UNITYSDK_OFFSET(0x8E49DA0)
#define ROOTMOTION_FINALIK_LIMBIK_COPYTO_OFFSET UNITYSDK_OFFSET(0x8E49D60)
#define ROOTMOTION_FINALIK_LIMBIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x8E49E50)
#define ROOTMOTION_FINALIK_LIMBIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x8E49C70)
#define ROOTMOTION_FINALIK_LIMBIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x8E49C20)
#define ROOTMOTION_FINALIK_LIMBIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x8E49CC0)
#define ROOTMOTION_FINALIK_LIMBIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8E49E60)
#define ROOTMOTION_FINALIK_LIMBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E49F00)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LimbIK_TypeDefinitionIndex = 41027;

	class LimbIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverLimb* solver; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_ASTHREAD_OFFSET))(this);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_COPYTO_OFFSET))(this, data);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_COPYFROM_OFFSET))(this, data);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_GETIKSOLVER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_TOSTRING_OFFSET))(this);
		}
	};
}
