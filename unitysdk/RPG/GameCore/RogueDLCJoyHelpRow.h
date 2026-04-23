#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCJOYHELPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0C6C0)
#define RPG_GAMECORE_ROGUEDLCJOYHELPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0C840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCJoyHelpRow_TypeDefinitionIndex = 13952;

	class RogueDLCJoyHelpRow : public ::System::Object
	{
	public:
		::System::UInt32 AeonDimensionID; // 0x10
		::RPG::Client::TextID PlayShortDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCJOYHELPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCJoyHelpRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCJoyHelpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCJOYHELPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
