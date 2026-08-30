#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSAEONCROSSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E537B70)
#define RPG_GAMECORE_ROGUENOUSAEONCROSSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E537D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonCrossRow_TypeDefinitionIndex = 14756;

	class RogueNousAeonCrossRow : public ::System::Object
	{
	public:
		::System::UInt32 MainAeonNum; // 0x10
		::System::UInt32 BuffGroup; // 0x14
		::System::UInt32 MainAeonID; // 0x18
		::System::UInt32 SubAeonID; // 0x1C
		::System::UInt32 SubAeonNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONCROSSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousAeonCrossRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousAeonCrossRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONCROSSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
