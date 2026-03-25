#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StreamingForceHLODVolumeData; }
namespace RPG::GameCore { class StreamingLightVolumeData; }
namespace RPG::GameCore { class StreamingRatioVolumeData; }
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_METHOD_3_2335E1EF4EA471D4_OFFSET UNITYSDK_OFFSET(0x17781AC0)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_METHOD_3_2EA65B95C0E827BD_OFFSET UNITYSDK_OFFSET(0x17781B00)
#define RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17781AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingBlockVolumeComponentData_TypeDefinitionIndex = 17533;

	class StreamingBlockVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::RPG::GameCore::HoyoTagContainer* EffectBlocks; // 0x10
		::System::String* BlockAlias; // 0x18
		::System::Boolean HLOD; // 0x20
		::RPG::GameCore::StreamingRatioVolumeData* StreamingRatioComponent; // 0x28
		::RPG::GameCore::StreamingForceHLODVolumeData* StreamingHLODComponent; // 0x30
		::RPG::GameCore::StreamingLightVolumeData* StreamingLightComponent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2335E1EF4EA471D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingBlockVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_METHOD_3_2335E1EF4EA471D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EA65B95C0E827BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGBLOCKVOLUMECOMPONENTDATA_METHOD_3_2EA65B95C0E827BD_OFFSET))(a1, a2);
		}
	};
}
