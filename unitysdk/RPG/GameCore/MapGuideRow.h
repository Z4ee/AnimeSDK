#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPGUIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4986B0)
#define RPG_GAMECORE_MAPGUIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D498E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapGuideRow_TypeDefinitionIndex = 13955;

	class MapGuideRow : public ::System::Object
	{
	public:
		::System::String* MapGuideIconPath; // 0x10
		::System::UInt32 SheetID; // 0x18
		::System::UInt32 SheetType; // 0x1C
		::RPG::Client::TextID MapGuideName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 WorldID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapGuideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapGuideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
