#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PSTROPHYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BCF360)
#define RPG_GAMECORE_PSTROPHYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCF4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PSTrophyGroupRow_TypeDefinitionIndex = 12361;

	class PSTrophyGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 PSTrophyGroup; // 0x10
		::RPG::Client::TextID TrophyGroup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PSTrophyGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PSTrophyGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
