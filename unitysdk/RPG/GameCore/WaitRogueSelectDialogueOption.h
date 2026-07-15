#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_METHOD_3_7BE676803410C2C1_OFFSET UNITYSDK_OFFSET(0x1D1BAEE0)
#define RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_METHOD_3_DF78D0BD58DE2C9D_OFFSET UNITYSDK_OFFSET(0x1D1BAE90)
#define RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BAED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSelectDialogueOption_TypeDefinitionIndex = 19706;

	class WaitRogueSelectDialogueOption : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF78D0BD58DE2C9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectDialogueOption*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectDialogueOption*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_METHOD_3_DF78D0BD58DE2C9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BE676803410C2C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSelectDialogueOption* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSelectDialogueOption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESELECTDIALOGUEOPTION_METHOD_3_7BE676803410C2C1_OFFSET))(a1, a2);
		}
	};
}
