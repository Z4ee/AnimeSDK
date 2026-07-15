#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A073440)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A073B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideConfigRow_TypeDefinitionIndex = 12300;

	class AvatarDemoGuideConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Type; // 0x10
		::System::UInt32 StageID; // 0x14
		::System::UInt32 Index; // 0x18
		::RPG::Client::TextID AvatarDemoIntroduction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDemoGuideConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDemoGuideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
