#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_0300DDA5851E8C07_OFFSET UNITYSDK_OFFSET(0x190F7DA0)
#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_135846CF13F1B973_OFFSET UNITYSDK_OFFSET(0x190F7C90)
#define RPG_GAMECORE_WAITANDPROCESSBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x190F7D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAndProcessBattleResult_TypeDefinitionIndex = 22376;

	class WaitAndProcessBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_135846CF13F1B973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAndProcessBattleResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAndProcessBattleResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_135846CF13F1B973_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0300DDA5851E8C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAndProcessBattleResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAndProcessBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANDPROCESSBATTLERESULT_METHOD_3_0300DDA5851E8C07_OFFSET))(a1, a2);
		}
	};
}
