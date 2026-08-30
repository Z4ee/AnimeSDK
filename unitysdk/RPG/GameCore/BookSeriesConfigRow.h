#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B30F8B0)
#define RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B310000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigRow_TypeDefinitionIndex = 12799;

	class BookSeriesConfigRow : public ::System::Object
	{
	public:
		::System::Boolean IsShowInBookshelf; // 0x10
		::System::UInt32 BookSeriesNum; // 0x14
		::System::UInt32 BookSeriesID; // 0x18
		::System::UInt32 BookSeriesWorld; // 0x1C
		::RPG::Client::TextID BookSeries; // 0x20
		::RPG::Client::TextID BookSeriesComments; // 0x30

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
