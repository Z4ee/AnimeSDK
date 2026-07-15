#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AB0CD00)
#define RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0D6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRogueAreaConfigRow_TypeDefinitionIndex = 11862;

	class ActivityRogueAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* MazeBuffIDList; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList_1; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonster; // 0x28
		::Il2CppArray<::System::UInt32>* TargetParamList; // 0x30
		::Il2CppArray<::System::UInt32>* ParamList_3; // 0x38
		::System::String* FigurePath2; // 0x40
		::Il2CppArray<::System::UInt32>* ParamList_2; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonster2; // 0x50
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x58
		::Il2CppArray<::System::UInt32>* MiracleEffectIDList; // 0x60
		::Il2CppArray<::System::UInt32>* AreaEffectIDList; // 0x68
		::RPG::Client::TextID GamePlay_1; // 0x70
		::RPG::Client::TextID GamePlay_2; // 0x80
		::System::UInt32 ActivityModuleID; // 0x90
		::System::UInt32 EventID; // 0x94
		::RPG::Client::TextID GamePlay_3; // 0x98
		::System::UInt32 DisplayMapID; // 0xA8
		::RPG::Client::TextID Endless_GamePlay; // 0xB0
		::System::UInt32 PlaneID; // 0xC0
		::System::UInt32 FloorID; // 0xC4
		::System::UInt32 StageID; // 0xC8
		::System::UInt32 BattleAreaGroupID; // 0xCC
		::System::UInt32 AreaID; // 0xD0
		::System::UInt32 BattleAreaID; // 0xD4
		::RPG::Client::TextID Describe; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRogueAreaConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRogueAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYROGUEAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
