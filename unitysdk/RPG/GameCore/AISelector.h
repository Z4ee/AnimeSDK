#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AISELECTOR_METHOD_2_1499B2CFC36F7F2A_OFFSET UNITYSDK_OFFSET(0x193C2D80)
#define RPG_GAMECORE_AISELECTOR_METHOD_2_C77873DCB48381B2_OFFSET UNITYSDK_OFFSET(0x193C1A60)
#define RPG_GAMECORE_AISELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x193BFCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISelector_TypeDefinitionIndex = 14822;

	class AISelector : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C77873DCB48381B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISELECTOR_METHOD_2_C77873DCB48381B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1499B2CFC36F7F2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AISelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISELECTOR_METHOD_2_1499B2CFC36F7F2A_OFFSET))(a1, a2);
		}
	};
}
