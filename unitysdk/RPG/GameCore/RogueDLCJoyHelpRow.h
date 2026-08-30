#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCJOYHELPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D928250)
#define RPG_GAMECORE_ROGUEDLCJOYHELPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9283D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCJoyHelpRow_TypeDefinitionIndex = 14586;

	class RogueDLCJoyHelpRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PlayShortDesc; // 0x10
		::System::UInt32 AeonDimensionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCJOYHELPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCJoyHelpRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCJoyHelpRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCJOYHELPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
