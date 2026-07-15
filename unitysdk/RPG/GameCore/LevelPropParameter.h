#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_7316772C7CE8A717_OFFSET UNITYSDK_OFFSET(0x1B087070)
#define RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_BCDD42E36CBCCDA5_OFFSET UNITYSDK_OFFSET(0x1B0874C0)
#define RPG_GAMECORE_LEVELPROPPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B086F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropParameter_TypeDefinitionIndex = 16566;

	class LevelPropParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7316772C7CE8A717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_7316772C7CE8A717_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BCDD42E36CBCCDA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPPARAMETER_METHOD_2_BCDD42E36CBCCDA5_OFFSET))(a1, a2);
		}
	};
}
