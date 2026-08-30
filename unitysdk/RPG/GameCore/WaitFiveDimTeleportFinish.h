#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_5AF7370543C9E743_OFFSET UNITYSDK_OFFSET(0x1D6A2A80)
#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_8744FEB7414033C6_OFFSET UNITYSDK_OFFSET(0x1D6A2B50)
#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A2B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFiveDimTeleportFinish_TypeDefinitionIndex = 21037;

	class WaitFiveDimTeleportFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AF7370543C9E743(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimTeleportFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_5AF7370543C9E743_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8744FEB7414033C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFiveDimTeleportFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_METHOD_3_8744FEB7414033C6_OFFSET))(a1, a2);
		}
	};
}
