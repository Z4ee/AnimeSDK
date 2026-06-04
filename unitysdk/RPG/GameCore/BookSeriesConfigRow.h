#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194E10B0)
#define RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194E1800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigRow_TypeDefinitionIndex = 12274;

	class BookSeriesConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BookSeriesNum; // 0x10
		::System::UInt32 BookSeriesID; // 0x14
		::RPG::Client::TextID BookSeriesComments; // 0x18
		::RPG::Client::TextID BookSeries; // 0x28
		::System::Boolean IsShowInBookshelf; // 0x38
		::System::UInt32 BookSeriesWorld; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BookSeriesConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BookSeriesConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
