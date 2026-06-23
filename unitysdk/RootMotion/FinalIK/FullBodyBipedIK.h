#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion { class BipedReferences; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1DAF6370)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_AUTODETECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1DAF6BF0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1DAF63E0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENINSPECTORTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1DAF62D0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DAF6230)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSETUPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1DAF6280)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1DAF61E0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESERROR_OFFSET UNITYSDK_OFFSET(0x1DAF63F0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESWARNING_OFFSET UNITYSDK_OFFSET(0x1DAF66C0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REINITIATE_OFFSET UNITYSDK_OFFSET(0x1DAF6BC0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SETREFERENCES_OFFSET UNITYSDK_OFFSET(0x1DAF63C0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1DAF6320)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF6CE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedIK_TypeDefinitionIndex = 38177;

	class FullBodyBipedIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::BipedReferences* references; // 0x48
		::RootMotion::FinalIK::IKSolverFullBodyBiped* solver; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenSetupTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSETUPTUTORIAL_OFFSET))(this);
		}

		::System::Void OpenInspectorTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENINSPECTORTUTORIAL_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_ASTHREAD_OFFSET))(this);
		}

		::System::Void SetReferences(::RootMotion::BipedReferences* references, ::UnityEngine::Transform* rootNode)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedReferences*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SETREFERENCES_OFFSET))(this, references, rootNode);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_GETIKSOLVER_OFFSET))(this);
		}

		::System::Boolean ReferencesError(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESERROR_OFFSET))(this, errorMessage);
		}

		::System::Boolean ReferencesWarning(::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESWARNING_OFFSET))(this, warningMessage);
		}

		::System::Void Reinitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REINITIATE_OFFSET))(this);
		}

		::System::Void AutoDetectReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_AUTODETECTREFERENCES_OFFSET))(this);
		}
	};
}
