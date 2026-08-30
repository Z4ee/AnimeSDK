#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBB0E0)
#define RPG_GAMECORE_CHIMERAABILITYDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBB2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityDisplayRow_TypeDefinitionIndex = 12915;

	class ChimeraAbilityDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::RPG::Client::TextID AbilityDesc; // 0x18
		::RPG::Client::TextID AbilityName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
