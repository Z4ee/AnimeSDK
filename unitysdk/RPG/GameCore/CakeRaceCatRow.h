#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACECATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D51FD90)
#define RPG_GAMECORE_CAKERACECATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D520580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatRow_TypeDefinitionIndex = 10995;

	class CakeRaceCatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RunnerupPerformanceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ChampionPerformanceIDList; // 0x18
		::System::String* CatIcon; // 0x20
		::Il2CppArray<::System::UInt32>* BetPerformanceIDList; // 0x28
		::System::String* CatMatPath; // 0x30
		::System::String* CatAbilityJson; // 0x38
		::Il2CppArray<::System::UInt32>* TitlePerformanceIDList; // 0x40
		::System::String* CatMiddleIcon; // 0x48
		::System::String* CatAIJson; // 0x50
		::Il2CppArray<::System::UInt32>* StartPerformanceIDList; // 0x58
		::System::String* CatMiniIcon; // 0x60
		::System::String* CatPrefabPath; // 0x68
		::RPG::Client::TextID CatSkillDesc; // 0x70
		::RPG::Client::TextID CatPersonalityDesc; // 0x80
		::RPG::Client::TextID CatPersonalityTitle; // 0x90
		::RPG::Client::TextID CatName; // 0xA0
		::RPG::Client::TextID CatSkillTitle; // 0xB0
		::RPG::Client::TextID CakeTips; // 0xC0
		::System::UInt32 CatID; // 0xD0

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
