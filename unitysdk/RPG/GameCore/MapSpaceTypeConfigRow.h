#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPSPACETYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A912A0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A91900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapSpaceTypeConfigRow_TypeDefinitionIndex = 13264;

	class MapSpaceTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::Int32 SortID; // 0x18
		::RPG::GameCore::MapSpaceType MapSpaceType; // 0x1C
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapSpaceTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapSpaceTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
