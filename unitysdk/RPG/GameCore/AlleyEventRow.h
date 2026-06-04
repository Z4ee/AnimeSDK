#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EventTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194694D0)
#define RPG_GAMECORE_ALLEYEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1946A0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventRow_TypeDefinitionIndex = 11995;

	class AlleyEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StartMissionIDList; // 0x10
		::System::String* EventIcon; // 0x18
		::System::String* EventPic; // 0x20
		::Il2CppArray<::Class_1_4F30521532511E50*>* UnlockConditions; // 0x28
		::RPG::Client::TextID EventFinishTitle; // 0x30
		::RPG::GameCore::EventTypeEnum EventType; // 0x40
		::System::UInt32 EventPriority; // 0x44
		::RPG::Client::TextID EventShopOrder; // 0x48
		::RPG::Client::TextID EventTitle; // 0x58
		::RPG::Client::TextID EventShopTitle; // 0x68
		::RPG::Client::TextID EventShopContent; // 0x78
		::RPG::Client::TextID EventNewOrderTips; // 0x88
		::System::UInt32 RewardID; // 0x98
		::System::UInt32 EventID; // 0x9C
		::RPG::Client::TextID EventShopFinish; // 0xA0
		::System::UInt32 MappingInfoID; // 0xB0
		::System::UInt32 MapEntranceID; // 0xB4

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
