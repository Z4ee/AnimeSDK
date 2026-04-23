#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOSLOTTAGSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E7BAA0)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7C0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSlotTagsRow_TypeDefinitionIndex = 11705;

	class SpaceZooSlotTagsRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x18
		::System::UInt32 FeatureID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpaceZooSlotTagsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooSlotTagsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
