#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ETrainingRoomItemType.h"

namespace MoleMole { class AvatarInitData; }
namespace MoleMole::Config { class ConfigSpecialTraining; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x158B7760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTrainingRoom_TypeDefinitionIndex = 43017;

	class ConfigTrainingRoom : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* TrainingRoomMonsters; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* MonsterLevels; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ETrainingRoomItemType, ::System::String*>* TrainingRoomTypeNameDict; // 0x68
		::System::String* OpenString; // 0x70
		::System::String* CloseString; // 0x78
		::System::String* Title; // 0x80
		::System::String* EnTitle; // 0x88
		::System::Int32 DefaultLevelDesignID; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* trainingAvatars; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSpecialTraining*>* SpecialTrainings; // 0xA0
		::System::String* bornPoint; // 0xA8
		::System::String* SPTrainingAbility; // 0xB0
		::System::String* NoStunTrainingAbility; // 0xB8
		::System::String* OneHPTrainingAbility; // 0xC0
		::System::Int32 SpecialLevelDesignID; // 0xC8
		::System::Int32 ClickTrainQuestID; // 0xCC
		::System::Boolean FreeTrainFromTactics; // 0xD0
		::System::Boolean FreeAvatarTrainFromTactics; // 0xD1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM__CTOR_OFFSET))(this);
		}
	};
}
