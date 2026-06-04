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

#define RPG_GAMECORE_MAINMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x198B3E70)
#define RPG_GAMECORE_MAINMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198B4510)
#define RPG_GAMECORE_MAINMISSIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x198B6700)
#define RPG_GAMECORE_MAINMISSIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x198B6760)
#define RPG_GAMECORE_MAINMISSIONROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x198B67A0)
#define RPG_GAMECORE_MAINMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198B6790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionRow_TypeDefinitionIndex = 13470;

	class MainMissionRow : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MainMissionRow_TypeDefinitionIndex)->GetStaticField(0x29810);
		}
		::Il2CppArray<::RPG::GameCore::MissionCondition*>* TakeParam; // 0x10
		::Il2CppArray<::RPG::GameCore::MissionCondition*>* BeginParam; // 0x18
		::Il2CppArray<::System::UInt32>* SubRewardList; // 0x20
		::Il2CppArray<::System::UInt32>* NextMainMissionList; // 0x28
		::System::UInt32 MissionPack; // 0x30
		::System::UInt32 ChapterID; // 0x34
		::RPG::GameCore::LogicOperation BeginOperation; // 0x38
		::System::UInt32 WorldID; // 0x3C
		::System::UInt32 NextTrackMainMission; // 0x40
		::RPG::GameCore::MainMissionSubType SubType; // 0x44
		::System::UInt32 MainMissionID; // 0x48
		::RPG::GameCore::LogicOperation TakeOperation; // 0x4C
		::System::UInt32 TrackWeight; // 0x50
		::System::Boolean IsInRaid; // 0x54
		::System::UInt32 MissionStoryEvent; // 0x58
		::System::UInt32 DisplayPriority; // 0x5C
		::System::UInt32 DisplayRewardID; // 0x60
		::System::UInt32 RewardID; // 0x64
		::RPG::GameCore::MainMissionType Type; // 0x68
		::System::UInt32 MissionAdvance; // 0x6C
		::RPG::Client::TextID Name; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW__CCTOR_OFFSET))();
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
