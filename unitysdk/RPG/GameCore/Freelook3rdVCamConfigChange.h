#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleVCameraFreelook3rdConfigTemplateEnum.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_27B2A221A7C7EA30_OFFSET UNITYSDK_OFFSET(0x17221AD0)
#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_ABE6B98A57AADD73_OFFSET UNITYSDK_OFFSET(0x17221A50)
#define RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17221AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Freelook3rdVCamConfigChange_TypeDefinitionIndex = 20323;

	class Freelook3rdVCamConfigChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SingleVCameraFreelook3rdConfigTemplateEnum Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABE6B98A57AADD73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Freelook3rdVCamConfigChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_ABE6B98A57AADD73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27B2A221A7C7EA30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Freelook3rdVCamConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREELOOK3RDVCAMCONFIGCHANGE_METHOD_3_27B2A221A7C7EA30_OFFSET))(a1, a2);
		}
	};
}
