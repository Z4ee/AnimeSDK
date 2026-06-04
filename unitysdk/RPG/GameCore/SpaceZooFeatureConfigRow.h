#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C93330)
#define RPG_GAMECORE_SPACEZOOFEATURECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C93AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooFeatureConfigRow_TypeDefinitionIndex = 11789;

	class SpaceZooFeatureConfigRow : public ::System::Object
	{
	public:
		::System::String* LargeImagePath; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* FeatureKey; // 0x20
		::System::UInt32 ResearchPoint; // 0x28
		::System::UInt32 FeatureID; // 0x2C
		::System::UInt32 UnlockMissionID; // 0x30
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooFeatureConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooFeatureConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOFEATURECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
