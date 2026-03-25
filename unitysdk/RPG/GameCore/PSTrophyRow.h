#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PSTROPHYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17485DB0)
#define RPG_GAMECORE_PSTROPHYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17485FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PSTrophyRow_TypeDefinitionIndex = 11932;

	class PSTrophyRow : public ::System::Object
	{
	public:
		::System::UInt32 AchievementID; // 0x10
		::RPG::Client::TextID AchievementTitle; // 0x18
		::RPG::Client::TextID AchievementDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PSTrophyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PSTrophyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
