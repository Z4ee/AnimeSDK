#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1870E520)
#define RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1870EC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigRow_TypeDefinitionIndex = 12188;

	class BookSeriesConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BookSeriesComments; // 0x10
		::System::UInt32 BookSeriesID; // 0x20
		::System::UInt32 BookSeriesWorld; // 0x24
		::RPG::Client::TextID BookSeries; // 0x28
		::System::Boolean IsShowInBookshelf; // 0x38
		::System::UInt32 BookSeriesNum; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BookSeriesConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BookSeriesConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
