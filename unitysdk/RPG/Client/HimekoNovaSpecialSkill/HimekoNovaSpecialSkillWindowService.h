#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLWINDOWSERVICE_OPENDISPLAYWINDOW_1_OFFSET UNITYSDK_OFFSET(0x19823ED0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLWINDOWSERVICE_OPENDISPLAYWINDOW_OFFSET UNITYSDK_OFFSET(0x19823CC0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLWINDOWSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19823F50)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillWindowService_TypeDefinitionIndex = 79161;

	class HimekoNovaSpecialSkillWindowService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLWINDOWSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void OpenDisplayWindow(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLWINDOWSERVICE_OPENDISPLAYWINDOW_OFFSET))(this, a1, a2);
		}

		::System::Void OpenDisplayWindow_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLWINDOWSERVICE_OPENDISPLAYWINDOW_1_OFFSET))(this, a1, a2);
		}
	};
}
