#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLECONDITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A3E62E0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E6A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleConditionConfigRow_TypeDefinitionIndex = 12361;

	class BattleConditionConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::RPG::Client::TextID ConditionDes; // 0x18
		::System::Boolean WinOrLose; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 TargetParam; // 0x30
		::System::UInt32 IsShowProgress; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleConditionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleConditionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
