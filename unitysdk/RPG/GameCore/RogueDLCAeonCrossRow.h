#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCAEONCROSSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175F13F0)
#define RPG_GAMECORE_ROGUEDLCAEONCROSSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175F15E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonCrossRow_TypeDefinitionIndex = 13467;

	class RogueDLCAeonCrossRow : public ::System::Object
	{
	public:
		::System::UInt32 BuffGroup; // 0x10
		::System::UInt32 SubAeonNum; // 0x14
		::System::UInt32 MainAeonID; // 0x18
		::System::UInt32 MainAeonNum; // 0x1C
		::System::UInt32 SubAeonID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCROSSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCAeonCrossRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonCrossRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCROSSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
