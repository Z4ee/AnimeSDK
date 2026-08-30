#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_4139AC325758F0B8_OFFSET UNITYSDK_OFFSET(0x1CFF7E10)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_FC294CD1FC2EF452_OFFSET UNITYSDK_OFFSET(0x1CFF7DB0)
#define RPG_GAMECORE_CONDRANDOMSUCCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondRandomSuccConfig_TypeDefinitionIndex = 16884;

	class CondRandomSuccConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Probability; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FC294CD1FC2EF452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondRandomSuccConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondRandomSuccConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_FC294CD1FC2EF452_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4139AC325758F0B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondRandomSuccConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondRandomSuccConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDRANDOMSUCCCONFIG_METHOD_4_4139AC325758F0B8_OFFSET))(a1, a2);
		}
	};
}
