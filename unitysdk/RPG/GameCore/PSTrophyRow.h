#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PSTROPHYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB0A7D0)
#define RPG_GAMECORE_PSTROPHYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0A9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PSTrophyRow_TypeDefinitionIndex = 12588;

	class PSTrophyRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AchievementTitle; // 0x10
		::System::UInt32 AchievementID; // 0x20
		::RPG::Client::TextID AchievementDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PSTrophyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PSTrophyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSTROPHYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
