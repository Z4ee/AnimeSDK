#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPENTRYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198BD330)
#define RPG_GAMECORE_MAPENTRYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198BD9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryGroupRow_TypeDefinitionIndex = 13388;

	class MapEntryGroupRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GroupName; // 0x10
		::System::UInt32 MapGuideID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapEntryGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapEntryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
