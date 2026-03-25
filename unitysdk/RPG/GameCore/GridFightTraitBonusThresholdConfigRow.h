#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17288160)
#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172882D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBonusThresholdConfigRow_TypeDefinitionIndex = 12536;

	class GridFightTraitBonusThresholdConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitBonusThresholdConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSTHRESHOLDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
