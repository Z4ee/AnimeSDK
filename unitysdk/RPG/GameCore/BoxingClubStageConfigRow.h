#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1871AB60)
#define RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1871B370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubStageConfigRow_TypeDefinitionIndex = 12202;

	class BoxingClubStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffOptionalList; // 0x10
		::RPG::Client::TextID BubbleTalkEnemy; // 0x18
		::RPG::Client::TextID BubbleTalkPlayer; // 0x28
		::System::UInt32 EventID; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 BuffID; // 0x50
		::System::UInt32 MonsterWaveIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BoxingClubStageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingClubStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
