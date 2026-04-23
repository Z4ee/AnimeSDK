#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EventTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186940A0)
#define RPG_GAMECORE_ALLEYEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18694CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventRow_TypeDefinitionIndex = 11902;

	class AlleyEventRow : public ::System::Object
	{
	public:
		::System::String* EventIcon; // 0x10
		::Il2CppArray<::Class_1_4F30521532511E50*>* UnlockConditions; // 0x18
		::Il2CppArray<::System::UInt32>* StartMissionIDList; // 0x20
		::System::String* EventPic; // 0x28
		::RPG::Client::TextID EventShopContent; // 0x30
		::System::UInt32 EventID; // 0x40
		::RPG::GameCore::EventTypeEnum EventType; // 0x44
		::RPG::Client::TextID EventNewOrderTips; // 0x48
		::System::UInt32 MapEntranceID; // 0x58
		::System::UInt32 EventPriority; // 0x5C
		::RPG::Client::TextID EventShopTitle; // 0x60
		::RPG::Client::TextID EventTitle; // 0x70
		::RPG::Client::TextID EventShopFinish; // 0x80
		::RPG::Client::TextID EventFinishTitle; // 0x90
		::System::UInt32 MappingInfoID; // 0xA0
		::System::UInt32 RewardID; // 0xA4
		::RPG::Client::TextID EventShopOrder; // 0xA8

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
