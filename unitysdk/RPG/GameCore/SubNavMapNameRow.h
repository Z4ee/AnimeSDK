#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUBNAVMAPNAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EB1BD0)
#define RPG_GAMECORE_SUBNAVMAPNAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB1D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubNavMapNameRow_TypeDefinitionIndex = 13275;

	class SubNavMapNameRow : public ::System::Object
	{
	public:
		::System::UInt32 SubMapID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPNAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SubNavMapNameRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubNavMapNameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPNAMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
