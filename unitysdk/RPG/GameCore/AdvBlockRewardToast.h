#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBLOCKREWARDTOAST_METHOD_3_91584BE71C128F79_OFFSET UNITYSDK_OFFSET(0x1CDB9200)
#define RPG_GAMECORE_ADVBLOCKREWARDTOAST_METHOD_3_D67C11908BCEEA82_OFFSET UNITYSDK_OFFSET(0x1CDB9240)
#define RPG_GAMECORE_ADVBLOCKREWARDTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB9230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvBlockRewardToast_TypeDefinitionIndex = 21557;

	class AdvBlockRewardToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBLOCKREWARDTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91584BE71C128F79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvBlockRewardToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvBlockRewardToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBLOCKREWARDTOAST_METHOD_3_91584BE71C128F79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D67C11908BCEEA82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvBlockRewardToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvBlockRewardToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBLOCKREWARDTOAST_METHOD_3_D67C11908BCEEA82_OFFSET))(a1, a2);
		}
	};
}
