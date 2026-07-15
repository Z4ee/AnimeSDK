#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD21580)
#define RPG_GAMECORE_MARBLESEALLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD21870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealLevelConfigRow_TypeDefinitionIndex = 11439;

	class MarbleSealLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 UnlockSkillID; // 0x20
		::RPG::Client::TextID LevelUpTitle; // 0x28
		::RPG::Client::TextID LevelUpDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealLevelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
