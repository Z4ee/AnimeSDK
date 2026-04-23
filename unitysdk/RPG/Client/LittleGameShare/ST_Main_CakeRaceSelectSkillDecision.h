#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_METHOD_5_69E6DD3D0007EC9E_OFFSET UNITYSDK_OFFSET(0x185E8900)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_METHOD_5_9E82239B816267C0_OFFSET UNITYSDK_OFFSET(0x185EA8E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x185E88B0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceSelectSkillDecision_TypeDefinitionIndex = 10171;

	class ST_Main_CakeRaceSelectSkillDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9E82239B816267C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_METHOD_5_9E82239B816267C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_69E6DD3D0007EC9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_METHOD_5_69E6DD3D0007EC9E_OFFSET))(a1, a2);
		}
	};
}
