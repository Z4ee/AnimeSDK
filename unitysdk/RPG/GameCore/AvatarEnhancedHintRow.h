#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C58B050)
#define RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C58B430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedHintRow_TypeDefinitionIndex = 12695;

	class AvatarEnhancedHintRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EnhancedDesc3; // 0x10
		::RPG::Client::TextID EnhancedDesc2; // 0x20
		::System::UInt32 EnhancedDescNum; // 0x30
		::System::UInt32 PreviewModuleID; // 0x34
		::System::UInt32 EnhancedID; // 0x38
		::System::UInt32 SeasonID; // 0x3C
		::RPG::Client::TextID EnhancedDesc1; // 0x40
		::System::UInt32 AvatarID; // 0x50
		::System::UInt32 TrialStageID; // 0x54

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
