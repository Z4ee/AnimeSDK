#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_7FB1FD69870419E7_OFFSET UNITYSDK_OFFSET(0x1D9AE7A0)
#define RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_FEDB8EDEDB38F10F_OFFSET UNITYSDK_OFFSET(0x1D9AE800)
#define RPG_GAMECORE_CONDLOGICORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AE7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicOrConfig_TypeDefinitionIndex = 16880;

	class CondLogicOrConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7FB1FD69870419E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicOrConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicOrConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_7FB1FD69870419E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEDB8EDEDB38F10F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicOrConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicOrConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_4_FEDB8EDEDB38F10F_OFFSET))(a1, a2);
		}
	};
}
