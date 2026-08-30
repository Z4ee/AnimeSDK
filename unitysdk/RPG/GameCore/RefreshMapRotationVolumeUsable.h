#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_063050ADDA5E8300_OFFSET UNITYSDK_OFFSET(0x1D390350)
#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_BB0F6EF9264CC575_OFFSET UNITYSDK_OFFSET(0x1D390390)
#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D390380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMapRotationVolumeUsable_TypeDefinitionIndex = 20683;

	class RefreshMapRotationVolumeUsable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* UsableSlot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_063050ADDA5E8300(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_063050ADDA5E8300_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB0F6EF9264CC575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_METHOD_3_BB0F6EF9264CC575_OFFSET))(a1, a2);
		}
	};
}
