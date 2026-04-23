#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VP_EXP_METHOD_3_263194E01AD15D45_OFFSET UNITYSDK_OFFSET(0x190F0660)
#define RPG_GAMECORE_VP_EXP_METHOD_3_B7D931710CBC5580_OFFSET UNITYSDK_OFFSET(0x190F06E0)
#define RPG_GAMECORE_VP_EXP__CTOR_OFFSET UNITYSDK_OFFSET(0x190F06D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Exp_TypeDefinitionIndex = 23041;

	class VP_Exp : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_263194E01AD15D45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Exp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Exp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_METHOD_3_263194E01AD15D45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7D931710CBC5580(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Exp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Exp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_METHOD_3_B7D931710CBC5580_OFFSET))(a1, a2);
		}
	};
}
