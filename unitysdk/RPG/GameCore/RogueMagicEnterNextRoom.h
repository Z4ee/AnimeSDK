#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F76A2624D491B2F9_OFFSET UNITYSDK_OFFSET(0x1D93A8E0)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F9B1DE3B1AE36DFC_OFFSET UNITYSDK_OFFSET(0x1D93A9B0)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93A9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicEnterNextRoom_TypeDefinitionIndex = 21876;

	class RogueMagicEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F76A2624D491B2F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicEnterNextRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicEnterNextRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F76A2624D491B2F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9B1DE3B1AE36DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F9B1DE3B1AE36DFC_OFFSET))(a1, a2);
		}
	};
}
