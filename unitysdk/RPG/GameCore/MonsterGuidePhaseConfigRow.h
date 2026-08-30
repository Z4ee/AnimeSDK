#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERGUIDEPHASECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE6CAA0)
#define RPG_GAMECORE_MONSTERGUIDEPHASECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6CE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuidePhaseConfigRow_TypeDefinitionIndex = 14094;

	class MonsterGuidePhaseConfigRow : public ::System::Object
	{
	public:
		::System::String* PhasePic; // 0x10
		::Il2CppArray<::System::UInt32>* SkillList; // 0x18
		::RPG::Client::TextID PhaseAnswer; // 0x20
		::RPG::Client::TextID PhaseName; // 0x30
		::System::UInt32 Difficulty; // 0x40
		::System::UInt32 PhaseID; // 0x44
		::RPG::Client::TextID PhaseDescription; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDEPHASECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterGuidePhaseConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuidePhaseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDEPHASECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
