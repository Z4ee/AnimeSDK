#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_311FD5654CD0276C_OFFSET UNITYSDK_OFFSET(0x19BBCC40)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_C2AC8B3BB5B44EF8_OFFSET UNITYSDK_OFFSET(0x19BBCD50)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBCD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTakeInitialScore_TypeDefinitionIndex = 21063;

	class RogueTakeInitialScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_311FD5654CD0276C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTakeInitialScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTakeInitialScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_311FD5654CD0276C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2AC8B3BB5B44EF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_C2AC8B3BB5B44EF8_OFFSET))(a1, a2);
		}
	};
}
