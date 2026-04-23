#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define RPG_GAMECORE_CAKERACEAOECONFIG_METHOD_2_8D6C8B59407B5B40_OFFSET UNITYSDK_OFFSET(0x1876C4D0)
#define RPG_GAMECORE_CAKERACEAOECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1876CB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAoeConfig_TypeDefinitionIndex = 17457;

	class CakeRaceAoeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceAoeType Type; // 0x10
		::RPG::GameCore::CakeRaceAoeShowType ShowType; // 0x14
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* EnterActions; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* LeaveActions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAOECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D6C8B59407B5B40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceAoeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceAoeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAOECONFIG_METHOD_2_8D6C8B59407B5B40_OFFSET))(a1, a2);
		}
	};
}
