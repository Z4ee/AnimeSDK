#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EventTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBD36D0)
#define RPG_GAMECORE_ALLEYEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD42F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventRow_TypeDefinitionIndex = 12516;

	class AlleyEventRow : public ::System::Object
	{
	public:
		::System::String* EventIcon; // 0x10
		::Il2CppArray<::Class_1_4F30521532511E50*>* UnlockConditions; // 0x18
		::Il2CppArray<::System::UInt32>* StartMissionIDList; // 0x20
		::System::String* EventPic; // 0x28
		::RPG::Client::TextID EventTitle; // 0x30
		::RPG::Client::TextID EventNewOrderTips; // 0x40
		::System::UInt32 MappingInfoID; // 0x50
		::System::UInt32 EventID; // 0x54
		::RPG::Client::TextID EventShopTitle; // 0x58
		::System::UInt32 MapEntranceID; // 0x68
		::System::UInt32 EventPriority; // 0x6C
		::RPG::Client::TextID EventShopOrder; // 0x70
		::RPG::Client::TextID EventFinishTitle; // 0x80
		::RPG::GameCore::EventTypeEnum EventType; // 0x90
		::System::UInt32 RewardID; // 0x94
		::RPG::Client::TextID EventShopFinish; // 0x98
		::RPG::Client::TextID EventShopContent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
