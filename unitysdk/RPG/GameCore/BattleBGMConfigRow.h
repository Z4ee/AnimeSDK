#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEBGMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186EFE50)
#define RPG_GAMECORE_BATTLEBGMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186EFFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBGMConfigRow_TypeDefinitionIndex = 12122;

	class BattleBGMConfigRow : public ::System::Object
	{
	public:
		::System::String* BGMName; // 0x10
		::System::UInt32 Priority; // 0x18
		::RPG::GameCore::StageType StageType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleBGMConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleBGMConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
