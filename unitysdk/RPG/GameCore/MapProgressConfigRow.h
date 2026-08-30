#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPPROGRESSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D499640)
#define RPG_GAMECORE_MAPPROGRESSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D499C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapProgressConfigRow_TypeDefinitionIndex = 13893;

	class MapProgressConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::MapPregressShowType ID; // 0x18
		::RPG::Client::TextID ProgressName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapProgressConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapProgressConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
