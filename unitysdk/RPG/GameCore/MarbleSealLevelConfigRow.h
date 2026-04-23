#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA6550)
#define RPG_GAMECORE_MARBLESEALLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA6840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealLevelConfigRow_TypeDefinitionIndex = 11292;

	class MarbleSealLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x10
		::RPG::Client::TextID LevelUpTitle; // 0x18
		::RPG::Client::TextID LevelUpDesc; // 0x28
		::System::UInt32 UnlockSkillID; // 0x38
		::System::UInt32 Level; // 0x3C
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleSealLevelConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
