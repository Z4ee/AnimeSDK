#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178AD680)
#define RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178AD920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyMtCategoryConfigRow_TypeDefinitionIndex = 14085;

	class TrainPartyMtCategoryConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 CategoryID; // 0x10
		::RPG::Client::TextID CategoryName; // 0x18
		::RPG::Client::TextID CategoryDesc; // 0x28
		::RPG::Client::TextID CategoryTableName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyMtCategoryConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMTCATEGORYCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
