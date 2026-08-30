#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextJoinOverrideType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTJOINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5CA230)
#define RPG_GAMECORE_TEXTJOINCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CA440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinConfigRow_TypeDefinitionIndex = 15112;

	class TextJoinConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TextJoinItemList; // 0x10
		::System::Boolean IsOverride; // 0x18
		::System::UInt32 TextJoinID; // 0x1C
		::System::UInt32 DefaultItem; // 0x20
		::RPG::GameCore::TextJoinOverrideType Type; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextJoinConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextJoinConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
