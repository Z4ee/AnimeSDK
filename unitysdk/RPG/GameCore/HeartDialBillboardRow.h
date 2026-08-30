#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALBILLBOARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D17BAF0)
#define RPG_GAMECORE_HEARTDIALBILLBOARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17C0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialBillboardRow_TypeDefinitionIndex = 13621;

	class HeartDialBillboardRow : public ::System::Object
	{
	public:
		::System::UInt32 MapIconID; // 0x10
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x14
		::RPG::GameCore::HeartDialStepType StepType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialBillboardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialBillboardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
