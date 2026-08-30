#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG_METHOD_2_1267694444390973_OFFSET UNITYSDK_OFFSET(0x1D016200)
#define RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D016400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTextTeamPoolConfig_TypeDefinitionIndex = 16949;

	class DamageTextTeamPoolConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* All; // 0x10
		::Il2CppArray<::System::Int32>* WithEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1267694444390973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageTextTeamPoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageTextTeamPoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTTEAMPOOLCONFIG_METHOD_2_1267694444390973_OFFSET))(a1, a2);
		}
	};
}
