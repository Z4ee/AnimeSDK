#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A075BB0)
#define RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A075F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedHintRow_TypeDefinitionIndex = 12306;

	class AvatarEnhancedHintRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 PreviewModuleID; // 0x14
		::System::UInt32 TrialStageID; // 0x18
		::System::UInt32 SeasonID; // 0x1C
		::RPG::Client::TextID EnhancedDesc2; // 0x20
		::RPG::Client::TextID EnhancedDesc3; // 0x30
		::RPG::Client::TextID EnhancedDesc1; // 0x40
		::System::UInt32 EnhancedID; // 0x50
		::System::UInt32 EnhancedDescNum; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEnhancedHintRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
