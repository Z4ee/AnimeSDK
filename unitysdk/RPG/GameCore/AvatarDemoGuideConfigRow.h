#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19493350)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19493A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideConfigRow_TypeDefinitionIndex = 12166;

	class AvatarDemoGuideConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::UInt32 Type; // 0x14
		::RPG::Client::TextID AvatarDemoIntroduction; // 0x18
		::System::UInt32 Index; // 0x28

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
