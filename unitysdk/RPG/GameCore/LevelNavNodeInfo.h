#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeInnerGraphInfo; }
namespace RPG::GameCore { class LevelNavNodeTransitInfo; }
namespace RPG::GameCore { class StageVolumeConfigV2; }

#define RPG_GAMECORE_LEVELNAVNODEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4DAC0)
#define RPG_GAMECORE_LEVELNAVNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4DCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInfo_TypeDefinitionIndex = 16275;

	class LevelNavNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* VolumeList; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelNavNodeTransitInfo*>* TransitList; // 0x20
		::System::UInt32 Priority; // 0x28
		::RPG::GameCore::LevelNavNodeInnerGraphInfo* InnerGraph; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
