#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_METHOD_2_8F1CE4421F1867F5_OFFSET UNITYSDK_OFFSET(0x1DD69D90)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_METHOD_2_F21F6AF1249DAA41_OFFSET UNITYSDK_OFFSET(0x1DD6A020)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6A010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityMoveConfig_TypeDefinitionIndex = 18665;

	class LittleGameEntityMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F1CE4421F1867F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_METHOD_2_8F1CE4421F1867F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F21F6AF1249DAA41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVECONFIG_METHOD_2_F21F6AF1249DAA41_OFFSET))(a1, a2);
		}
	};
}
