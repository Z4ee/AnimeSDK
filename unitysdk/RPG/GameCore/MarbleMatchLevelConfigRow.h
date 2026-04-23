#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA0050)
#define RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA0290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchLevelConfigRow_TypeDefinitionIndex = 11304;

	class MarbleMatchLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonConfigPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 TotalScore; // 0x1C
		::System::UInt32 TutorialGroupID; // 0x20
		::RPG::Client::TextID LevelDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchLevelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
