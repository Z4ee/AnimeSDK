#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextJoinOverrideType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTJOINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1789A2A0)
#define RPG_GAMECORE_TEXTJOINCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1789A4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinConfigRow_TypeDefinitionIndex = 14007;

	class TextJoinConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TextJoinItemList; // 0x10
		::RPG::GameCore::TextJoinOverrideType Type; // 0x18
		::System::Boolean IsOverride; // 0x1C
		::System::UInt32 TextJoinID; // 0x20
		::System::UInt32 DefaultItem; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextJoinConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextJoinConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
