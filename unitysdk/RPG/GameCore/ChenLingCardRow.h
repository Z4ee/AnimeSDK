#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingGridOffset; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19626400)
#define RPG_GAMECORE_CHENLINGCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19626770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCardRow_TypeDefinitionIndex = 10601;

	class ChenLingCardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingGridOffset*>* EffectGridPreShow; // 0x10
		::System::String* IconOutlinePath; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* ParamList; // 0x28
		::System::UInt32 ID; // 0x30
		::System::UInt32 ShopCost; // 0x34
		::System::Boolean IsSpecialCard; // 0x38
		::System::UInt32 Weight; // 0x3C
		::RPG::GameCore::ChenLingCardType Type; // 0x40
		::System::UInt32 TypeID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingCardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
