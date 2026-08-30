#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DETACHAVATARCHANGE_METHOD_3_21D32480012FA88A_OFFSET UNITYSDK_OFFSET(0x1D818400)
#define RPG_GAMECORE_DETACHAVATARCHANGE_METHOD_3_E8054889A7F90633_OFFSET UNITYSDK_OFFSET(0x1D818450)
#define RPG_GAMECORE_DETACHAVATARCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D818440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DetachAvatarChange_TypeDefinitionIndex = 23343;

	class DetachAvatarChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NewAvatar; // 0x18
		::System::Boolean KillNewAvatar; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DETACHAVATARCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21D32480012FA88A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DetachAvatarChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DetachAvatarChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DETACHAVATARCHANGE_METHOD_3_21D32480012FA88A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8054889A7F90633(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DetachAvatarChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DetachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DETACHAVATARCHANGE_METHOD_3_E8054889A7F90633_OFFSET))(a1, a2);
		}
	};
}
