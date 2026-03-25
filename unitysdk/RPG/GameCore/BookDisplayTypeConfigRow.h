#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKDISPLAYTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE9CF0)
#define RPG_GAMECORE_BOOKDISPLAYTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE9DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookDisplayTypeConfigRow_TypeDefinitionIndex = 11772;

	class BookDisplayTypeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Alignment; // 0x10
		::System::UInt32 BookDisplayTypeID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKDISPLAYTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BookDisplayTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BookDisplayTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKDISPLAYTYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
