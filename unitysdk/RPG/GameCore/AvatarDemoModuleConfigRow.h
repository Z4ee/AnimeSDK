#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarDemoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19494920)
#define RPG_GAMECORE_AVATARDEMOMODULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19494AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoModuleConfigRow_TypeDefinitionIndex = 12162;

	class AvatarDemoModuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 Sort; // 0x14
		::System::UInt32 AvatarDemoStageID; // 0x18
		::RPG::GameCore::AvatarDemoType AvatarDemoType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOMODULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDemoModuleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDemoModuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
