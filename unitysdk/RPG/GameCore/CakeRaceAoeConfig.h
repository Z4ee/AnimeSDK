#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define RPG_GAMECORE_CAKERACEAOECONFIG_METHOD_2_7EB775C43C5E7AD7_OFFSET UNITYSDK_OFFSET(0x1B2CC630)
#define RPG_GAMECORE_CAKERACEAOECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CD030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAoeConfig_TypeDefinitionIndex = 17633;

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

		static ::System::Void Method_2_7EB775C43C5E7AD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceAoeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceAoeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAOECONFIG_METHOD_2_7EB775C43C5E7AD7_OFFSET))(a1, a2);
		}
	};
}
