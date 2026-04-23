#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186202F0)
#define RPG_GAMECORE_ACTIVITYHOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18620810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotRow_TypeDefinitionIndex = 11119;

	class ActivityHotRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardShow; // 0x10
		::System::String* ImgPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* RewardReceived; // 0x20
		::RPG::Client::TextID DesName; // 0x28
		::RPG::Client::TextID ActivityName; // 0x38
		::RPG::Client::TextID TimeDes; // 0x48
		::RPG::Client::TextID ItemDes; // 0x58
		::System::UInt32 ActivityPanelOverwrite; // 0x68
		::System::UInt32 GotoID; // 0x6C
		::System::Int32 SortWeight; // 0x70
		::System::UInt32 ActivityID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
