#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERENERGYCONFIG_METHOD_2_E10A1F509D5F5612_OFFSET UNITYSDK_OFFSET(0x18C25A00)
#define RPG_GAMECORE_PLAYERENERGYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C25C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerEnergyConfig_TypeDefinitionIndex = 16117;

	class PlayerEnergyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::String* EnergyCountAnimParamName; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::String* TrailEffectPath; // 0x28
		::Il2CppArray<::System::String*>* TrailEffectStartPoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERENERGYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E10A1F509D5F5612(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerEnergyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerEnergyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERENERGYCONFIG_METHOD_2_E10A1F509D5F5612_OFFSET))(a1, a2);
		}
	};
}
