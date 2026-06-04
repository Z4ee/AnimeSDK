#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageBattleEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEBATTLEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CA6930)
#define RPG_GAMECORE_STAGEBATTLEEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA6CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBattleEventRow_TypeDefinitionIndex = 14397;

	class StageBattleEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* SelfModifierNameList; // 0x10
		::Il2CppArray<::System::String*>* ModifierNameList; // 0x18
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::System::String* IconPath; // 0x30
		::RPG::GameCore::StageBattleEventType EventType; // 0x38
		::System::UInt32 EventID; // 0x3C
		::System::Boolean IncludeMonster; // 0x40
		::System::Boolean IncludeAvatar; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBATTLEEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageBattleEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageBattleEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEBATTLEEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
