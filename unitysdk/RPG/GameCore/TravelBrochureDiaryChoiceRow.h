#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B03D450)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B03DEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureDiaryChoiceRow_TypeDefinitionIndex = 14766;

	class TravelBrochureDiaryChoiceRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID ChoiceMessage; // 0x18
		::RPG::Client::TextID DetailMessage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
