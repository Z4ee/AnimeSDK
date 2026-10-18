#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarBaseClickConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_METHOD_3_1F143833E20B1BD2_OFFSET UNITYSDK_OFFSET(0x1D883CE0)
#define RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_METHOD_3_A4ADF186C2C55AD7_OFFSET UNITYSDK_OFFSET(0x1D884020)
#define RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D883CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarTutorialConfig_TypeDefinitionIndex = 23653;

	class MonsterEnergyBarTutorialConfig : public ::RPG::GameCore::MonsterEnergyBarBaseClickConfig
	{
	public:
		::System::UInt32 TutorialGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A4ADF186C2C55AD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEnergyBarTutorialConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEnergyBarTutorialConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_METHOD_3_A4ADF186C2C55AD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F143833E20B1BD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEnergyBarTutorialConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEnergyBarTutorialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_METHOD_3_1F143833E20B1BD2_OFFSET))(a1, a2);
		}
	};
}
