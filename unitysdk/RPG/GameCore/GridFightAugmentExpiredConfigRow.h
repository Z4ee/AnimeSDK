#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A1EE0)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A2050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentExpiredConfigRow_TypeDefinitionIndex = 12684;

	class GridFightAugmentExpiredConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 AugmentID; // 0x14
		::System::UInt32 SubSeasonID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTEXPIREDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
