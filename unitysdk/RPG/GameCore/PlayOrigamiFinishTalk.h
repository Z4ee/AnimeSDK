#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYORIGAMIFINISHTALK_METHOD_3_4A0E900622DA61EE_OFFSET UNITYSDK_OFFSET(0x19A26C90)
#define RPG_GAMECORE_PLAYORIGAMIFINISHTALK_METHOD_3_86400D664FDD9A9A_OFFSET UNITYSDK_OFFSET(0x19A26DA0)
#define RPG_GAMECORE_PLAYORIGAMIFINISHTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A26D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayOrigamiFinishTalk_TypeDefinitionIndex = 20854;

	class PlayOrigamiFinishTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMIFINISHTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A0E900622DA61EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOrigamiFinishTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOrigamiFinishTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMIFINISHTALK_METHOD_3_4A0E900622DA61EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86400D664FDD9A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayOrigamiFinishTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayOrigamiFinishTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMIFINISHTALK_METHOD_3_86400D664FDD9A9A_OFFSET))(a1, a2);
		}
	};
}
