#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole { class AdvancedCollisionConfigData; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GETCURRENTASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x12A23450)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x12A22BE0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_CAMERACOLLISIONCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x12A232F0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_INSTIGATORID_OFFSET UNITYSDK_OFFSET(0x12A23400)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x12A22D60)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x12A231D0)
#define MOLEMOLE_UTILS_NAPCAMERASEQUENCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A23580)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceContext_TypeDefinitionIndex = 63290;

	class NapCameraSequenceContext : public ::PipelineCamera::CameraSequence::CameraSequenceContext
	{
	public:
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x60
		::MoleMole::Battle::Entity* Instigator; // 0x68
		::PipelineCamera::WorldBasicCameraData BeginCameraData; // 0x70
		::System::Single AspectRatio; // 0x9C

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
