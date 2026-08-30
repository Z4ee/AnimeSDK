#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURBGMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4144D0)
#define RPG_GAMECORE_PARKOURBGMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D414650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourBGMConfigRow_TypeDefinitionIndex = 12033;

	class ParkourBGMConfigRow : public ::System::Object
	{
	public:
		::System::String* FastEventName; // 0x10
		::System::String* NormalEventName; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURBGMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourBGMConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourBGMConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURBGMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
