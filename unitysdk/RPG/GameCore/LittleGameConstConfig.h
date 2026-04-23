#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_METHOD_2_1A134D468F1A1A32_OFFSET UNITYSDK_OFFSET(0x18A6A730)
#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG_METHOD_2_50ADBD3FBC9F9117_OFFSET UNITYSDK_OFFSET(0x18A6A270)
#define RPG_GAMECORE_LITTLEGAMECONSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6A720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameConstConfig_TypeDefinitionIndex = 17902;

	class LittleGameConstConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_50ADBD3FBC9F9117(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameConstConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameConstConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_METHOD_2_50ADBD3FBC9F9117_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1A134D468F1A1A32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameConstConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameConstConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECONSTCONFIG_METHOD_2_1A134D468F1A1A32_OFFSET))(a1, a2);
		}
	};
}
