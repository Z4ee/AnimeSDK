#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPGUIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A8ADC0)
#define RPG_GAMECORE_MAPGUIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapGuideRow_TypeDefinitionIndex = 13315;

	class MapGuideRow : public ::System::Object
	{
	public:
		::System::String* MapGuideIconPath; // 0x10
		::System::UInt32 WorldID; // 0x18
		::System::UInt32 SheetID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 SheetType; // 0x24
		::RPG::Client::TextID MapGuideName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapGuideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapGuideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
