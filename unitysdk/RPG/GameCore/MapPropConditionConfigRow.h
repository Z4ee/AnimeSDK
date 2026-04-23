#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }

#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A8CC80)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8D390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapPropConditionConfigRow_TypeDefinitionIndex = 11872;

	class MapPropConditionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnloadConditions; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::System::UInt32 Priority; // 0x20
		::System::UInt32 MiniMapIconID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 ActivityModuleID; // 0x2C
		::System::UInt32 MappingInfoID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MapPropConditionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapPropConditionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
