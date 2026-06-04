#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUBNAVMAPNAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CD16A0)
#define RPG_GAMECORE_SUBNAVMAPNAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD1840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubNavMapNameRow_TypeDefinitionIndex = 13350;

	class SubNavMapNameRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 SubMapID; // 0x20
		::System::UInt32 FloorID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPNAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubNavMapNameRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubNavMapNameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPNAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
