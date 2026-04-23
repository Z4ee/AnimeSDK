#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187F05F0)
#define RPG_GAMECORE_CHIMERAABILITYDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187F0800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityDisplayRow_TypeDefinitionIndex = 12303;

	class ChimeraAbilityDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AbilityDesc; // 0x10
		::System::UInt32 DisplayID; // 0x20
		::RPG::Client::TextID AbilityName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraAbilityDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
