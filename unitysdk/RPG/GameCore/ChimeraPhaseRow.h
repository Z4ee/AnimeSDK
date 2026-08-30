#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraPhaseTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E33FD70)
#define RPG_GAMECORE_CHIMERAPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPhaseRow_TypeDefinitionIndex = 12930;

	class ChimeraPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RoundList; // 0x10
		::Il2CppArray<::System::UInt32>* TargetParam; // 0x18
		::System::Int32 LeaderChariotState; // 0x20
		::System::UInt32 NextPhaseID; // 0x24
		::RPG::GameCore::ChimeraPhaseTargetType TargetType; // 0x28
		::System::UInt32 PhaseID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
