#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F941B0)
#define RPG_GAMECORE_AVATARATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F949B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAtlasRow_TypeDefinitionIndex = 11586;

	class AvatarAtlasRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Boolean DefaultUnlock; // 0x14
		::RPG::Client::TextID CV_EN; // 0x18
		::RPG::Client::TextID CV_JP; // 0x28
		::System::UInt32 CampID; // 0x38
		::RPG::Client::TextID CV_KR; // 0x40
		::RPG::Client::TextID CV_CN; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarAtlasRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
