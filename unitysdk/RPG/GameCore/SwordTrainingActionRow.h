#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingStatusConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC0660)
#define RPG_GAMECORE_SWORDTRAININGACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC0AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingActionRow_TypeDefinitionIndex = 11761;

	class SwordTrainingActionRow : public ::System::Object
	{
	public:
		::System::String* ActionPlanImage; // 0x10
		::Il2CppArray<::RPG::GameCore::SwordTrainingStatusConfig*>* DisplayEffectHintList; // 0x18
		::System::String* ActionImage; // 0x20
		::Il2CppArray<::System::String*>* ActionPerformPrefab; // 0x28
		::System::String* ActionIcon; // 0x30
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x38
		::System::UInt32 ActionID; // 0x40
		::System::UInt32 ActionLevel; // 0x44
		::RPG::GameCore::SwordTrainingActionType ActionType; // 0x48
		::RPG::Client::TextID ActionName; // 0x50
		::RPG::Client::TextID ActionSubName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
