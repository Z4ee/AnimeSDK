#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0056C0)
#define RPG_GAMECORE_CHENLINGACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E005800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingActionRow_TypeDefinitionIndex = 11075;

	class ChenLingActionRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChenLingActionType ActionType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingActionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
