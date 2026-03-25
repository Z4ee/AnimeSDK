#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EventTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F715A0)
#define RPG_GAMECORE_ALLEYEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F72170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventRow_TypeDefinitionIndex = 11500;

	class AlleyEventRow : public ::System::Object
	{
	public:
		::System::String* EventIcon; // 0x10
		::System::String* EventPic; // 0x18
		::Il2CppArray<::Class_1_4F30521532511E50*>* UnlockConditions; // 0x20
		::Il2CppArray<::System::UInt32>* StartMissionIDList; // 0x28
		::System::UInt32 MappingInfoID; // 0x30
		::System::UInt32 EventPriority; // 0x34
		::RPG::Client::TextID EventNewOrderTips; // 0x38
		::RPG::Client::TextID EventShopFinish; // 0x48
		::RPG::Client::TextID EventFinishTitle; // 0x58
		::RPG::GameCore::EventTypeEnum EventType; // 0x68
		::System::UInt32 EventID; // 0x6C
		::RPG::Client::TextID EventTitle; // 0x70
		::RPG::Client::TextID EventShopOrder; // 0x80
		::System::UInt32 RewardID; // 0x90
		::System::UInt32 MapEntranceID; // 0x94
		::RPG::Client::TextID EventShopContent; // 0x98
		::RPG::Client::TextID EventShopTitle; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
