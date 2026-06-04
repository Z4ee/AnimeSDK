#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_3654DF1D0F8F706B_OFFSET UNITYSDK_OFFSET(0x19C19350)
#define RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_FC376FD8A71B0431_OFFSET UNITYSDK_OFFSET(0x19C05190)
#define RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C05120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_PlayFreeStyle_TypeDefinitionIndex = 18992;

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

		static ::System::Void Method_4_3654DF1D0F8F706B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlayFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_3654DF1D0F8F706B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC376FD8A71B0431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PLAYFREESTYLE_METHOD_4_FC376FD8A71B0431_OFFSET))(a1, a2);
		}
	};
}
