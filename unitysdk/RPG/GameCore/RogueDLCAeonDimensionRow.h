#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F3B40)
#define RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175F3D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDimensionRow_TypeDefinitionIndex = 13475;

	class RogueDLCAeonDimensionRow : public ::System::Object
	{
	public:
		::System::String* AeonIcon; // 0x10
		::System::String* DimensionIcon; // 0x18
		::RPG::Client::TextID PlayShortDesc; // 0x20
		::System::UInt32 AeonDimensionMaxPoint; // 0x30
		::System::UInt32 AeonDimensionID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCAeonDimensionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonDimensionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
