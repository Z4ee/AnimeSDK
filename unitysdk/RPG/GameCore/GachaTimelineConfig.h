#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrackNameList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GACHATIMELINECONFIG_METHOD_2_22BB9FD81BDE8B98_OFFSET UNITYSDK_OFFSET(0x17226D40)
#define RPG_GAMECORE_GACHATIMELINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172297E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTimelineConfig_TypeDefinitionIndex = 15662;

	class GachaTimelineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* TicketMaterialDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ItemRarity, ::RPG::GameCore::TrackNameList*>* MuteRarityTrackNamesDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATIMELINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_22BB9FD81BDE8B98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachaTimelineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaTimelineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATIMELINECONFIG_METHOD_2_22BB9FD81BDE8B98_OFFSET))(a1, a2);
		}
	};
}
