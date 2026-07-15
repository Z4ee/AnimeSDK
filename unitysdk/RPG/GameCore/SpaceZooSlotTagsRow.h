#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOSLOTTAGSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B09B190)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B09B7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSlotTagsRow_TypeDefinitionIndex = 11904;

	class SpaceZooSlotTagsRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 FeatureID; // 0x18
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooSlotTagsRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooSlotTagsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
