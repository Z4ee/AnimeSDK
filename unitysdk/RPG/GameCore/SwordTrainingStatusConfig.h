#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGSTATUSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE6DD0)
#define RPG_GAMECORE_SWORDTRAININGSTATUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE6EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStatusConfig_TypeDefinitionIndex = 11847;

	class SwordTrainingStatusConfig : public ::System::Object
	{
	public:
		::System::UInt32 Count; // 0x10
		::System::UInt32 StatusID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingStatusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStatusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
