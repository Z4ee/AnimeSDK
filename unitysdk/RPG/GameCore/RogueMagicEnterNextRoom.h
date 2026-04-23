#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F9B1DE3B1AE36DFC_OFFSET UNITYSDK_OFFSET(0x18D20E30)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F9F761549560FF30_OFFSET UNITYSDK_OFFSET(0x18D20D20)
#define RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x18D20E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicEnterNextRoom_TypeDefinitionIndex = 20988;

	class RogueMagicEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9F761549560FF30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicEnterNextRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicEnterNextRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F9F761549560FF30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9B1DE3B1AE36DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICENTERNEXTROOM_METHOD_3_F9B1DE3B1AE36DFC_OFFSET))(a1, a2);
		}
	};
}
