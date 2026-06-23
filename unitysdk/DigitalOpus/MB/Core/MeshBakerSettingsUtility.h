#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }

#define DIGITALOPUS_MB_CORE_MESHBAKERSETTINGSUTILITY_DOUV2GETDATAFROMSOURCEMESHES_OFFSET UNITYSDK_OFFSET(0x1E36AAA0)
#define DIGITALOPUS_MB_CORE_MESHBAKERSETTINGSUTILITY_GETMESHCHANNELSASFLAGS_OFFSET UNITYSDK_OFFSET(0x1E36A2C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MeshBakerSettingsUtility_TypeDefinitionIndex = 90665;

	class MeshBakerSettingsUtility : public ::System::Object
	{
	public:
		static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags GetMeshChannelsAsFlags(::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::System::Boolean doVerts, ::System::Boolean uvsSliceIdx_w)
		{
			return ((::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags(*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERSETTINGSUTILITY_GETMESHCHANNELSASFLAGS_OFFSET))(settings, doVerts, uvsSliceIdx_w);
		}

		static ::System::Boolean DoUV2getDataFromSourceMeshes(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*& settings)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERSETTINGSUTILITY_DOUV2GETDATAFROMSOURCEMESHES_OFFSET))(settings);
		}
	};
}
