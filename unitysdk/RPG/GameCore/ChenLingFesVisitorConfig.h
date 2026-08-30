#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESVISITORCONFIG_METHOD_3_2666332B2033A6C1_OFFSET UNITYSDK_OFFSET(0x1CFB5940)
#define RPG_GAMECORE_CHENLINGFESVISITORCONFIG_METHOD_3_6757A085E89DB2A1_OFFSET UNITYSDK_OFFSET(0x1CFB59A0)
#define RPG_GAMECORE_CHENLINGFESVISITORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB5990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesVisitorConfig_TypeDefinitionIndex = 18224;

	class ChenLingFesVisitorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 Level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVISITORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2666332B2033A6C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesVisitorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesVisitorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVISITORCONFIG_METHOD_3_2666332B2033A6C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6757A085E89DB2A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesVisitorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesVisitorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVISITORCONFIG_METHOD_3_6757A085E89DB2A1_OFFSET))(a1, a2);
		}
	};
}
