#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF8C20)
#define RPG_GAMECORE_ACTIVITYHOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF9130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotRow_TypeDefinitionIndex = 11267;

	class ActivityHotRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* RewardReceived; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardShow; // 0x20
		::RPG::Client::TextID DesName; // 0x28
		::RPG::Client::TextID TimeDes; // 0x38
		::System::Int32 SortWeight; // 0x48
		::System::UInt32 ActivityPanelOverwrite; // 0x4C
		::RPG::Client::TextID ItemDes; // 0x50
		::System::UInt32 ActivityID; // 0x60
		::System::UInt32 GotoID; // 0x64
		::RPG::Client::TextID ActivityName; // 0x68

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
