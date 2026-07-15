#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELCONDITIONCONFIG_METHOD_2_39E032DC64E44C22_OFFSET UNITYSDK_OFFSET(0x1C393DD0)
#define RPG_GAMECORE_CHIMERADUELCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C393EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelConditionConfig_TypeDefinitionIndex = 15415;

	class ChimeraDuelConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelPredicateBase*>* Condition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_39E032DC64E44C22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCONDITIONCONFIG_METHOD_2_39E032DC64E44C22_OFFSET))(a1, a2);
		}
	};
}
