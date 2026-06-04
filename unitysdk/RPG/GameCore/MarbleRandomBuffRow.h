#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLERANDOMBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198D7120)
#define RPG_GAMECORE_MARBLERANDOMBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198D7650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRandomBuffRow_TypeDefinitionIndex = 11370;

	class MarbleRandomBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* ConditionList; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 IsRepeat; // 0x28
		::System::Int32 Weight; // 0x2C
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x30
		::System::UInt32 ID; // 0x34
		::System::UInt32 EffectParam; // 0x38
		::System::UInt32 ActivityID; // 0x3C
		::System::UInt32 EffectType; // 0x40
		::System::UInt32 SetInactive; // 0x44
		::System::UInt32 UnlockSubMission; // 0x48
		::RPG::Client::TextID Desc; // 0x50
		::RPG::Client::TextID Name; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRandomBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRandomBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
