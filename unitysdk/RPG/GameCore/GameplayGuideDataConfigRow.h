#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5B6E30)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B8800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideDataConfigRow_TypeDefinitionIndex = 12877;

	class GameplayGuideDataConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* OverrideShowCondition; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* TabIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* UnlockMission; // 0x28
		::System::UInt32 SubType; // 0x30
		::System::UInt32 TabID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 RelatedID; // 0x48
		::System::UInt32 MapEntranceID; // 0x4C
		::System::UInt32 ShowItemAmount; // 0x50
		::System::UInt32 ID; // 0x54
		::System::UInt32 Order; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameplayGuideDataConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameplayGuideDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
