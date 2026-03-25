#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B67C0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B6A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureDiaryGroupRow_TypeDefinitionIndex = 14112;

	class TravelBrochureDiaryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChoiceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* TextIDList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 RewardID; // 0x24
		::RPG::Client::TextID DiaryDescription; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TravelBrochureDiaryGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelBrochureDiaryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
