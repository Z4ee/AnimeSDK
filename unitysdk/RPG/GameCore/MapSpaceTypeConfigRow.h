#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPSPACETYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD0E770)
#define RPG_GAMECORE_MAPSPACETYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD0EE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapSpaceTypeConfigRow_TypeDefinitionIndex = 13488;

	class MapSpaceTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::GameCore::MapSpaceType MapSpaceType; // 0x28
		::System::Int32 SortID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapSpaceTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapSpaceTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
