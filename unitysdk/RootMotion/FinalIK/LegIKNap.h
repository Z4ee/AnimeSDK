#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverLegNap; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_LEGIKNAP_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1DF98830)
#define ROOTMOTION_FINALIK_LEGIKNAP_GET__ERRORMSG_OFFSET UNITYSDK_OFFSET(0x1DF98860)
#define ROOTMOTION_FINALIK_LEGIKNAP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DF98840)
#define ROOTMOTION_FINALIK_LEGIKNAP_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DF98810)
#define ROOTMOTION_FINALIK_LEGIKNAP_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1DF98820)
#define ROOTMOTION_FINALIK_LEGIKNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF988C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LegIKNap_TypeDefinitionIndex = 38192;

	class LegIKNap : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverLegNap* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIKNAP__CTOR_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIKNAP_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIKNAP_OPENUSERMANUAL_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIKNAP_GETIKSOLVER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIKNAP_ONENABLE_OFFSET))(this);
		}

		::System::String* get__ErrorMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LEGIKNAP_GET__ERRORMSG_OFFSET))(this);
		}
	};
}
