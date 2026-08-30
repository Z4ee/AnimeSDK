#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicPresetApplyDetailViewModel; }
namespace RPG::Client { class RelicPresetPlanData; }

#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__DISPLAYCLASS12_0__BUILDPLANVIEWMODELS_B__0_OFFSET UNITYSDK_OFFSET(0x1B66E590)
#define RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66DF50)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetApplyDetailViewModel___c__DisplayClass12_0_TypeDefinitionIndex = 66855;

	class RelicPresetApplyDetailViewModel___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::RelicPresetApplyDetailViewModel* __4__this; // 0x10
		::RPG::AvatarSystem::IAvatar* avatar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildPlanViewModels_b__0(::RPG::Client::RelicPresetPlanData* a1, ::RPG::Client::RelicPresetPlanData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicPresetPlanData*, ::RPG::Client::RelicPresetPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETAPPLYDETAILVIEWMODEL___C__DISPLAYCLASS12_0__BUILDPLANVIEWMODELS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
