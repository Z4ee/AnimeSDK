#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleVCameraFreelook3rdConfigTemplateEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_27B2A221A7C7EA30_OFFSET UNITYSDK_OFFSET(0x1D11BF90)
#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_D288F80CB14D73FB_OFFSET UNITYSDK_OFFSET(0x1D11BF50)
#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11BF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Freelook3rdVCamConfigChange_TypeDefinitionIndex = 21890;

	class Freelook3rdVCamConfigChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SingleVCameraFreelook3rdConfigTemplateEnum Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D288F80CB14D73FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Freelook3rdVCamConfigChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_D288F80CB14D73FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27B2A221A7C7EA30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Freelook3rdVCamConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_27B2A221A7C7EA30_OFFSET))(a1, a2);
		}
	};
}
