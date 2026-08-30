#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_METHOD_6_5827D5ABCB697CF7_OFFSET UNITYSDK_OFFSET(0x1E0CC010)
#define RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_METHOD_6_D93FC4522EA31AB3_OFFSET UNITYSDK_OFFSET(0x1E0CBFC0)
#define RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterRandomReijuAffixConfig_TypeDefinitionIndex = 19007;

	class FateActAddMasterRandomReijuAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D93FC4522EA31AB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_METHOD_6_D93FC4522EA31AB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5827D5ABCB697CF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterRandomReijuAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERRANDOMREIJUAFFIXCONFIG_METHOD_6_5827D5ABCB697CF7_OFFSET))(a1, a2);
		}
	};
}
