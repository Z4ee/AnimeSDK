#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELEMENTRESISTANCECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18899840)
#define RPG_GAMECORE_ELEMENTRESISTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18899990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElementResistanceConfig_TypeDefinitionIndex = 12352;

	class ElementResistanceConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::AttackDamageType DamageType; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELEMENTRESISTANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ElementResistanceConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElementResistanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELEMENTRESISTANCECONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
