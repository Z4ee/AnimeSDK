#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_B2E8A12BEC2C251D_OFFSET UNITYSDK_OFFSET(0x17070C70)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_B64FDCDFCAACC286_OFFSET UNITYSDK_OFFSET(0x17070CB0)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17070CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPreloadConfig_TypeDefinitionIndex = 14957;

	class CharacterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2E8A12BEC2C251D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_B2E8A12BEC2C251D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B64FDCDFCAACC286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_B64FDCDFCAACC286_OFFSET))(a1, a2);
		}
	};
}
