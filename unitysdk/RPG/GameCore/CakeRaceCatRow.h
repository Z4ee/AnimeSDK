#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACECATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2CF510)
#define RPG_GAMECORE_CAKERACECATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CFD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatRow_TypeDefinitionIndex = 10604;

	class CakeRaceCatRow : public ::System::Object
	{
	public:
		::System::String* CatMiddleIcon; // 0x10
		::Il2CppArray<::System::UInt32>* StartPerformanceIDList; // 0x18
		::System::String* CatAIJson; // 0x20
		::System::String* CatMiniIcon; // 0x28
		::System::String* CatIcon; // 0x30
		::Il2CppArray<::System::UInt32>* ChampionPerformanceIDList; // 0x38
		::System::String* CatPrefabPath; // 0x40
		::Il2CppArray<::System::UInt32>* BetPerformanceIDList; // 0x48
		::Il2CppArray<::System::UInt32>* TitlePerformanceIDList; // 0x50
		::Il2CppArray<::System::UInt32>* RunnerupPerformanceIDList; // 0x58
		::System::String* CatMatPath; // 0x60
		::System::String* CatAbilityJson; // 0x68
		::System::UInt32 CatID; // 0x70
		::RPG::Client::TextID CatSkillTitle; // 0x78
		::RPG::Client::TextID CatPersonalityTitle; // 0x88
		::RPG::Client::TextID CatName; // 0x98
		::RPG::Client::TextID CatSkillDesc; // 0xA8
		::RPG::Client::TextID CakeTips; // 0xB8
		::RPG::Client::TextID CatPersonalityDesc; // 0xC8

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
