#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARVOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186E2260)
#define RPG_GAMECORE_AVATARVOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186E29E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarVORow_TypeDefinitionIndex = 12048;

	class AvatarVORow : public ::System::Object
	{
	public:
		::System::String* VOTag; // 0x10
		::System::UInt32 ReceiveHealing; // 0x18
		::System::UInt32 UltraReady; // 0x1C
		::System::UInt32 ActionBeginHighThreat; // 0x20
		::System::UInt32 Revived; // 0x24
		::System::UInt32 StandBy; // 0x28
		::System::UInt32 LightHit; // 0x2C
		::System::UInt32 ReceiveBuff; // 0x30
		::System::UInt32 ActionBeginAdvantage; // 0x34
		::System::UInt32 ActionBegin; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarVORow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarVORow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
