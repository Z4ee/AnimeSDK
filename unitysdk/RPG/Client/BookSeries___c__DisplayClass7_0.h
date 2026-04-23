#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Book; }

#define RPG_CLIENT_BOOKSERIES___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9E610)
#define RPG_CLIENT_BOOKSERIES___C__DISPLAYCLASS7_0__GETBOOKBYINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x9E9ECD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookSeries___c__DisplayClass7_0_TypeDefinitionIndex = 61146;

	class BookSeries___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBookByIndex_b__0(::RPG::Client::Book* book)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__DISPLAYCLASS7_0__GETBOOKBYINDEX_B__0_OFFSET))(this, book);
		}
	};
}
