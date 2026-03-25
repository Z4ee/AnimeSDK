#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/RPG/GameCore/SpaceZooInheritType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17751780)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17751DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooChannelConfigRow_TypeDefinitionIndex = 11286;

	class SpaceZooChannelConfigRow : public ::System::Object
	{
	public:
		::System::String* OfficialNameText; // 0x10
		::System::UInt32 HandbookTag; // 0x18
		::RPG::GameCore::SpaceZooInheritType InheritType; // 0x1C
		::System::UInt32 DefaultFeatureID; // 0x20
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x24
		::System::UInt32 RewardID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpaceZooChannelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooChannelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
