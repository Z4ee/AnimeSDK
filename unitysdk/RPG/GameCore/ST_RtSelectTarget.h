#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_RTSELECTTARGET_METHOD_4_22DE152C31FCA315_OFFSET UNITYSDK_OFFSET(0x1D4CEC80)
#define RPG_GAMECORE_ST_RTSELECTTARGET_METHOD_4_3C694E9A8190F87E_OFFSET UNITYSDK_OFFSET(0x1D4CEC40)
#define RPG_GAMECORE_ST_RTSELECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CEC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtSelectTarget_TypeDefinitionIndex = 23800;

	class ST_RtSelectTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::RtBattleSelectTargetStrategy Strategy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3C694E9A8190F87E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtSelectTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtSelectTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTTARGET_METHOD_4_3C694E9A8190F87E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22DE152C31FCA315(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtSelectTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtSelectTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTSELECTTARGET_METHOD_4_22DE152C31FCA315_OFFSET))(a1, a2);
		}
	};
}
