#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG_METHOD_2_6D7098D6318C991A_OFFSET UNITYSDK_OFFSET(0x1CB11DC0)
#define RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB11EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitBeAttackConfig_TypeDefinitionIndex = 17387;

	class SummonUnitBeAttackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeAttack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6D7098D6318C991A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitBeAttackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitBeAttackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBEATTACKCONFIG_METHOD_2_6D7098D6318C991A_OFFSET))(a1, a2);
		}
	};
}
