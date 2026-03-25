#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICEXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17590840)
#define RPG_GAMECORE_RELICEXPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17590EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicExpTypeRow_TypeDefinitionIndex = 13363;

	class RelicExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 TypeID; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicExpTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicExpTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
