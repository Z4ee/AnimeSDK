#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19626910)
#define RPG_GAMECORE_CHENLINGCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19626B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingConditionRow_TypeDefinitionIndex = 10589;

	class ChenLingConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 Progress; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::GameCore::ChenLingConditionType Type; // 0x18
		::System::UInt32 Param2; // 0x1C
		::System::UInt32 Param1; // 0x20
		::System::UInt32 Param3; // 0x24
		::System::UInt32 Param4; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
