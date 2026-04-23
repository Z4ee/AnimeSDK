#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_354F1BE91F16B1F6_OFFSET UNITYSDK_OFFSET(0x18C95410)
#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_BB0F6EF9264CC575_OFFSET UNITYSDK_OFFSET(0x18C95490)
#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C95460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMapRotationVolumeUsable_TypeDefinitionIndex = 19910;

	class RefreshMapRotationVolumeUsable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* UsableSlot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_354F1BE91F16B1F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_354F1BE91F16B1F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB0F6EF9264CC575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_BB0F6EF9264CC575_OFFSET))(a1, a2);
		}
	};
}
