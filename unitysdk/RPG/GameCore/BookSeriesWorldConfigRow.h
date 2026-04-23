#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1870EC60)
#define RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1870EE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesWorldConfigRow_TypeDefinitionIndex = 12186;

	class BookSeriesWorldConfigRow : public ::System::Object
	{
	public:
		::System::String* BookSeriesWorldBackgroundPath; // 0x10
		::System::String* BookSeriesWorldIconPath; // 0x18
		::RPG::Client::TextID BookSeriesWorldTextmapID; // 0x20
		::System::UInt32 BookSeriesWorld; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BookSeriesWorldConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BookSeriesWorldConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
