#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_METHOD_3_E49B3D2204D816B7_OFFSET UNITYSDK_OFFSET(0x1BCD4B50)
#define RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_METHOD_3_FE5113700AA98D6A_OFFSET UNITYSDK_OFFSET(0x1BCD4B10)
#define RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD4B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRogueTournPermanantTalentStateChange_TypeDefinitionIndex = 20437;

	class LoopWaitRogueTournPermanantTalentStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE5113700AA98D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_METHOD_3_FE5113700AA98D6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E49B3D2204D816B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRogueTournPermanantTalentStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROGUETOURNPERMANANTTALENTSTATECHANGE_METHOD_3_E49B3D2204D816B7_OFFSET))(a1, a2);
		}
	};
}
