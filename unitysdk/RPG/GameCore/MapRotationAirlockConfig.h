#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONAIRLOCKCONFIG_METHOD_2_CCB7A9EC72C245DA_OFFSET UNITYSDK_OFFSET(0x1D2258D0)
#define RPG_GAMECORE_MAPROTATIONAIRLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D225C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationAirlockConfig_TypeDefinitionIndex = 16831;

	class MapRotationAirlockConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 AirlockInstanceID; // 0x14
		::System::String* AirlockTrigger; // 0x18
		::System::UInt32 ValveAInstanceID; // 0x20
		::System::UInt32 ValveBInstanceID; // 0x24
		::System::Int32 ValveARegionIndex; // 0x28
		::System::Int32 ValveBRegionIndex; // 0x2C
		::System::UInt32 AreaAID; // 0x30
		::System::UInt32 AreaBID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAIRLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCB7A9EC72C245DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationAirlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationAirlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAIRLOCKCONFIG_METHOD_2_CCB7A9EC72C245DA_OFFSET))(a1, a2);
		}
	};
}
