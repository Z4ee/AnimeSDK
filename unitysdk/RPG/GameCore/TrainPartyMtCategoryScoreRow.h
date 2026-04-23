#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190AC3A0)
#define RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190AC510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyMtCategoryScoreRow_TypeDefinitionIndex = 14556;

	class TrainPartyMtCategoryScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 Ratio; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 CategoryID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYSCOREROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
