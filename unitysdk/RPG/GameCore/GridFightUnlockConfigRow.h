#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D16E5E0)
#define RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16E7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightUnlockConfigRow_TypeDefinitionIndex = 13481;

	class GridFightUnlockConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 UnlockID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightUnlockConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
