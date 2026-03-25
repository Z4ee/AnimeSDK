#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1728A570)
#define RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1728A730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightUnlockConfigRow_TypeDefinitionIndex = 12424;

	class GridFightUnlockConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::RPG::Client::TextID UnlockDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightUnlockConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
