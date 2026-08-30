#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCAEONCROSSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91AC60)
#define RPG_GAMECORE_ROGUEDLCAEONCROSSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D91AE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonCrossRow_TypeDefinitionIndex = 14574;

	class RogueDLCAeonCrossRow : public ::System::Object
	{
	public:
		::System::UInt32 MainAeonID; // 0x10
		::System::UInt32 BuffGroup; // 0x14
		::System::UInt32 MainAeonNum; // 0x18
		::System::UInt32 SubAeonNum; // 0x1C
		::System::UInt32 SubAeonID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCROSSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCAeonCrossRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCAeonCrossRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCROSSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
