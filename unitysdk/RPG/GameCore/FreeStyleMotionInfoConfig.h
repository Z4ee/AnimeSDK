#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG_METHOD_2_A28C629BC37FEBB7_OFFSET UNITYSDK_OFFSET(0x17220470)
#define RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172205C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleMotionInfoConfig_TypeDefinitionIndex = 14919;

	class FreeStyleMotionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MotionID; // 0x10
		::System::Single ExitTime; // 0x14
		::System::Single TransitionDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A28C629BC37FEBB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleMotionInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleMotionInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONINFOCONFIG_METHOD_2_A28C629BC37FEBB7_OFFSET))(a1, a2);
		}
	};
}
