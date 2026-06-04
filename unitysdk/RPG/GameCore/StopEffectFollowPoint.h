#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_METHOD_3_08D739B7F12C29AD_OFFSET UNITYSDK_OFFSET(0x19CC0200)
#define RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_METHOD_3_C3B6D0D544765383_OFFSET UNITYSDK_OFFSET(0x19CC0160)
#define RPG_GAMECORE_STOPEFFECTFOLLOWPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC01C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopEffectFollowPoint_TypeDefinitionIndex = 19137;

	class StopEffectFollowPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* FollowPointName; // 0x20
		::RPG::MVector3 Postion; // 0x28
		::System::Boolean IsPositionFollow; // 0x34
		::System::Boolean IsRotationFollow; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOWPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3B6D0D544765383(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopEffectFollowPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopEffectFollowPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_METHOD_3_C3B6D0D544765383_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08D739B7F12C29AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopEffectFollowPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopEffectFollowPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOWPOINT_METHOD_3_08D739B7F12C29AD_OFFSET))(a1, a2);
		}
	};
}
