#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177682B0)
#define RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177685A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInfiniteWaveConfigRow_TypeDefinitionIndex = 13897;

	class StageInfiniteWaveConfigRow : public ::System::Object
	{
	public:
		::System::String* Ability; // 0x10
		::Il2CppArray<::System::UInt32>* MonsterGroupIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::Boolean ClearPreviousAbility; // 0x28
		::System::Int32 MaxTeammateCount; // 0x2C
		::System::Int32 MaxMonsterCount; // 0x30
		::System::UInt32 InfiniteWaveID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageInfiniteWaveConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInfiniteWaveConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEWAVECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
