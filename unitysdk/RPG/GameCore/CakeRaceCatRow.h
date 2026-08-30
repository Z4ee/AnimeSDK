#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACECATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF73DE0)
#define RPG_GAMECORE_CAKERACECATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF745D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatRow_TypeDefinitionIndex = 10979;

	class CakeRaceCatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TitlePerformanceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* RunnerupPerformanceIDList; // 0x18
		::System::String* CatMiniIcon; // 0x20
		::Il2CppArray<::System::UInt32>* ChampionPerformanceIDList; // 0x28
		::Il2CppArray<::System::UInt32>* BetPerformanceIDList; // 0x30
		::System::String* CatIcon; // 0x38
		::System::String* CatMatPath; // 0x40
		::System::String* CatAIJson; // 0x48
		::System::String* CatAbilityJson; // 0x50
		::System::String* CatPrefabPath; // 0x58
		::Il2CppArray<::System::UInt32>* StartPerformanceIDList; // 0x60
		::System::String* CatMiddleIcon; // 0x68
		::RPG::Client::TextID CatSkillTitle; // 0x70
		::RPG::Client::TextID CatSkillDesc; // 0x80
		::RPG::Client::TextID CatName; // 0x90
		::System::UInt32 CatID; // 0xA0
		::RPG::Client::TextID CatPersonalityDesc; // 0xA8
		::RPG::Client::TextID CatPersonalityTitle; // 0xB8
		::RPG::Client::TextID CakeTips; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCatRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
