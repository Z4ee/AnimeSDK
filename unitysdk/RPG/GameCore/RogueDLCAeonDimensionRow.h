#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91D1B0)
#define RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D91D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDimensionRow_TypeDefinitionIndex = 14582;

	class RogueDLCAeonDimensionRow : public ::System::Object
	{
	public:
		::System::String* DimensionIcon; // 0x10
		::System::String* AeonIcon; // 0x18
		::System::UInt32 AeonDimensionMaxPoint; // 0x20
		::System::UInt32 AeonDimensionID; // 0x24
		::RPG::Client::TextID PlayShortDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCAeonDimensionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonDimensionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDIMENSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
