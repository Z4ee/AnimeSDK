#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYDICEHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD7F5A0)
#define RPG_GAMECORE_ACTIVITYDICEHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7F720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceHintRow_TypeDefinitionIndex = 11259;

	class ActivityDiceHintRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Content; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICEHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceHintRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICEHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
