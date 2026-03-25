#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGENCHANTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170851F0)
#define RPG_GAMECORE_CHENLINGENCHANTLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170853A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnchantLevelRow_TypeDefinitionIndex = 10363;

	class ChenLingEnchantLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 SkillID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 EffectID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENCHANTLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingEnchantLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEnchantLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENCHANTLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
