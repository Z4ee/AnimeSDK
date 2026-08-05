#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16853240)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionSelector_TypeDefinitionIndex = 77514;

	class OpenDirectionSelector : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_4<::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
