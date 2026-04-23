#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACTIONEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186EEC50)
#define RPG_GAMECORE_BATTLEACTIONEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186EF0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleActionEventRow_TypeDefinitionIndex = 12124;

	class BattleActionEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AbilityName; // 0x20
		::RPG::Client::TextID BriefDescription; // 0x28
		::RPG::Client::TextID EventName; // 0x38
		::System::Boolean ActiveDefault; // 0x48
		::System::UInt32 InitialInterval; // 0x4C
		::System::UInt32 EventID; // 0x50
		::System::UInt32 Interval; // 0x54
		::RPG::Client::TextID FullDescription; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACTIONEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleActionEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleActionEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACTIONEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
