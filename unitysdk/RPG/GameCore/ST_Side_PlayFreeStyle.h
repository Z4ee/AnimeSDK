#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_METHOD_4_87B5F9D3E3770089_OFFSET UNITYSDK_OFFSET(0x19C1AD90)
#define RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_METHOD_4_F8FC78F4F51C3D07_OFFSET UNITYSDK_OFFSET(0x19C0C710)
#define RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0C690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_PlayFreeStyle_TypeDefinitionIndex = 18993;

	class ST_Side_PlayFreeStyle : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* StoryAvatarID; // 0x18
		::System::UInt32 StoryMotionID; // 0x20
		::System::Boolean ForceStart; // 0x24
		::System::Single NormalizedTimeStart; // 0x28
		::System::Single NormalizedTransitionDuration; // 0x2C
		::System::String* LayerName; // 0x30
		::System::Boolean StopOnStateExit; // 0x38
		::System::Single StopTransitionTime; // 0x3C
		::System::Boolean OverrideMotionConfig; // 0x40
		::System::Single OverrideStartMotionSpeed; // 0x44
		::System::Single OverrideLoopMotionSpeed; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_87B5F9D3E3770089(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_PlayFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_METHOD_4_87B5F9D3E3770089_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8FC78F4F51C3D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_PLAYFREESTYLE_METHOD_4_F8FC78F4F51C3D07_OFFSET))(a1, a2);
		}
	};
}
