#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9C0D0)
#define RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9C4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedHintRow_TypeDefinitionIndex = 11673;

	class AvatarEnhancedHintRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EnhancedDesc1; // 0x10
		::System::UInt32 AvatarID; // 0x20
		::System::UInt32 EnhancedID; // 0x24
		::RPG::Client::TextID EnhancedDesc3; // 0x28
		::RPG::Client::TextID EnhancedDesc2; // 0x38
		::System::UInt32 PreviewModuleID; // 0x48
		::System::UInt32 EnhancedDescNum; // 0x4C
		::System::UInt32 SeasonID; // 0x50
		::System::UInt32 TrialStageID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarEnhancedHintRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
