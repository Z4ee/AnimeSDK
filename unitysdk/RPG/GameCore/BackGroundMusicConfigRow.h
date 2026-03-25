#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FC16E0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC1E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicConfigRow_TypeDefinitionIndex = 11703;

	class BackGroundMusicConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MusicName; // 0x10
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID UnlockDesc; // 0x28
		::RPG::Client::TextID BGMDesc; // 0x38
		::System::UInt32 GroupID; // 0x48
		::System::Boolean Unlock; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BackGroundMusicConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BackGroundMusicConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
