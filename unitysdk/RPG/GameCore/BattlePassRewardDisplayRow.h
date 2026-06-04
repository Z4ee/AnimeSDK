#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194D3C50)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194D42E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassRewardDisplayRow_TypeDefinitionIndex = 12256;

	class BattlePassRewardDisplayRow : public ::System::Object
	{
	public:
		::System::String* RewardIcon; // 0x10
		::System::UInt32 RewardItem; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Boolean IsNew; // 0x20
		::System::Boolean NumShow; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePassRewardDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassRewardDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
