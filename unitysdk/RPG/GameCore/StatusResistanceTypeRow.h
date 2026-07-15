#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STATUSRESISTANCETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0C4120)
#define RPG_GAMECORE_STATUSRESISTANCETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C46A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusResistanceTypeRow_TypeDefinitionIndex = 13667;

	class StatusResistanceTypeRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::GameCore::ModifierBehaviorFlag Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StatusResistanceTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StatusResistanceTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
