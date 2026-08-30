#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_C34896A22CFC097C_OFFSET UNITYSDK_OFFSET(0x1D4CD240)
#define RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_FC376FD8A71B0431_OFFSET UNITYSDK_OFFSET(0x1D4CD2B0)
#define RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CD290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_PlayFreeStyle_TypeDefinitionIndex = 19885;

	class ST_Main_PlayFreeStyle : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* StoryAvatarID; // 0x18
		::System::UInt32 StoryMotionID; // 0x20
		::System::Boolean ForceStart; // 0x24
		::System::Single NormalizedTimeWait; // 0x28
		::System::Single NormalizedTimeStart; // 0x2C
		::System::Single NormalizedTransitionDuration; // 0x30
		::System::Single Duration; // 0x34
		::System::Boolean OverrideMotionConfig; // 0x38
		::System::Single OverrideStartMotionSpeed; // 0x3C
		::System::Single OverrideLoopMotionSpeed; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C34896A22CFC097C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlayFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_C34896A22CFC097C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC376FD8A71B0431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_FC376FD8A71B0431_OFFSET))(a1, a2);
		}
	};
}
