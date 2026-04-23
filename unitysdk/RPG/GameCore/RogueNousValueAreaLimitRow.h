#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D57130)
#define RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D57780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousValueAreaLimitRow_TypeDefinitionIndex = 14123;

	class RogueNousValueAreaLimitRow : public ::System::Object
	{
	public:
		::System::Int32 MinNousValue; // 0x10
		::System::Int32 MaxNousValue; // 0x14
		::System::UInt32 AreaID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousValueAreaLimitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousValueAreaLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSVALUEAREALIMITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
