#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_02A9EB52E264B5FE_OFFSET UNITYSDK_OFFSET(0x17665A60)
#define RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_E15C3C3BCC711472_OFFSET UNITYSDK_OFFSET(0x17665950)
#define RPG_GAMECORE_ROGUETOURNFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x17665A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFinish_TypeDefinitionIndex = 20280;

	class RogueTournFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E15C3C3BCC711472(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_E15C3C3BCC711472_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02A9EB52E264B5FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFINISH_METHOD_3_02A9EB52E264B5FE_OFFSET))(a1, a2);
		}
	};
}
