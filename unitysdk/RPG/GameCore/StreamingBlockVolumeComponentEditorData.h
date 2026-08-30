#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingBlockVolumeComponentData.h"

namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTEDITORDATA_GET_EFFECTBLOCKSHIDEORHLODTAG_OFFSET UNITYSDK_OFFSET(0xE71F310)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTEDITORDATA_SET_EFFECTBLOCKSHIDEORHLODTAG_OFFSET UNITYSDK_OFFSET(0xE71F320)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTEDITORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE71F380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingBlockVolumeComponentEditorData_TypeDefinitionIndex = 53812;

	class StreamingBlockVolumeComponentEditorData : public ::RPG::GameCore::StreamingBlockVolumeComponentData
	{
	public:
		::RPG::GameCore::HoyoTagContainer* _effectBlocksHideOrHlodTag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTEDITORDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTagContainer* get_EffectBlocksHideOrHLODTag()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTEDITORDATA_GET_EFFECTBLOCKSHIDEORHLODTAG_OFFSET))(this);
		}

		::System::Void set_EffectBlocksHideOrHLODTag(::RPG::GameCore::HoyoTagContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTEDITORDATA_SET_EFFECTBLOCKSHIDEORHLODTAG_OFFSET))(this, a1);
		}
	};
}
