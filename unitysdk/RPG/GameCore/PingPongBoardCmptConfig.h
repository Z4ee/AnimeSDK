#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_METHOD_3_034118288AA1CABA_OFFSET UNITYSDK_OFFSET(0x174AEBD0)
#define RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_METHOD_3_12F93CBA7BBF3C28_OFFSET UNITYSDK_OFFSET(0x174AEAF0)
#define RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AEBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongBoardCmptConfig_TypeDefinitionIndex = 17366;

	class PingPongBoardCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_12F93CBA7BBF3C28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongBoardCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongBoardCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_METHOD_3_12F93CBA7BBF3C28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_034118288AA1CABA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongBoardCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongBoardCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_METHOD_3_034118288AA1CABA_OFFSET))(a1, a2);
		}
	};
}
