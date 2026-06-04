#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_14D07A56C9472263_OFFSET UNITYSDK_OFFSET(0x19C44030)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_FCD1975E7210BCD3_OFFSET UNITYSDK_OFFSET(0x19C440C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON__CTOR_OFFSET UNITYSDK_OFFSET(0x19C44090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSelectAeon_TypeDefinitionIndex = 20564;

	class SetDynamicValueByRogueSelectAeon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14D07A56C9472263(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_14D07A56C9472263_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCD1975E7210BCD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_FCD1975E7210BCD3_OFFSET))(a1, a2);
		}
	};
}
