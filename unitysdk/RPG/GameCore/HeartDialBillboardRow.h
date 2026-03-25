#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALBILLBOARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17297280)
#define RPG_GAMECORE_HEARTDIALBILLBOARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17297870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialBillboardRow_TypeDefinitionIndex = 12562;

	class HeartDialBillboardRow : public ::System::Object
	{
	public:
		::RPG::GameCore::HeartDialStepType StepType; // 0x10
		::System::UInt32 MapIconID; // 0x14
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeartDialBillboardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialBillboardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
