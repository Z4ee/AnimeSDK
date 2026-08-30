#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3CE550)
#define RPG_GAMECORE_HEARTDIALCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CE740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialConditionRow_TypeDefinitionIndex = 13615;

	class HeartDialConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 ParamUint3; // 0x10
		::RPG::GameCore::HeartDialFinishType FinishType; // 0x14
		::System::UInt32 ParamUint2; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 ParamUint1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
