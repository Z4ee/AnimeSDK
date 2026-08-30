#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA0A820)
#define RPG_GAMECORE_ACTIVITYHOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA0AD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotRow_TypeDefinitionIndex = 11656;

	class ActivityHotRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* RewardReceived; // 0x10
		::System::String* ImgPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardShow; // 0x20
		::System::UInt32 ActivityPanelOverwrite; // 0x28
		::System::UInt32 ActivityID; // 0x2C
		::RPG::Client::TextID ActivityName; // 0x30
		::RPG::Client::TextID ItemDes; // 0x40
		::RPG::Client::TextID TimeDes; // 0x50
		::RPG::Client::TextID DesName; // 0x60
		::System::UInt32 GotoID; // 0x70
		::System::Int32 SortWeight; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHotRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
