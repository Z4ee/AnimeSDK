#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17385390)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173858D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoEntranceConfigRow_TypeDefinitionIndex = 11476;

	class MappingInfoEntranceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EntranceID; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MappingInfoEntranceConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MappingInfoEntranceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
