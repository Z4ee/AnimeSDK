#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole { class AdvancedCollisionConfigData; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GETCURRENTASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x13530CD0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x13530480)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_CAMERACOLLISIONCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x13530B70)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_INSTIGATORID_OFFSET UNITYSDK_OFFSET(0x13530C80)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x13530600)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x13530A50)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13530E00)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceContext_TypeDefinitionIndex = 91275;

	class NapCameraSequenceContext : public ::PipelineCamera::CameraSequence::CameraSequenceContext
	{
	public:
		::MoleMole::Battle::Entity* Instigator; // 0x60
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x68
		::System::Single AspectRatio; // 0x70
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_AVATARID_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData get_LastCameraData()
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_LASTCAMERADATA_OFFSET))(this);
		}

		::System::Single get_NearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::MoleMole::AdvancedCollisionConfigData* get_CameraCollisionConfigData()
		{
			return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_CAMERACOLLISIONCONFIGDATA_OFFSET))(this);
		}

		::System::UInt32 get_InstigatorId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_INSTIGATORID_OFFSET))(this);
		}

		static ::System::Single GetCurrentAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GETCURRENTASPECTRATIO_OFFSET))();
		}
	};
}
