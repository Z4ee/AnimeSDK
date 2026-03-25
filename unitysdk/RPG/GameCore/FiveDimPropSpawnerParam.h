#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPROPSPAWNERPARAM_METHOD_2_3598B59837640DC5_OFFSET UNITYSDK_OFFSET(0x17206140)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERPARAM_METHOD_2_D2620691D63D49DA_OFFSET UNITYSDK_OFFSET(0x17205C20)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x171FBC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropSpawnerParam_TypeDefinitionIndex = 17048;

	class FiveDimPropSpawnerParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D2620691D63D49DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERPARAM_METHOD_2_D2620691D63D49DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_3598B59837640DC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERPARAM_METHOD_2_3598B59837640DC5_OFFSET))(a1, a2);
		}
	};
}
