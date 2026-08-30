#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAE5BE0)
#define RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE5EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInfiniteWaveConfigRow_TypeDefinitionIndex = 14983;

	class StageInfiniteWaveConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterGroupIDList; // 0x10
		::System::String* Ability; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::Boolean ClearPreviousAbility; // 0x28
		::System::UInt32 InfiniteWaveID; // 0x2C
		::System::Int32 MaxMonsterCount; // 0x30
		::System::Int32 MaxTeammateCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInfiniteWaveConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInfiniteWaveConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
