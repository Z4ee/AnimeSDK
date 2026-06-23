#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Utils { class NapCameraSequence; }
namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace System { template <typename T> class WeakReference_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_ISVALID_1_OFFSET UNITYSDK_OFFSET(0x824A00)
#define MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x8249D0)
#define MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_JUMPTOSECTION_OFFSET UNITYSDK_OFFSET(0x824A10)
#define MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_STOP_OFFSET UNITYSDK_OFFSET(0x824A20)
#define MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x8249C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int NapCameraSequenceHandle_TypeDefinitionIndex = 51122;

	struct alignas(8) NapCameraSequenceHandle
	{
		::System::WeakReference_1<::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*>* _player; // 0x10
		::System::WeakReference_1<::MoleMole::Utils::NapCameraSequence*>* _sequence; // 0x18

		::System::Void _ctor(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>* player, ::MoleMole::Utils::NapCameraSequence* sequence)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Utils::NapCameraSequence*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE__CTOR_OFFSET))(this, player, sequence);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsValid_1(::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*& player)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<::PipelineCamera::WorldBasicCameraData>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_ISVALID_1_OFFSET))(this, player);
		}

		/*
		::System::Boolean JumpToSection(::Foundation::Unreal::FName section, ::System::Boolean toEnd)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_JUMPTOSECTION_OFFSET))(this, section, toEnd);
		}
		*/

		::System::Boolean Stop(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* blendSetting)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_NAPCAMERASEQUENCEHANDLE_STOP_OFFSET))(this, blendSetting);
		}
	};
}
