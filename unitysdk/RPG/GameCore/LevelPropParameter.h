#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_BCDD42E36CBCCDA5_OFFSET UNITYSDK_OFFSET(0x1D1EC800)
#define RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_CA31F153EA467F8E_OFFSET UNITYSDK_OFFSET(0x1D1EC360)
#define RPG_GAMECORE_LEVELPROPPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EC260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropParameter_TypeDefinitionIndex = 17058;

	class LevelPropParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA31F153EA467F8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_CA31F153EA467F8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BCDD42E36CBCCDA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_BCDD42E36CBCCDA5_OFFSET))(a1, a2);
		}
	};
}
