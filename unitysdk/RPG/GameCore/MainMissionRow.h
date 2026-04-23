#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/MainMissionSubType.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCondition; }
namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18A80EF0)
#define RPG_GAMECORE_MAINMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A815A0)
#define RPG_GAMECORE_MAINMISSIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18A82EB0)
#define RPG_GAMECORE_MAINMISSIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x18A82F10)
#define RPG_GAMECORE_MAINMISSIONROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A82F50)
#define RPG_GAMECORE_MAINMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A82F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionRow_TypeDefinitionIndex = 13397;

	class MainMissionRow : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MainMissionRow_TypeDefinitionIndex)->GetStaticField(0x33160);
		}
		::Il2CppArray<::System::UInt32>* NextMainMissionList; // 0x10
		::Il2CppArray<::RPG::GameCore::MissionCondition*>* BeginParam; // 0x18
		::Il2CppArray<::System::UInt32>* SubRewardList; // 0x20
		::Il2CppArray<::RPG::GameCore::MissionCondition*>* TakeParam; // 0x28
		::System::UInt32 MissionPack; // 0x30
		::RPG::GameCore::LogicOperation BeginOperation; // 0x34
		::System::UInt32 TrackWeight; // 0x38
		::System::UInt32 MainMissionID; // 0x3C
		::System::Boolean IsInRaid; // 0x40
		::System::UInt32 ChapterID; // 0x44
		::System::UInt32 MissionStoryEvent; // 0x48
		::System::UInt32 RewardID; // 0x4C
		::System::UInt32 MissionAdvance; // 0x50
		::System::UInt32 DisplayPriority; // 0x54
		::System::UInt32 WorldID; // 0x58
		::RPG::GameCore::LogicOperation TakeOperation; // 0x5C
		::RPG::GameCore::MainMissionType Type; // 0x60
		::RPG::GameCore::MainMissionSubType SubType; // 0x64
		::System::UInt32 DisplayRewardID; // 0x68
		::System::UInt32 NextTrackMainMission; // 0x6C
		::RPG::Client::TextID Name; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW__CCTOR_OFFSET))();
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MainMissionRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MainMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
