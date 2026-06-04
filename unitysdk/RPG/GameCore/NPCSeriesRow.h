#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCSERIESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199C9190)
#define RPG_GAMECORE_NPCSERIESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199C9250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCSeriesRow_TypeDefinitionIndex = 13610;

	class NPCSeriesRow : public ::System::Object
	{
	public:
		::System::UInt32 SeriesID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSERIESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCSeriesRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCSeriesRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSERIESROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
