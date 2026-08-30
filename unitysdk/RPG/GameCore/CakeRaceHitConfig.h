#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define RPG_GAMECORE_CAKERACEHITCONFIG_METHOD_2_E1C604084502715A_OFFSET UNITYSDK_OFFSET(0x1D102320)
#define RPG_GAMECORE_CAKERACEHITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D102470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHitConfig_TypeDefinitionIndex = 18187;

	class CakeRaceHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceHitType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* Actions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E1C604084502715A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceHitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceHitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEHITCONFIG_METHOD_2_E1C604084502715A_OFFSET))(a1, a2);
		}
	};
}
