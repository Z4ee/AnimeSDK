#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACTIONEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2EFE70)
#define RPG_GAMECORE_BATTLEACTIONEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F02B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleActionEventRow_TypeDefinitionIndex = 12736;

	class BattleActionEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* AbilityName; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID FullDescription; // 0x28
		::System::UInt32 Interval; // 0x38
		::System::UInt32 InitialInterval; // 0x3C
		::RPG::Client::TextID BriefDescription; // 0x40
		::RPG::Client::TextID EventName; // 0x50
		::System::Boolean ActiveDefault; // 0x60
		::System::UInt32 EventID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACTIONEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleActionEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleActionEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACTIONEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
