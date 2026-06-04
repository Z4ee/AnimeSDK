#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_777CFBF05229AAD2_OFFSET UNITYSDK_OFFSET(0x196718C0)
#define RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_FEDB8EDEDB38F10F_OFFSET UNITYSDK_OFFSET(0x19671A00)
#define RPG_GAMECORE_CONDLOGICORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19671980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicOrConfig_TypeDefinitionIndex = 16208;

	class CondLogicOrConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_777CFBF05229AAD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicOrConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicOrConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_777CFBF05229AAD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEDB8EDEDB38F10F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicOrConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicOrConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_FEDB8EDEDB38F10F_OFFSET))(a1, a2);
		}
	};
}
