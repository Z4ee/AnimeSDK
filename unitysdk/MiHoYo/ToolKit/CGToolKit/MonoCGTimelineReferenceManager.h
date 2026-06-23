#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MiHoYo::ToolKit::CGToolKit { class BatchActivationReference; }
namespace MiHoYo::ToolKit::CGToolKit { class BehaviorCompReference; }
namespace MiHoYo::ToolKit::CGToolKit { class FullScreenQfMReference; }
namespace MiHoYo::ToolKit::CGToolKit { class GasBakeVolumeReference; }
namespace MiHoYo::ToolKit::CGToolKit { class IntReference; }
namespace MiHoYo::ToolKit::CGToolKit { class LightCompReference; }
namespace MiHoYo::ToolKit::CGToolKit { class MeshListToParticleReference; }
namespace MiHoYo::ToolKit::CGToolKit { class MultiReference; }
namespace MiHoYo::ToolKit::CGToolKit { class PsCompReference; }
namespace MiHoYo::ToolKit::CGToolKit { class RenderCompReference; }
namespace MiHoYo::ToolKit::CGToolKit { class StringReference; }
namespace MiHoYo::ToolKit::CGToolKit { class TestRotationMatrixCompReference; }
namespace MiHoYo::ToolKit::CGToolKit { class TrackReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_MONOCGTIMELINEREFERENCEMANAGER_GET__PLAYABLEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x162778D0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_MONOCGTIMELINEREFERENCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16277980)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int MonoCGTimelineReferenceManager_TypeDefinitionIndex = 61103;

	class MonoCGTimelineReferenceManager : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Boolean showDetail; // 0x58
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::TrackReference*>* timelineTrackReferences; // 0x60
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::BehaviorCompReference*>* prefabReferences; // 0x68
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::RenderCompReference*>* meshRendererReferences; // 0x70
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::RenderCompReference*>* prefabRenderReferences; // 0x78
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::IntReference*>* meshRendererLayerMasks; // 0x80
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::StringReference*>* syncTransformReferences; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* meshRendererActives; // 0x90
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::LightCompReference*>* LightCompReferences; // 0x98
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::StringReference*>* rotationMatrixs; // 0xA0
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::TestRotationMatrixCompReference*>* TestRotationMatrixReferences; // 0xA8
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::MeshListToParticleReference*>* MeshListToParticleReferences; // 0xB0
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::GasBakeVolumeReference*>* GasBakeVolumeReferences; // 0xB8
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::FullScreenQfMReference*>* FsQfMReferences; // 0xC0
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::PsCompReference*>* ParticleSystemReferences; // 0xC8
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::MultiReference*>* MultiReferences; // 0xD0
		::System::Collections::Generic::List_1<::MiHoYo::ToolKit::CGToolKit::BatchActivationReference*>* BatchActivationReferences; // 0xD8
		::UnityEngine::ScriptableObject* referenceObj; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_MONOCGTIMELINEREFERENCEMANAGER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableDirector* get__playableDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_MONOCGTIMELINEREFERENCEMANAGER_GET__PLAYABLEDIRECTOR_OFFSET))(this);
		}
	};
}
