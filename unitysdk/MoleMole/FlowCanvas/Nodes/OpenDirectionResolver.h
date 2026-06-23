#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBCB50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionResolver_TypeDefinitionIndex = 49211;

	class OpenDirectionResolver : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
