#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG_METHOD_2_29A4BB59019454D6_OFFSET UNITYSDK_OFFSET(0x1D6C3D30)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierProjectileConfig_TypeDefinitionIndex = 16702;

	class FiveDimGrenadierProjectileConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PresetName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_29A4BB59019454D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierProjectileConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierProjectileConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG_METHOD_2_29A4BB59019454D6_OFFSET))(a1, a2);
		}
	};
}
