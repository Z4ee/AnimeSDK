#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_HEARTDIALTRACECONSUMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189EE530)
#define RPG_GAMECORE_HEARTDIALTRACECONSUMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189EE7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialTraceConsumeRow_TypeDefinitionIndex = 13003;

	class HeartDialTraceConsumeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialCost; // 0x10
		::System::UInt32 MapInfoID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::System::Int32 MiniMapID; // 0x20
		::RPG::GameCore::HeartDialEmoType HeartDialEmotion; // 0x24
		::RPG::GameCore::HeartDialStepType HeartDialStep; // 0x28
		::System::UInt32 HeartDialTraceID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALTRACECONSUMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeartDialTraceConsumeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialTraceConsumeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALTRACECONSUMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
