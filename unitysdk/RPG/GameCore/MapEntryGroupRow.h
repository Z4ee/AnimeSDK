#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPENTRYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A89DE0)
#define RPG_GAMECORE_MAPENTRYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8A480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryGroupRow_TypeDefinitionIndex = 13313;

	class MapEntryGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 MapGuideID; // 0x10
		::System::UInt32 Type; // 0x14
		::System::UInt32 ID; // 0x18
		::RPG::Client::TextID GroupName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapEntryGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapEntryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
